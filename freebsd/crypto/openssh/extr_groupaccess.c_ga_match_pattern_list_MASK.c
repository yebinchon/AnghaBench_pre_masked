
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (int ,char const*,int ) ;
 int VAR_1 ;

int
FUNC_1(const char *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  switch (FUNC_0(VAR_0[VAR_3], VAR_2, 0)) {
  case -1:
   return 0;
  case 0:
   continue;
  case 1:
   VAR_4 = 1;
  }
 }
 return VAR_4;
}
