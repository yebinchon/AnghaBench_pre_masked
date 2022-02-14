
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum demangling_styles { ____Placeholder_demangling_styles } demangling_styles ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*) ;
 char** VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 void* VAR_8 ;
 int FUNC_5 (int*,char***) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,char**,char*,int ,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,char const*,char*) ;
 char* VAR_13 ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (int ) ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_13 (int ,int) ;
 void* VAR_18 ;
 int FUNC_14 (char*) ;

int
FUNC_15 (int VAR_19, char **VAR_20)
{
  const char *VAR_21;
  const char *VAR_22;
  char *VAR_23;
  int VAR_24;







  FUNC_2 (VAR_4, VAR_3);
  FUNC_12 (VAR_4);

  VAR_13 = *VAR_20;
  FUNC_14 (VAR_13);

  FUNC_5 (&VAR_19, &VAR_20);

  FUNC_1 ();
  FUNC_10 ();

  VAR_21 = ((void*)0);
  VAR_22 = ((void*)0);
  VAR_23 = ((void*)0);
  while ((VAR_24 = FUNC_7 (VAR_19, VAR_20, "b:Ce:sfHhij:Vv", VAR_9, (int *) 0))
  != VAR_0)
    {
      switch (VAR_24)
 {
 case 0:
   break;
 case 'b':
   VAR_23 = VAR_11;
   break;
 case 'C':
   VAR_8 = VAR_5;
   if (VAR_11 != ((void*)0))
     {
       enum demangling_styles VAR_25;

       VAR_25 = FUNC_3 (VAR_11);
       if (VAR_25 == VAR_16)
  FUNC_6 (FUNC_0("unknown demangling style `%s'"),
         VAR_11);

       FUNC_4 (VAR_25);
     }
   break;
 case 'e':
   VAR_21 = VAR_11;
   break;
 case 's':
   VAR_7 = VAR_5;
   break;
 case 'f':
   VAR_18 = VAR_5;
   break;
 case 'v':
 case 'V':
   FUNC_8 ("addr2line");
   break;
 case 'h':
 case 'H':
   FUNC_13 (VAR_15, 0);
   break;
 case 'i':
   VAR_17 = VAR_5;
   break;
 case 'j':
   VAR_22 = VAR_11;
   break;
 default:
   FUNC_13 (VAR_14, 1);
   break;
 }
    }

  if (VAR_21 == ((void*)0))
    VAR_21 = "a.out";

  VAR_6 = VAR_20 + VAR_12;
  VAR_10 = VAR_19 - VAR_12;

  return FUNC_9 (VAR_21, VAR_22, VAR_23);
}
