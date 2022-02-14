
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (void*,int,size_t,int *) ;
 int FUNC_3 (char*,char const*) ;

void
FUNC_4(const char *VAR_0, void *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;
 FILE *VAR_4;

 VAR_4 = FUNC_1(VAR_0, "wb");
 if (VAR_4 == ((void*)0)) {
  FUNC_3("Can't open file %s for writing\n", VAR_0);
  return;
 }
 VAR_3 = FUNC_2(VAR_1, 1, VAR_2, VAR_4);
 if (VAR_3 < (ssize_t)VAR_2)
  FUNC_3("Can't write file %s\n", VAR_0);
 FUNC_0(VAR_4);
}
