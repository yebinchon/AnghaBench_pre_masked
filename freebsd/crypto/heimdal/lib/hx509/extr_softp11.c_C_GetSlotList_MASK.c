
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* CK_ULONG_PTR ;
typedef int* CK_SLOT_ID_PTR ;
typedef int CK_RV ;
typedef scalar_t__ CK_BBOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;

CK_RV
FUNC_2(CK_BBOOL VAR_1,
       CK_SLOT_ID_PTR VAR_2,
       CK_ULONG_PTR VAR_3)
{
    FUNC_0();
    FUNC_1("GetSlotList: %s\n",
     VAR_1 ? "tokenPresent" : "token not Present");
    if (VAR_2)
 VAR_2[0] = 1;
    *VAR_3 = 1;
    return VAR_0;
}
