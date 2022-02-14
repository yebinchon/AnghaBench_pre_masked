
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int*) ;
 int* VAR_1 ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_5 = FUNC_0(VAR_0) - 1; VAR_5 > 0; VAR_5 --) {
  if (VAR_2 >= VAR_0[VAR_5])
   break;
 }
 VAR_4 = VAR_5 << 5;
 for (VAR_5 = FUNC_0(VAR_1) - 1; VAR_5 > 0; VAR_5 --) {
  if (VAR_3 >= VAR_1[VAR_5])
   break;
 }
 VAR_4 |= VAR_5;
 return (VAR_4);
}
