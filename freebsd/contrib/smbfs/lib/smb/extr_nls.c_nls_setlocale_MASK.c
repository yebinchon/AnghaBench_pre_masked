
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;

int
FUNC_4(const char *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_1, VAR_4) == ((void*)0)) {
  FUNC_3("can't set locale '%s'\n", VAR_4);
  return VAR_0;
 }
 for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
  VAR_2[VAR_5] = FUNC_1(VAR_5);
  VAR_3[VAR_5] = FUNC_2(VAR_5);
 }
 return 0;
}
