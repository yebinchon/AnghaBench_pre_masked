
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,int*,int *,int ,int ,char*,int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_7, VAR_8;

 FUNC_0();
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_5[VAR_8] == 0) {
   VAR_5[VAR_8] = 1;
   break;
  }
 }
 if (VAR_8 == VAR_2)
  return (0);
 FUNC_2();
 VAR_7 = FUNC_3(VAR_6, VAR_5 + VAR_8, ((void*)0),
     VAR_1, 0, "newnfs %d", VAR_8);
 FUNC_1();
 if (VAR_7 == 0) {
  VAR_4++;
  VAR_3[VAR_8] = VAR_0;
 } else
  VAR_5[VAR_8] = 0;
 return (VAR_7);
}
