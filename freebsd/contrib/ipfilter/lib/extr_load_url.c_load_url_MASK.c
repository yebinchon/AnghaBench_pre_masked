
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int alist_t ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

alist_t *
FUNC_3(char *VAR_0)
{
 alist_t *VAR_1 = ((void*)0);

 if (FUNC_2(VAR_0, "file://", 7) == 0) {




  VAR_1 = FUNC_0(VAR_0);

 } else if (*VAR_0 == '/' || *VAR_0 == '.') {
  VAR_1 = FUNC_0(VAR_0);

 } else if (FUNC_2(VAR_0, "http://", 7) == 0) {
  VAR_1 = FUNC_1(VAR_0);
 }

 return VAR_1;
}
