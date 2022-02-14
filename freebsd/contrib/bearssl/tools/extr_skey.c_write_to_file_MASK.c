
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 size_t FUNC_3 (void const*,int,size_t,int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, const void *VAR_2, size_t VAR_3)
{
 FILE *VAR_4;

 VAR_4 = FUNC_1(VAR_1, "wb");
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_0,
   "ERROR: cannot open file '%s' for writing\n",
   VAR_1);
  return 0;
 }
 if (FUNC_3(VAR_2, 1, VAR_3, VAR_4) != VAR_3) {
  FUNC_0(VAR_4);
  FUNC_2(VAR_0,
   "ERROR: cannot write to file '%s'\n",
   VAR_1);
  return 0;
 }
 FUNC_0(VAR_4);
 return 1;
}
