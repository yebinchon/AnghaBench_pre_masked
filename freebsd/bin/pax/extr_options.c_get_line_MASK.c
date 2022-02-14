
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (int *,size_t*) ;
 int VAR_2 ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,size_t) ;

char *
FUNC_4(FILE *VAR_3)
{
 char *VAR_4, *VAR_5;
 size_t VAR_6;

 VAR_4 = FUNC_1(VAR_3, &VAR_6);
 if (!VAR_4) {
  VAR_2 = FUNC_0(VAR_3) ? VAR_0 : 0;
  return(0);
 }
 if (VAR_4[VAR_6-1] != '\n')
  VAR_6++;
 VAR_5 = FUNC_2(VAR_6);
 if (!VAR_5) {
  VAR_2 = VAR_1;
  return(0);
 }
 FUNC_3(VAR_5, VAR_4, VAR_6-1);
 VAR_5[VAR_6-1] = 0;
 return(VAR_5);
}
