
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_demangle_info {int dummy; } ;
typedef int debug_type ;
typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,char*,char const*) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,int) ;
 int FUNC_6 (char const*) ;
 unsigned int FUNC_7 (char const**) ;
 scalar_t__ FUNC_8 (char const**,unsigned int*) ;
 int FUNC_9 (struct stab_demangle_info*,char const**,int *) ;
 unsigned int FUNC_10 (char const*) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_12 (struct stab_demangle_info *VAR_3, const char **VAR_4,
   char **VAR_5)
{
  const char *VAR_6;
  unsigned int VAR_7, VAR_8;

  VAR_6 = *VAR_4;

  ++*VAR_4;


  VAR_7 = FUNC_7 (VAR_4);
  if (VAR_7 == 0 || FUNC_10 (*VAR_4) < VAR_7)
    {
      FUNC_6 (VAR_6);
      return VAR_1;
    }
  *VAR_4 += VAR_7;


  if (FUNC_8 (VAR_4, &VAR_7) == 0)
    {
      FUNC_6 (VAR_6);
      return VAR_1;
    }

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    {
      if (**VAR_4 == 'Z')
 {

   ++*VAR_4;
   if (! FUNC_9 (VAR_3, VAR_4, (debug_type *) ((void*)0)))
     return VAR_1;
 }
      else
 {
   const char *VAR_9;
   bfd_boolean VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
   bfd_boolean VAR_15;

   VAR_9 = *VAR_4;
   VAR_10 = VAR_1;
   VAR_11 = VAR_1;
   VAR_12 = VAR_1;
   VAR_13 = VAR_1;
   VAR_14 = VAR_1;
   VAR_15 = VAR_1;



   if (! FUNC_9 (VAR_3, VAR_4, (debug_type *) ((void*)0)))
     return VAR_1;

   while (*VAR_9 != '\0' && ! VAR_15)
     {
       switch (*VAR_9)
  {
  case 'P':
  case 'p':
  case 'R':
    VAR_10 = VAR_2;
    VAR_15 = VAR_2;
    break;
  case 'C':
  case 'S':
  case 'U':
  case 'V':
  case 'F':
  case 'M':
  case 'O':
    ++VAR_9;
    break;
  case 'Q':
    VAR_12 = VAR_2;
    VAR_15 = VAR_2;
    break;
  case 'T':
    FUNC_1 ();
  case 'v':
    FUNC_1 ();
  case 'x':
  case 'l':
  case 'i':
  case 's':
  case 'w':
    VAR_12 = VAR_2;
    VAR_15 = VAR_2;
    break;
  case 'b':
    VAR_14 = VAR_2;
    VAR_15 = VAR_2;
    break;
  case 'c':
    VAR_13 = VAR_2;
    VAR_15 = VAR_2;
    break;
  case 'r':
  case 'd':
  case 'f':
    VAR_11 = VAR_2;
    VAR_15 = VAR_2;
    break;
  default:

    VAR_12 = VAR_2;
    VAR_15 = VAR_2;
    break;
  }
     }

   if (VAR_12)
     {
       if (**VAR_4 == 'm')
  ++*VAR_4;
       while (FUNC_0 (**VAR_4))
  ++*VAR_4;
     }
   else if (VAR_13)
     {
       unsigned int VAR_16;

       if (**VAR_4 == 'm')
  ++*VAR_4;
       VAR_16 = FUNC_7 (VAR_4);
       if (VAR_16 == 0)
  {
    FUNC_6 (VAR_6);
    return VAR_1;
  }
     }
   else if (VAR_14)
     {
       unsigned int VAR_17;

       VAR_17 = FUNC_7 (VAR_4);
       if (VAR_17 != 0 && VAR_17 != 1)
  {
    FUNC_6 (VAR_6);
    return VAR_1;
  }
     }
   else if (VAR_11)
     {
       if (**VAR_4 == 'm')
  ++*VAR_4;
       while (FUNC_0 (**VAR_4))
  ++*VAR_4;
       if (**VAR_4 == '.')
  {
    ++*VAR_4;
    while (FUNC_0 (**VAR_4))
      ++*VAR_4;
  }
       if (**VAR_4 == 'e')
  {
    ++*VAR_4;
    while (FUNC_0 (**VAR_4))
      ++*VAR_4;
  }
     }
   else if (VAR_10)
     {
       unsigned int VAR_18;

       VAR_18 = FUNC_7 (VAR_4);
       if (VAR_18 == 0)
  {
    FUNC_6 (VAR_6);
    return VAR_1;
  }
       *VAR_4 += VAR_18;
     }
 }
    }



  if (VAR_5 != ((void*)0))
    {
      char *VAR_19, *VAR_20, *VAR_21, *VAR_22 = ((void*)0);
      char *VAR_23, *VAR_24;

      VAR_19 = FUNC_5 (VAR_6, *VAR_4 - VAR_6);

      VAR_20 = FUNC_2 ("NoSuchStrinG__", VAR_19, (const char *) ((void*)0));

      FUNC_4 (VAR_19);

      VAR_21 = FUNC_3 (VAR_20, VAR_0);

      FUNC_4 (VAR_20);

      if (VAR_21 != ((void*)0))
 VAR_22 = FUNC_11 (VAR_21, "::NoSuchStrinG");
      if (VAR_21 == ((void*)0) || VAR_22 == ((void*)0))
 {
   FUNC_6 (VAR_6);
   if (VAR_21 != ((void*)0))
     FUNC_4 (VAR_21);
   return VAR_1;
 }




      for (VAR_23 = VAR_24 = VAR_21; VAR_23 != VAR_22; ++VAR_23)
 if (*VAR_23 != ' '
     || (VAR_23[1] == '>' && VAR_23 > VAR_21 && VAR_23[-1] == '>'))
   *VAR_24++ = *VAR_23;

      *VAR_5 = FUNC_5 (VAR_21, VAR_24 - VAR_21);

      FUNC_4 (VAR_21);
    }

  return VAR_2;
}
