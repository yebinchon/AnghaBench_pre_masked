
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(int VAR_2, int *VAR_3, size_t VAR_4)
{
    int VAR_5 = VAR_0;

    if (VAR_4 != 0) {
 size_t VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
     if (VAR_3[VAR_6] == VAR_2) {
  VAR_5 = VAR_1;
  break;
     }
 }
    }
    return VAR_5;
}
