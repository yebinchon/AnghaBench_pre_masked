
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 long VAR_0 ;
 long VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 long FUNC_5 (int *,long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

long
FUNC_8(char *VAR_7, long VAR_8)
{
 FILE *VAR_9;
 long VAR_10;
 int VAR_11;

 VAR_9 = (*VAR_7 == '!') ? FUNC_4(VAR_7 + 1, "r") : FUNC_1(FUNC_7(VAR_7), "r");
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_5, "%s: %s\n", VAR_7, FUNC_6(VAR_3));
  VAR_2 = "cannot open input file";
  return VAR_0;
 }
 if ((VAR_10 = FUNC_5(VAR_9, VAR_8)) < 0) {
  FUNC_2(VAR_5, "%s: %s\n", VAR_7, FUNC_6(VAR_3));
  VAR_2 = "error reading input file";
 }
 if ((VAR_11 = (*VAR_7 == '!') ? FUNC_3(VAR_9) : FUNC_0(VAR_9)) < 0) {
  FUNC_2(VAR_5, "%s: %s\n", VAR_7, FUNC_6(VAR_3));
  VAR_2 = "cannot close input file";
 }
 if (VAR_10 < 0 || VAR_11 < 0)
  return VAR_0;
 if (!VAR_4)
  FUNC_2(VAR_6, "%lu\n", VAR_10);
 return VAR_1 - VAR_8;
}
