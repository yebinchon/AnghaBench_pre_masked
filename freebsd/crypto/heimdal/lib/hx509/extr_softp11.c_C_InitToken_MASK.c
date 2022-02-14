
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CK_UTF8CHAR_PTR ;
typedef int CK_ULONG ;
typedef scalar_t__ CK_SLOT_ID ;
typedef int CK_RV ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;

CK_RV
FUNC_2(CK_SLOT_ID VAR_1,
     CK_UTF8CHAR_PTR VAR_2,
     CK_ULONG VAR_3,
     CK_UTF8CHAR_PTR VAR_4)
{
    FUNC_0();
    FUNC_1("InitToken: slot %d\n", (int)VAR_1);
    return VAR_0;
}
