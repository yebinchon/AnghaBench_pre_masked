
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* CK_ULONG_PTR ;
typedef int CK_SLOT_ID ;
typedef int CK_RV ;
typedef int * CK_MECHANISM_TYPE_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;

CK_RV
FUNC_2(CK_SLOT_ID VAR_3,
     CK_MECHANISM_TYPE_PTR VAR_4,
     CK_ULONG_PTR VAR_5)
{
    FUNC_0();
    FUNC_1("GetMechanismList\n");

    *VAR_5 = 1;
    if (VAR_4 == VAR_2)
 return VAR_1;
    VAR_4[1] = VAR_0;

    return VAR_1;
}
