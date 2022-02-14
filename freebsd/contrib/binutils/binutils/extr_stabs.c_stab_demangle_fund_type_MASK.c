
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_demangle_info {int dhandle; int info; } ;
typedef int debug_type ;
typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char const*,int) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct stab_demangle_info*,char const**,char const**) ;
 int FUNC_12 (struct stab_demangle_info*,char const**,char**) ;
 int FUNC_13 (int ,int ,char const*,int,int ) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_15 (struct stab_demangle_info *VAR_5, const char **VAR_6,
    debug_type *VAR_7)
{
  const char *VAR_8;
  bfd_boolean VAR_9, VAR_10, VAR_11, VAR_12;
  bfd_boolean VAR_13;

  VAR_8 = *VAR_6;

  VAR_9 = VAR_3;
  VAR_10 = VAR_3;
  VAR_11 = VAR_3;
  VAR_12 = VAR_3;

  VAR_13 = VAR_3;
  while (! VAR_13)
    {
      switch (**VAR_6)
 {
 case 'C':
   VAR_9 = VAR_4;
   ++*VAR_6;
   break;

 case 'U':
   VAR_11 = VAR_4;
   ++*VAR_6;
   break;

 case 'S':
   VAR_12 = VAR_4;
   ++*VAR_6;
   break;

 case 'V':
   VAR_10 = VAR_4;
   ++*VAR_6;
   break;

 default:
   VAR_13 = VAR_4;
   break;
 }
    }

  switch (**VAR_6)
    {
    case '\0':
    case '_':

      FUNC_10 (VAR_8);
      break;

    case 'v':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle, "void");
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_6 (VAR_5->dhandle);
 }
      ++*VAR_6;
      break;

    case 'x':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle,
       (VAR_11
        ? "long long unsigned int"
        : "long long int"));
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_5 (VAR_5->dhandle, 8, VAR_11);
 }
      ++*VAR_6;
      break;

    case 'l':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle,
       (VAR_11
        ? "long unsigned int"
        : "long int"));
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_5 (VAR_5->dhandle, 4, VAR_11);
 }
      ++*VAR_6;
      break;

    case 'i':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle,
       (VAR_11
        ? "unsigned int"
        : "int"));
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_5 (VAR_5->dhandle, 4, VAR_11);
 }
      ++*VAR_6;
      break;

    case 's':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle,
       (VAR_11
        ? "short unsigned int"
        : "short int"));
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_5 (VAR_5->dhandle, 2, VAR_11);
 }
      ++*VAR_6;
      break;

    case 'b':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle, "bool");
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_2 (VAR_5->dhandle, 4);
 }
      ++*VAR_6;
      break;

    case 'c':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle,
       (VAR_11
        ? "unsigned char"
        : (VAR_12
           ? "signed char"
           : "char")));
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_5 (VAR_5->dhandle, 1, VAR_11);
 }
      ++*VAR_6;
      break;

    case 'w':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle, "__wchar_t");
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_5 (VAR_5->dhandle, 2, VAR_4);
 }
      ++*VAR_6;
      break;

    case 'r':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle, "long double");
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_4 (VAR_5->dhandle, 8);
 }
      ++*VAR_6;
      break;

    case 'd':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle, "double");
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_4 (VAR_5->dhandle, 8);
 }
      ++*VAR_6;
      break;

    case 'f':
      if (VAR_7 != ((void*)0))
 {
   *VAR_7 = FUNC_1 (VAR_5->dhandle, "float");
   if (*VAR_7 == VAR_2)
     *VAR_7 = FUNC_4 (VAR_5->dhandle, 4);
 }
      ++*VAR_6;
      break;

    case 'G':
      ++*VAR_6;
      if (! FUNC_0 (**VAR_6))
 {
   FUNC_10 (VAR_8);
   return VAR_3;
 }

    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
      {
 const char *VAR_14;

 if (! FUNC_11 (VAR_5, VAR_6, &VAR_14))
   return VAR_3;
 if (VAR_7 != ((void*)0))
   {
     char *VAR_15;

     VAR_15 = FUNC_9 (VAR_14, *VAR_6 - VAR_14);
     *VAR_7 = FUNC_1 (VAR_5->dhandle, VAR_15);
     FUNC_8 (VAR_15);
     if (*VAR_7 == VAR_2)
       {


  *VAR_7 = FUNC_13 (VAR_5->dhandle, VAR_5->info,
      VAR_14, *VAR_6 - VAR_14,
      VAR_1);
  if (*VAR_7 == VAR_2)
    return VAR_3;
       }
   }
      }
      break;

    case 't':
      {
 char *VAR_16;

 if (! FUNC_12 (VAR_5, VAR_6,
          VAR_7 != ((void*)0) ? &VAR_16 : ((void*)0)))
   return VAR_3;
 if (VAR_7 != ((void*)0))
   {
     *VAR_7 = FUNC_13 (VAR_5->dhandle, VAR_5->info,
         VAR_16, FUNC_14 (VAR_16),
         VAR_0);
     FUNC_8 (VAR_16);
     if (*VAR_7 == VAR_2)
       return VAR_3;
   }
      }
      break;

    default:
      FUNC_10 (VAR_8);
      return VAR_3;
    }

  if (VAR_7 != ((void*)0))
    {
      if (VAR_9)
 *VAR_7 = FUNC_3 (VAR_5->dhandle, *VAR_7);
      if (VAR_10)
 *VAR_7 = FUNC_7 (VAR_5->dhandle, *VAR_7);
    }

  return VAR_4;
}
