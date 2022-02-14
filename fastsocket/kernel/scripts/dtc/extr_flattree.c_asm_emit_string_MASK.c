
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, char *VAR_1, int VAR_2)
{
 FILE *VAR_3 = VAR_0;
 char VAR_4 = 0;

 if (VAR_2 != 0) {

  VAR_4 = VAR_1[VAR_2];
  VAR_1[VAR_2] = '\0';
 }

 FUNC_0(VAR_3, "\t.string\t\"%s\"\n", VAR_1);

 if (VAR_2 != 0) {
  VAR_1[VAR_2] = VAR_4;
 }
}
