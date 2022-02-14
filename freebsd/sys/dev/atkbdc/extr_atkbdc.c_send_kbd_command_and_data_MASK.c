
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

int
FUNC_3(KBDC VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    int VAR_7 = -1;

    for (VAR_6 = VAR_1; VAR_6 > 0; --VAR_6) {
 if (!FUNC_2(VAR_3, VAR_4))
     continue;
        VAR_7 = FUNC_1(FUNC_0(VAR_3));
        if (VAR_7 == VAR_0)
         break;
        else if (VAR_7 != VAR_2)
         return VAR_7;
    }
    if (VAR_6 <= 0)
 return VAR_7;

    for (VAR_6 = VAR_1, VAR_7 = -1; VAR_6 > 0; --VAR_6) {
 if (!FUNC_2(VAR_3, VAR_5))
     continue;
        VAR_7 = FUNC_1(FUNC_0(VAR_3));
        if (VAR_7 != VAR_2)
         break;
    }
    return VAR_7;
}
