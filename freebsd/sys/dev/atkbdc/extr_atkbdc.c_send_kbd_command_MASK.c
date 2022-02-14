
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

int
FUNC_3(KBDC VAR_2, int VAR_3)
{
    int VAR_4 = VAR_1;
    int VAR_5 = -1;

    while (VAR_4-- > 0) {
 if (!FUNC_2(VAR_2, VAR_3))
     continue;
        VAR_5 = FUNC_1(FUNC_0(VAR_2));
        if (VAR_5 == VAR_0)
         break;
    }
    return VAR_5;
}
