
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ debug_type ;
typedef scalar_t__ debug_method_variant ;
typedef scalar_t__ debug_method ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (void*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (void*,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,scalar_t__) ;
 scalar_t__ FUNC_5 (void*,char*,scalar_t__*) ;
 scalar_t__ FUNC_6 (void*,char const*,scalar_t__,int,int ,int ,int,scalar_t__) ;
 scalar_t__ FUNC_7 (void*,char const*,scalar_t__,int,int ,int ) ;
 int FUNC_8 (char const**,int *) ;
 scalar_t__ FUNC_9 (void*,struct stab_handle*,scalar_t__,char*,char const*,scalar_t__,char*,int ,int ,char const**) ;
 scalar_t__ FUNC_10 (void*,struct stab_handle*,char const*,char const**,scalar_t__**) ;
 char* FUNC_11 (char const*,int) ;
 scalar_t__ FUNC_12 (void*,struct stab_handle*,int const*) ;
 char* FUNC_13 (char const*,char) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,char*,int ) ;
 int FUNC_16 (char const*,char*) ;
 scalar_t__ FUNC_17 (unsigned int) ;
 scalar_t__ FUNC_18 (scalar_t__*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_19 (void *VAR_9, struct stab_handle *VAR_10,
      const char *VAR_11, const char **VAR_12,
      const int *VAR_13, debug_method **VAR_14)
{
  const char *VAR_15;
  debug_method *VAR_16;
  unsigned int VAR_17;
  unsigned int VAR_18;

  *VAR_14 = ((void*)0);

  VAR_15 = *VAR_12;

  VAR_18 = 0;
  VAR_16 = ((void*)0);
  VAR_17 = 0;

  while (**VAR_12 != ';')
    {
      const char *VAR_19;
      char *VAR_20;
      debug_method_variant *VAR_21;
      unsigned int VAR_22;
      unsigned int VAR_23;
      debug_type VAR_24;

      VAR_19 = FUNC_13 (*VAR_12, ':');
      if (VAR_19 == ((void*)0) || VAR_19[1] != ':')
 break;


      if ((*VAR_12)[0] != 'o' || (*VAR_12)[1] != 'p' || (*VAR_12)[2] != '$')
 {
   VAR_20 = FUNC_11 (*VAR_12, VAR_19 - *VAR_12);
   *VAR_12 = VAR_19 + 2;
 }
      else
 {






   *VAR_12 = VAR_19 + 2;
   for (VAR_19 = *VAR_12; *VAR_19 != '.' && *VAR_19 != '\0'; VAR_19++)
     ;
   if (*VAR_19 != '.')
     {
       FUNC_1 (VAR_15);
       return VAR_7;
     }
   VAR_20 = FUNC_11 (*VAR_12, VAR_19 - *VAR_12);
   *VAR_12 = VAR_19 + 1;
 }

      VAR_23 = 10;
      VAR_21 = ((debug_method_variant *)
    FUNC_17 (VAR_23 * sizeof *VAR_21));
      VAR_22 = 0;

      VAR_24 = VAR_3;

      do
 {
   debug_type VAR_25;
   bfd_boolean VAR_26;
   char *VAR_27;
   enum debug_visibility VAR_28;
   bfd_boolean VAR_29, VAR_30, VAR_31;
   bfd_vma VAR_32;
   debug_type VAR_33;
   const char *VAR_34;
   bfd_boolean VAR_35;

   if (VAR_24 != VAR_3)
     {

       VAR_25 = VAR_24;
       VAR_24 = VAR_3;
     }
   else
     {
       VAR_25 = FUNC_10 (VAR_9, VAR_10, (const char *) ((void*)0), VAR_12,
          (debug_type **) ((void*)0));
       if (VAR_25 == VAR_3)
  return VAR_7;
       if (**VAR_12 != ':')
  {
    FUNC_1 (VAR_15);
    return VAR_7;
  }
     }

   ++*VAR_12;
   VAR_19 = FUNC_13 (*VAR_12, ';');
   if (VAR_19 == ((void*)0))
     {
       FUNC_1 (VAR_15);
       return VAR_7;
     }

   VAR_26 = VAR_7;
   if (FUNC_4 (VAR_9, VAR_25) == VAR_0
       && FUNC_2 (VAR_9, VAR_25, &VAR_35) == ((void*)0))
     VAR_26 = VAR_8;

   VAR_27 = FUNC_11 (*VAR_12, VAR_19 - *VAR_12);
   *VAR_12 = VAR_19 + 1;

   switch (**VAR_12)
     {
     case '0':
       VAR_28 = VAR_4;
       break;
     case '1':
       VAR_28 = VAR_5;
       break;
     default:
       VAR_28 = VAR_6;
       break;
     }
   ++*VAR_12;

   VAR_29 = VAR_7;
   VAR_30 = VAR_7;
   switch (**VAR_12)
     {
     case 'A':

       ++*VAR_12;
       break;
     case 'B':

       VAR_29 = VAR_8;
       ++*VAR_12;
       break;
     case 'C':

       VAR_30 = VAR_8;
       ++*VAR_12;
       break;
     case 'D':

       VAR_29 = VAR_8;
       VAR_30 = VAR_8;
       ++*VAR_12;
       break;
     case '*':
     case '?':
     case '.':

       break;
     default:
       FUNC_16 (VAR_15, FUNC_0("const/volatile indicator missing"));
       break;
     }

   VAR_31 = VAR_7;
   switch (**VAR_12)
     {
     case '*':



       ++*VAR_12;
       VAR_32 = FUNC_8 (VAR_12, (bfd_boolean *) ((void*)0));
       if (**VAR_12 != ';')
  {
    FUNC_1 (VAR_15);
    return VAR_7;
  }
       ++*VAR_12;
       VAR_32 &= 0x7fffffff;

       if (**VAR_12 == ';' || **VAR_12 == '\0')
  {

    VAR_33 = VAR_3;
  }
       else
  {



    VAR_24 = FUNC_10 (VAR_9, VAR_10,
           (const char *) ((void*)0),
           VAR_12,
           (debug_type **) ((void*)0));
    if (**VAR_12 == ':')
      {

        VAR_33 = VAR_3;
      }
    else
      {
        VAR_33 = VAR_24;
        VAR_24 = VAR_3;
        if (**VAR_12 != ';')
   {
     FUNC_1 (VAR_15);
     return VAR_7;
   }
        ++*VAR_12;
      }
  }
       break;

     case '?':

       ++*VAR_12;
       VAR_31 = VAR_8;
       VAR_32 = 0;
       VAR_33 = VAR_3;
       if (FUNC_15 (VAR_27, VAR_20, FUNC_14 (VAR_20)) != 0)
  VAR_26 = VAR_8;
       break;

     default:
       FUNC_16 (VAR_15, "member function type missing");
       VAR_32 = 0;
       VAR_33 = VAR_3;
       break;

     case '.':
       ++*VAR_12;
       VAR_32 = 0;
       VAR_33 = VAR_3;
       break;
     }






   if (! VAR_26)
     VAR_34 = VAR_27;
   else
     {
       debug_type VAR_36, VAR_37;

       VAR_36 = FUNC_12 (VAR_9, VAR_10, VAR_13);
       if (VAR_36 == VAR_3)
  return VAR_7;
       VAR_37 = FUNC_3 (VAR_9, VAR_25);
       if (VAR_37 == VAR_3)
  {
    FUNC_1 (VAR_15);
    return VAR_7;
  }
       VAR_25 = FUNC_9 (VAR_9, VAR_10, VAR_36, VAR_20,
       VAR_11, VAR_37, VAR_27,
       VAR_29, VAR_30, &VAR_34);
       if (VAR_25 == VAR_3)
  return VAR_7;
     }

   if (VAR_22 + 1 >= VAR_23)
     {
       VAR_23 += 10;
       VAR_21 = ((debug_method_variant *)
     FUNC_18 (VAR_21,
        VAR_23 * sizeof *VAR_21));
     }

   if (! VAR_31)
     VAR_21[VAR_22] = FUNC_6 (VAR_9, VAR_34,
        VAR_25, VAR_28,
        VAR_29, VAR_30,
        VAR_32, VAR_33);
   else
     VAR_21[VAR_22] = FUNC_7 (VAR_9,
        VAR_34,
        VAR_25,
        VAR_28,
        VAR_29,
        VAR_30);
   if (VAR_21[VAR_22] == VAR_2)
     return VAR_7;

   ++VAR_22;
 }
      while (**VAR_12 != ';' && **VAR_12 != '\0');

      VAR_21[VAR_22] = VAR_2;

      if (**VAR_12 != '\0')
 ++*VAR_12;

      if (VAR_17 + 1 >= VAR_18)
 {
   VAR_18 += 10;
   VAR_16 = ((debug_method *)
       FUNC_18 (VAR_16, VAR_18 * sizeof *VAR_16));
 }

      VAR_16[VAR_17] = FUNC_5 (VAR_9, VAR_20, VAR_21);

      ++VAR_17;
    }

  if (VAR_16 != ((void*)0))
    VAR_16[VAR_17] = VAR_1;

  *VAR_14 = VAR_16;

  return VAR_8;
}
