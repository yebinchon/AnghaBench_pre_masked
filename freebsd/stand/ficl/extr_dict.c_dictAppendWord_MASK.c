
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNS8 ;
typedef int STRINGINFO ;
typedef int FICL_WORD ;
typedef int FICL_DICT ;
typedef int FICL_CODE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (char*) ;

FICL_WORD *FUNC_4(FICL_DICT *VAR_0,
                          char *VAR_1,
                          FICL_CODE VAR_2,
                          UNS8 VAR_3)
{
    STRINGINFO VAR_4;
    FUNC_0(VAR_4, FUNC_3(VAR_1));
    FUNC_1(VAR_4, VAR_1);
    return FUNC_2(VAR_0, VAR_4, VAR_2, VAR_3);
}
