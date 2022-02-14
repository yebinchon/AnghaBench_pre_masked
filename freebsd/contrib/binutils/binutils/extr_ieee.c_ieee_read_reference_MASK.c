
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_vars {struct ieee_var* vars; scalar_t__ alloc; } ;
struct ieee_var {unsigned long namlen; char const* name; scalar_t__* pslot; int kind; } ;
struct ieee_tag {char const* name; scalar_t__* fslots; int type; struct ieee_tag* next; } ;
struct ieee_info {int dhandle; struct ieee_tag* tags; struct ieee_vars* global_vars; struct ieee_vars vars; } ;
typedef scalar_t__ debug_type ;
typedef scalar_t__ debug_field ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int ,scalar_t__ const) ;
 scalar_t__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct ieee_info*,int const*,char*) ;
 int FUNC_7 (struct ieee_info*,int const**,int*) ;
 int FUNC_8 (struct ieee_info*,int const**,char const**,unsigned long*) ;
 unsigned long FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*,unsigned long) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (struct ieee_info *VAR_10, const bfd_byte **VAR_11)
{
  const bfd_byte *VAR_12;
  bfd_vma VAR_13;
  const char *VAR_14, *VAR_15;
  unsigned long VAR_16, VAR_17;
  debug_type *VAR_18;
  debug_type VAR_19;

  VAR_12 = *VAR_11;

  if (! FUNC_7 (VAR_10, VAR_11, &VAR_13))
    return VAR_3;



  if (VAR_13 == 3)
    {
      if (! FUNC_8 (VAR_10, VAR_11, &VAR_14, &VAR_16))
 return VAR_3;
    }

  if (! FUNC_8 (VAR_10, VAR_11, &VAR_15, &VAR_17))
    return VAR_3;

  VAR_18 = ((void*)0);
  if (VAR_13 != 3)
    {
      int VAR_20;






      for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
 {
   struct ieee_vars *VAR_21;
   int VAR_22;
   struct ieee_var *VAR_23 = ((void*)0);

   if (VAR_20 == 0)
     VAR_21 = &VAR_10->vars;
   else
     {
       VAR_21 = VAR_10->global_vars;
       if (VAR_21 == ((void*)0))
  break;
     }

   for (VAR_22 = (int) VAR_21->alloc - 1; VAR_22 >= 0; VAR_22--)
     {
       bfd_boolean VAR_24;

       VAR_23 = VAR_21->vars + VAR_22;

       if (VAR_23->pslot == ((void*)0)
    || VAR_23->namlen != VAR_17
    || FUNC_10 (VAR_23->name, VAR_15, VAR_17) != 0)
  continue;

       VAR_24 = VAR_3;
       switch (VAR_13)
  {
  default:
    FUNC_6 (VAR_10, VAR_12,
         FUNC_0("unrecognized C++ reference type"));
    return VAR_3;

  case 0:

    if (VAR_23->kind == VAR_6
        || VAR_23->kind == VAR_4
        || VAR_23->kind == VAR_5)
      VAR_24 = VAR_9;
    break;

  case 1:

    if (VAR_23->kind == VAR_8
        || VAR_23->kind == VAR_5)
      VAR_24 = VAR_9;
    break;

  case 2:

    if (VAR_23->kind == VAR_7)
      VAR_24 = VAR_9;
    break;
  }

       if (VAR_24)
  break;
     }

   if (VAR_22 >= 0)
     {
       VAR_18 = VAR_23->pslot;
       break;
     }
 }
    }
  else
    {
      struct ieee_tag *VAR_25;

      for (VAR_25 = VAR_10->tags; VAR_25 != ((void*)0); VAR_25 = VAR_25->next)
 {
   if (VAR_25->name[0] == VAR_14[0]
       && FUNC_10 (VAR_25->name, VAR_14, VAR_16) == 0
       && FUNC_9 (VAR_25->name) == VAR_16)
     {
       if (VAR_25->fslots != ((void*)0))
  {
    const debug_field *VAR_26;
    unsigned int VAR_27;

    VAR_26 = FUNC_2 (VAR_10->dhandle, VAR_25->type);
    if (VAR_26 == ((void*)0))
      {
        FUNC_6 (VAR_10, VAR_12,
      "C++ reference in class with no fields");
        return VAR_3;
      }

    for (VAR_27 = 0; *VAR_26 != VAR_0; VAR_26++, VAR_27++)
      {
        const char *VAR_28;

        VAR_28 = FUNC_1 (VAR_10->dhandle, *VAR_26);
        if (VAR_28 == ((void*)0))
   return VAR_3;
        if (FUNC_10 (VAR_28, VAR_15, VAR_17) == 0
     && FUNC_9 (VAR_28) == VAR_17)
   {
     VAR_18 = VAR_25->fslots + VAR_27;
     break;
   }
      }
  }

       break;
     }
 }
    }

  if (VAR_18 == ((void*)0))
    {
      FUNC_6 (VAR_10, VAR_12, FUNC_0("C++ reference not found"));
      return VAR_3;
    }



  if (FUNC_4 (VAR_10->dhandle, *VAR_18) != VAR_1)
    {
      FUNC_6 (VAR_10, VAR_12, FUNC_0("C++ reference is not pointer"));
      return VAR_3;
    }

  VAR_19 = FUNC_3 (VAR_10->dhandle, *VAR_18);
  *VAR_18 = FUNC_5 (VAR_10->dhandle, VAR_19);
  if (*VAR_18 == VAR_2)
    return VAR_3;

  return VAR_9;
}
