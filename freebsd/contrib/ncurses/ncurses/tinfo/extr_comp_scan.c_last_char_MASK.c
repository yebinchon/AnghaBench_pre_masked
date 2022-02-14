
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(int VAR_1)
{
    size_t VAR_2 = FUNC_2(VAR_0);
    int VAR_3 = 0;

    while (VAR_2--) {
 if (!FUNC_1(FUNC_0(VAR_0[VAR_2]))) {
     if (VAR_1 < (int) VAR_2)
  VAR_3 = VAR_0[(int) VAR_2 - VAR_1];
     break;
 }
    }
    return VAR_3;
}
