
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_4(ENGINE *VAR_1)
{
    if (!FUNC_1(VAR_1))
        return 0;
    if (!VAR_0)
        VAR_0 = FUNC_2();
    if (!VAR_0 || !FUNC_3(VAR_0, VAR_1)) {
        FUNC_0(VAR_1);
        return 0;
    }
    return 1;
}
