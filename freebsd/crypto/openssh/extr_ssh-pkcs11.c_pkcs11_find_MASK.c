
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pkcs11_provider {TYPE_1__* slotinfo; TYPE_2__* function_list; } ;
struct TYPE_4__ {char* (* C_FindObjectsInit ) (int ,int *,size_t) ;char* (* C_FindObjects ) (int ,int *,int,size_t*) ;char* (* C_FindObjectsFinal ) (int ) ;} ;
struct TYPE_3__ {int session; } ;
typedef size_t CK_ULONG ;
typedef int CK_SESSION_HANDLE ;
typedef char* CK_RV ;
typedef int CK_OBJECT_HANDLE ;
typedef TYPE_2__ CK_FUNCTION_LIST ;
typedef int CK_ATTRIBUTE ;


 char* VAR_0 ;
 int FUNC_0 (char*,size_t,size_t,char*) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int ,int *,size_t) ;
 char* FUNC_3 (int ,int *,int,size_t*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct pkcs11_provider *VAR_1, CK_ULONG VAR_2, CK_ATTRIBUTE *VAR_3,
    CK_ULONG VAR_4, CK_OBJECT_HANDLE *VAR_5)
{
 CK_FUNCTION_LIST *VAR_6;
 CK_SESSION_HANDLE VAR_7;
 CK_ULONG VAR_8 = 0;
 CK_RV VAR_9;
 int VAR_10 = -1;

 VAR_6 = VAR_1->function_list;
 VAR_7 = VAR_1->slotinfo[VAR_2].session;
 if ((VAR_9 = VAR_6->C_FindObjectsInit(VAR_7, VAR_3, VAR_4)) != VAR_0) {
  FUNC_1("C_FindObjectsInit failed (nattr %lu): %lu", VAR_4, VAR_9);
  return (-1);
 }
 if ((VAR_9 = VAR_6->C_FindObjects(VAR_7, VAR_5, 1, &VAR_8)) != VAR_0 ||
     VAR_8 != 1) {
  FUNC_0("C_FindObjects failed (nfound %lu nattr %lu): %lu",
      VAR_8, VAR_4, VAR_9);
 } else
  VAR_10 = 0;
 if ((VAR_9 = VAR_6->C_FindObjectsFinal(VAR_7)) != VAR_0)
  FUNC_1("C_FindObjectsFinal failed: %lu", VAR_9);
 return (VAR_10);
}
