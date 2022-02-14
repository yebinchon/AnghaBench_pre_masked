
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee_var {char* name; unsigned long namlen; scalar_t__* pslot; void* kind; scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__* bsp; TYPE_1__* stack; } ;
struct TYPE_6__ {int alloc; struct ieee_var* vars; } ;
struct ieee_info {TYPE_2__ blockstack; int abfd; void* dhandle; TYPE_3__ vars; } ;
typedef int ieee_record_enum_type ;
typedef scalar_t__ debug_type ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_4__ {int kind; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,scalar_t__) ;
 scalar_t__ FUNC_2 (void*,scalar_t__*,char const*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*,int,int) ;
 int FUNC_5 (void*,char*,scalar_t__,int ,int) ;


 int FUNC_6 (struct ieee_info*,int const*,int ) ;
 int FUNC_7 (struct ieee_info*,int const**,int) ;
 int FUNC_8 (struct ieee_info*,int const**,int*) ;
 int FUNC_9 (struct ieee_info*,int const**,char const**,unsigned long*,int *) ;
 int FUNC_10 (struct ieee_info*,int const**,int*,int *) ;
 int FUNC_11 (struct ieee_info*,int const**,scalar_t__*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct ieee_info*,int const**,int*) ;
 int FUNC_14 (struct ieee_info*,int const**,char const**,unsigned long*) ;
 int FUNC_15 (struct ieee_var*,int ,unsigned int) ;
 char* FUNC_16 (char const*,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (struct ieee_var*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_19 (struct ieee_info *VAR_13, const bfd_byte **VAR_14)
{
  const bfd_byte *VAR_15, *VAR_16;
  bfd_vma VAR_17;
  struct ieee_var *VAR_18;
  debug_type VAR_19;
  bfd_vma VAR_20;
  void *VAR_21;
  bfd_vma VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
  const char *VAR_27;
  unsigned long VAR_28;
  char *VAR_29;
  bfd_boolean VAR_30;
  int VAR_31;

  VAR_15 = *VAR_14;

  if (! FUNC_8 (VAR_13, VAR_14, &VAR_17)
      || ! FUNC_11 (VAR_13, VAR_14, &VAR_19))
    return VAR_7;

  VAR_16 = *VAR_14;

  if (! FUNC_8 (VAR_13, VAR_14, &VAR_20))
    return VAR_7;

  if (VAR_17 == 0)
    {
      VAR_18 = ((void*)0);
      VAR_27 = "";
      VAR_28 = 0;
    }
  else if (VAR_17 < 32)
    {


      if (VAR_20 == 9)
 return FUNC_8 (VAR_13, VAR_14, &VAR_22);

      FUNC_6 (VAR_13, VAR_15, FUNC_0("illegal variable index"));
      return VAR_7;
    }
  else
    {
      VAR_17 -= 32;
      if (VAR_17 >= VAR_13->vars.alloc
   || VAR_13->vars.vars[VAR_17].name == ((void*)0))
 {


   if (VAR_20 == 62)
     {
       if (VAR_17 >= VAR_13->vars.alloc)
  {
    unsigned int VAR_32;

    VAR_32 = VAR_13->vars.alloc;
    if (VAR_32 == 0)
      VAR_32 = 4;
    while (VAR_17 >= VAR_32)
      VAR_32 *= 2;
    VAR_13->vars.vars = ((struct ieee_var *)
         FUNC_18 (VAR_13->vars.vars,
            (VAR_32
      * sizeof *VAR_13->vars.vars)));
    FUNC_15 (VAR_13->vars.vars + VAR_13->vars.alloc, 0,
     ((VAR_32 - VAR_13->vars.alloc)
      * sizeof *VAR_13->vars.vars));
    VAR_13->vars.alloc = VAR_32;
  }

       VAR_18 = VAR_13->vars.vars + VAR_17;
       VAR_18->name = "";
       VAR_18->namlen = 0;
     }
   else
     {
       FUNC_6 (VAR_13, VAR_15, FUNC_0("undefined variable in ATN"));
       return VAR_7;
     }
 }

      VAR_18 = VAR_13->vars.vars + VAR_17;

      VAR_18->type = VAR_19;

      VAR_27 = VAR_18->name;
      VAR_28 = VAR_18->namlen;
    }

  VAR_21 = VAR_13->dhandle;





  if (VAR_18 != ((void*)0)
      && VAR_19 != VAR_6
      && FUNC_1 (VAR_21, VAR_19) == VAR_1)
    {
      switch (VAR_20)
 {
 case 1:
 case 2:
 case 3:
 case 5:
 case 8:
 case 10:
   VAR_18->pslot = (debug_type *) FUNC_17 (sizeof *VAR_18->pslot);
   *VAR_18->pslot = VAR_19;
   VAR_19 = FUNC_2 (VAR_21, VAR_18->pslot,
        (const char *) ((void*)0));
   VAR_18->type = VAR_19;
   break;
 }
    }

  switch (VAR_20)
    {
    default:
      FUNC_6 (VAR_13, VAR_16, FUNC_0("unknown ATN type"));
      return VAR_7;

    case 1:

      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22))
 return VAR_7;
      VAR_29 = FUNC_16 (VAR_27, VAR_28);
      if (VAR_19 == ((void*)0))
 VAR_19 = FUNC_3 (VAR_21);
      if (VAR_18 != ((void*)0))
 VAR_18->kind = VAR_10;
      return FUNC_5 (VAR_21, VAR_29, VAR_19, VAR_2, VAR_22);

    case 2:

      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22))
 return VAR_7;
      VAR_29 = FUNC_16 (VAR_27, VAR_28);
      if (VAR_19 == ((void*)0))
 VAR_19 = FUNC_3 (VAR_21);
      if (VAR_18 != ((void*)0))
 VAR_18->kind = VAR_10;
      return FUNC_5 (VAR_21, VAR_29, VAR_19, VAR_4,
        FUNC_12 (VAR_13->abfd, VAR_22));

    case 3:

      if (! FUNC_13 (VAR_13, VAR_14, &VAR_22))
 return VAR_7;
      VAR_29 = FUNC_16 (VAR_27, VAR_28);
      if (VAR_19 == ((void*)0))
 VAR_19 = FUNC_3 (VAR_21);
      if (VAR_13->blockstack.bsp <= VAR_13->blockstack.stack)
 VAR_31 = 0;
      else
 VAR_31 = VAR_13->blockstack.bsp[-1].kind;
      if (VAR_18 != ((void*)0))
 {
   if (VAR_31 == 4 || VAR_31 == 6)
     VAR_18->kind = VAR_10;
   else
     VAR_18->kind = VAR_11;
 }
      return FUNC_5 (VAR_21, VAR_29, VAR_19,
        (VAR_31 == 4 || VAR_31 == 6
         ? VAR_3
         : VAR_5),
        VAR_22);

    case 4:

      if (VAR_18 != ((void*)0))
 VAR_18->kind = VAR_8;
      return VAR_12;

    case 5:

      if (VAR_18 != ((void*)0))
 VAR_18->kind = VAR_8;
      return VAR_12;

    case 7:
      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22)
   || ! FUNC_8 (VAR_13, VAR_14, &VAR_23)
   || ! FUNC_10 (VAR_13, VAR_14, &VAR_24, &VAR_30))
 return VAR_7;
      if (VAR_30)
 {
   if (! FUNC_10 (VAR_13, VAR_14, &VAR_25, &VAR_30))
     return VAR_7;
 }




      if (! FUNC_13 (VAR_13, VAR_14, &VAR_24))
 return VAR_7;



      return FUNC_4 (VAR_21, VAR_22, VAR_24);

    case 8:

      if (! FUNC_13 (VAR_13, VAR_14, &VAR_22))
 return VAR_7;
      VAR_29 = FUNC_16 (VAR_27, VAR_28);
      if (VAR_19 == ((void*)0))
 VAR_19 = FUNC_3 (VAR_21);
      if (VAR_18 != ((void*)0))
 VAR_18->kind = VAR_9;
      return FUNC_5 (VAR_21, VAR_29, VAR_19, VAR_0, VAR_22);

    case 9:

      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22))
 return VAR_7;


      return VAR_12;

    case 10:



      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22)
   || ! FUNC_10 (VAR_13, VAR_14, &VAR_23, &VAR_30))
 return VAR_7;




      VAR_29 = FUNC_16 (VAR_27, VAR_28);
      if (VAR_19 == ((void*)0))
 VAR_19 = FUNC_3 (VAR_21);
      if (VAR_18 != ((void*)0))
 VAR_18->kind = VAR_10;
      return FUNC_5 (VAR_21, VAR_29, VAR_19, VAR_4, VAR_22);

    case 11:

      FUNC_6 (VAR_13, VAR_16, FUNC_0("unsupported ATN11"));


      return VAR_12;

    case 12:

      VAR_24 = 0;
      VAR_25 = 0x80;
      VAR_26 = 0;
      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22)
   || ! FUNC_8 (VAR_13, VAR_14, &VAR_23)
   || ! FUNC_10 (VAR_13, VAR_14, &VAR_24, &VAR_30))
 return VAR_7;
      if (VAR_30)
 {
   if (! FUNC_10 (VAR_13, VAR_14, &VAR_25, &VAR_30))
     return VAR_7;
   if (VAR_30)
     {
       if (! FUNC_10 (VAR_13, VAR_14, &VAR_26, &VAR_30))
  return VAR_7;
     }
 }



      FUNC_6 (VAR_13, VAR_16, FUNC_0("unsupported ATN12"));


      return VAR_12;

    case 16:


      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22)
   || ! FUNC_10 (VAR_13, VAR_14, &VAR_23, &VAR_30))
 return VAR_7;
      if (VAR_30)
 {
   if (! FUNC_10 (VAR_13, VAR_14, &VAR_23, &VAR_30))
     return VAR_7;
   if (VAR_30)
     {
       if (! FUNC_9 (VAR_13, VAR_14, &VAR_27, &VAR_28, &VAR_30))
  return VAR_7;
     }
 }

      if ((ieee_record_enum_type) **VAR_14 == 128)
 {
   if (! FUNC_13 (VAR_13, VAR_14, &VAR_24))
     return VAR_7;
 }

      return VAR_12;

    case 19:

      VAR_23 = 0;
      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22)
   || ! FUNC_10 (VAR_13, VAR_14, &VAR_23, &VAR_30)
   || ! FUNC_13 (VAR_13, VAR_14, &VAR_24))
 return VAR_7;
      VAR_29 = FUNC_16 (VAR_27, VAR_28);

      return FUNC_5 (VAR_21, VAR_29,
        FUNC_3 (VAR_21),
        VAR_23 != 0 ? VAR_0 : VAR_5,
        VAR_24);

    case 62:

    case 63:

    case 64:

      if (! FUNC_8 (VAR_13, VAR_14, &VAR_22)
   || ! FUNC_8 (VAR_13, VAR_14, &VAR_23)
   || ! FUNC_9 (VAR_13, VAR_14, &VAR_27, &VAR_28, &VAR_30))
 return VAR_7;

      if (VAR_20 == 62 && VAR_22 == 80)
 {
   if (VAR_30)
     {
       FUNC_6 (VAR_13, VAR_16,
     FUNC_0("unexpected string in C++ misc"));
       return VAR_7;
     }
   return FUNC_7 (VAR_13, VAR_14, VAR_23);
 }



      for (; VAR_23 > 0; --VAR_23)
 {
   switch ((ieee_record_enum_type) **VAR_14)
     {
     default:
       FUNC_6 (VAR_13, *VAR_14, FUNC_0("bad misc record"));
       return VAR_7;

     case 129:
       if (! FUNC_14 (VAR_13, VAR_14, &VAR_27, &VAR_28))
  return VAR_7;
       break;

     case 128:
       if (! FUNC_13 (VAR_13, VAR_14, &VAR_24))
  return VAR_7;
       break;
     }
 }

      return VAR_12;
    }


}
