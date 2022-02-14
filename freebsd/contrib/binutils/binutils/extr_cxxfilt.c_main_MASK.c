
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbuffer ;
typedef enum demangling_styles { ____Placeholder_demangling_styles } demangling_styles ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;


 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;

 int FUNC_4 (int*,char***) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int,char**,char*,int ,int*) ;




 char* FUNC_10 () ;

 int VAR_6 ;

 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (char*) ;
 char* VAR_9 ;
 int FUNC_12 (int) ;
 char* FUNC_13 () ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_14 (char const*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (char*) ;

int
FUNC_17 (int VAR_14, char **VAR_15)
{
  int VAR_16;
  const char *VAR_17;
  enum demangling_styles VAR_18 = 135;

  VAR_9 = VAR_15[0];
  FUNC_16 (VAR_9);

  FUNC_4 (&VAR_14, &VAR_15);

  while ((VAR_16 = FUNC_9 (VAR_14, VAR_15, "_hinps:tv", VAR_6, (int *) 0)) != VAR_3)
    {
      switch (VAR_16)
 {
 case '?':
   FUNC_15 (VAR_10, 1);
   break;
 case 'h':
   FUNC_15 (VAR_11, 0);
 case 'n':
   VAR_12 = 0;
   break;
 case 'p':
   VAR_5 &= ~ VAR_0;
   break;
 case 't':
   VAR_5 |= VAR_1;
   break;
 case 'i':
   VAR_5 &= ~ VAR_2;
   break;
 case 'v':
   FUNC_11 ("c++filt");
   return 0;
 case '_':
   VAR_12 = 1;
   break;
 case 's':
   VAR_18 = FUNC_1 (VAR_7);
   if (VAR_18 == VAR_13)
     {
       FUNC_7 (VAR_10, "%s: unknown demangling style `%s'\n",
         VAR_9, VAR_7);
       return 1;
     }
   FUNC_2 (VAR_18);
   break;
 }
    }

  if (VAR_8 < VAR_14)
    {
      for ( ; VAR_8 < VAR_14; VAR_8++)
 {
   FUNC_3 (VAR_15[VAR_8]);
   FUNC_12 ('\n');
 }

      return 0;
    }

  switch (VAR_4)
    {
    case 132:
    case 128:
    case 136:
    case 129:
    case 134:
    case 133:
    case 131:
    case 135:
      VAR_17 = FUNC_13 ();
      break;
    case 130:
      VAR_17 = FUNC_10 ();
      break;
    default:



      FUNC_5 ("Internal error: no symbol alphabet for current style");
    }

  for (;;)
    {
      static char VAR_19[32767];
      unsigned VAR_20 = 0;

      VAR_16 = FUNC_8 ();

      while (VAR_16 != VAR_3 && (FUNC_0 (VAR_16) || FUNC_14 (VAR_17, VAR_16)))
 {
   if (VAR_20 >= sizeof (VAR_19) - 1)
     break;
   VAR_19[VAR_20++] = VAR_16;
   VAR_16 = FUNC_8 ();
 }

      if (VAR_20 > 0)
 {
   VAR_19[VAR_20] = 0;
   FUNC_3 (VAR_19);
 }

      if (VAR_16 == VAR_3)
 break;



      FUNC_12 (VAR_16);
      if (VAR_16 == '\n')
 FUNC_6 (VAR_11);
    }

  FUNC_6 (VAR_11);
  return 0;
}
