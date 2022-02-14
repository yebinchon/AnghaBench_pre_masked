
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 () ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char*,int *) ;
 int VAR_0 ;



__attribute__((used)) static void
FUNC_3 (FILE *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  const char * VAR_6;
  switch (VAR_0)
    {
    case 128:
      VAR_6 = "";
      if (VAR_5 == 2)
 VAR_6 = "color: red ";
      else if (VAR_4)
 VAR_6 = "color: blue ";
      else if (VAR_5 == 3)
 VAR_6 = "color: green ";
      FUNC_1 (VAR_1,
        "edge: { sourcename: \"%s.%d\" targetname: \"%s.%d\" %s",
        FUNC_0 (), VAR_2,
        FUNC_0 (), VAR_3, VAR_6);
      if (VAR_5)
 FUNC_1 (VAR_1, "class: %d ", VAR_5);
      FUNC_2 ("}\n", VAR_1);
      break;
    case 129:
      break;
    }
}
