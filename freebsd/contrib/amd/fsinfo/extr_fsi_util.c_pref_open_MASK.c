
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (int *) ;
 void FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;

FILE *
FUNC_6(char *VAR_1, char *VAR_2, void (*VAR_3) (FILE *, char *), char *VAR_4)
{
  char VAR_5[VAR_0];
  FILE *VAR_6;

  FUNC_5(VAR_5, sizeof(VAR_5), "%s%s", VAR_1, VAR_2);
  FUNC_2("Writing %s info for %s to %s", VAR_1, VAR_2, VAR_5);
  VAR_6 = FUNC_1(VAR_5, "w");
  if (VAR_6) {
    (*VAR_3) (VAR_6, VAR_4);
    FUNC_3(VAR_6);
  } else {
    FUNC_0("can't open %s for writing", VAR_5);
  }

  return VAR_6;
}
