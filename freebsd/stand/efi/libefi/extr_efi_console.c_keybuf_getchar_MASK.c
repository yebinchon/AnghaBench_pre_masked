
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int
FUNC_0(void)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2] != 0) {
   VAR_3 = VAR_1[VAR_2];
   VAR_1[VAR_2] = 0;
   break;
  }
 }

 return (VAR_3);
}
