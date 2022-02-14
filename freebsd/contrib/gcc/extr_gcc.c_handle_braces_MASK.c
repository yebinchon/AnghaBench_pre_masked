
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,char const) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*,int) ;
 char* FUNC_5 (char const*,char const*,char const*,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,char const*,int) ;

__attribute__((used)) static const char *
FUNC_8 (const char *VAR_0)
{
  const char *VAR_1, *VAR_2;
  const char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
  const char *VAR_5 = VAR_0;

  bool VAR_6;
  bool VAR_7;
  bool VAR_8;
  bool VAR_9;

  bool VAR_10 = 0;
  bool VAR_11 = 0;
  bool VAR_12 = 0;
  bool VAR_13 = 0;
  bool VAR_14 = 1;
  bool VAR_15 = 0;
  bool VAR_16 = 0;



  do
    {
      if (VAR_10)
 goto invalid;



      VAR_9 = VAR_6 = VAR_7 = VAR_8 = 0;

      do { while (*VAR_0 == ' ' || *VAR_0 == '\t') VAR_0++; } while (0);
      if (*VAR_0 == '!')
 VAR_0++, VAR_8 = 1;

      do { while (*VAR_0 == ' ' || *VAR_0 == '\t') VAR_0++; } while (0);
      if (*VAR_0 == '.')
 VAR_0++, VAR_6 = 1;

      VAR_1 = VAR_0;
      while (FUNC_0(*VAR_0) || *VAR_0 == '-' || *VAR_0 == '+' || *VAR_0 == '='
      || *VAR_0 == ',' || *VAR_0 == '.' || *VAR_0 == '@')
 VAR_0++;
      VAR_2 = VAR_0;

      if (*VAR_0 == '*')
 VAR_0++, VAR_7 = 1;

      do { while (*VAR_0 == ' ' || *VAR_0 == '\t') VAR_0++; } while (0);
      switch (*VAR_0)
 {
 case '&': case '}':

   VAR_11 = 1;
   if (VAR_12 || VAR_15 || VAR_8 || VAR_6
       || VAR_1 == VAR_2)
     goto invalid;

   FUNC_4 (VAR_1, VAR_2, VAR_7);

   if (*VAR_0 == '}')
     FUNC_6 ();
   break;

 case '|': case ':':


   VAR_12 = 1;
   if (VAR_11)
     goto invalid;

   if (VAR_1 == VAR_2)
     {
       if (!VAR_15 || VAR_13 || *VAR_0 == '|'
    || VAR_8 || VAR_6 || VAR_7)
  goto invalid;



       VAR_10 = 1;
       VAR_13 = !VAR_16;
       VAR_14 = 0;
     }
   else
     {
        if (VAR_6 && VAR_7)
   goto invalid;

        if (!VAR_7)
   VAR_14 = 0;



        if (!VAR_13 && !VAR_16)
   {
     if (VAR_6)
       VAR_9 = FUNC_3 (VAR_1, VAR_2);
     else
       VAR_9 = FUNC_7 (VAR_1, VAR_2, VAR_7);

     if (VAR_9 != VAR_8)
       {
         VAR_13 = 1;
         VAR_3 = VAR_1;
         VAR_4 = VAR_2;
       }
   }
     }

   if (*VAR_0 == ':')
     {


       VAR_0 = FUNC_5 (VAR_0 + 1, VAR_3, VAR_4, VAR_14,
          VAR_13 && !VAR_16);
       if (VAR_0 == 0)
  return 0;



       if (*VAR_0 == ';')
  {
    VAR_15 = 1;
    VAR_16 |= VAR_13;
    VAR_13 = 0;
    VAR_14 = 1;
    VAR_3 = VAR_4 = ((void*)0);
  }
     }
   break;

 default:
   goto invalid;
 }
    }
  while (*VAR_0++ != '}');

  return VAR_0;

 invalid:
  FUNC_2 ("braced spec '%s' is invalid at '%c'", VAR_5, *VAR_0);


}
