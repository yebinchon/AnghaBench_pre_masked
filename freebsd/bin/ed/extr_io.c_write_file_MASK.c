
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 long VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 long FUNC_7 (int *,long,long) ;

long
FUNC_8(char *VAR_6, const char *VAR_7, long VAR_8, long VAR_9)
{
 FILE *VAR_10;
 long VAR_11;
 int VAR_12;

 VAR_10 = (*VAR_6 == '!') ? FUNC_4(VAR_6+1, "w") : FUNC_1(FUNC_6(VAR_6), VAR_7);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_4, "%s: %s\n", VAR_6, FUNC_5(VAR_2));
  VAR_1 = "cannot open output file";
  return VAR_0;
 }
 if ((VAR_11 = FUNC_7(VAR_10, VAR_8, VAR_9)) < 0) {
  FUNC_2(VAR_4, "%s: %s\n", VAR_6, FUNC_5(VAR_2));
  VAR_1 = "error writing output file";
 }
 if ((VAR_12 = (*VAR_6 == '!') ? FUNC_3(VAR_10) : FUNC_0(VAR_10)) < 0) {
  FUNC_2(VAR_4, "%s: %s\n", VAR_6, FUNC_5(VAR_2));
  VAR_1 = "cannot close output file";
 }
 if (VAR_11 < 0 || VAR_12 < 0)
  return VAR_0;
 if (!VAR_3)
  FUNC_2(VAR_5, "%lu\n", VAR_11);
 return VAR_8 ? VAR_9 - VAR_8 + 1 : 0;
}
