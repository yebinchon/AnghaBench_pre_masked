
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pkcs11_provider {size_t nslots; int handle; TYPE_2__* function_list; scalar_t__ valid; TYPE_1__* slotinfo; int refcount; } ;
struct TYPE_4__ {int (* C_Finalize ) (int *) ;int (* C_CloseSession ) (scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__ session; } ;
typedef size_t CK_ULONG ;
typedef int CK_RV ;


 int VAR_0 ;
 int FUNC_0 (char*,struct pkcs11_provider*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct pkcs11_provider *VAR_1)
{
 CK_RV VAR_2;
 CK_ULONG VAR_3;

 FUNC_0("pkcs11_provider_finalize: %p refcount %d valid %d",
     VAR_1, VAR_1->refcount, VAR_1->valid);
 if (!VAR_1->valid)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_1->nslots; VAR_3++) {
  if (VAR_1->slotinfo[VAR_3].session &&
      (VAR_2 = VAR_1->function_list->C_CloseSession(
      VAR_1->slotinfo[VAR_3].session)) != VAR_0)
   FUNC_2("C_CloseSession failed: %lu", VAR_2);
 }
 if ((VAR_2 = VAR_1->function_list->C_Finalize(((void*)0))) != VAR_0)
  FUNC_2("C_Finalize failed: %lu", VAR_2);
 VAR_1->valid = 0;
 VAR_1->function_list = ((void*)0);
 FUNC_1(VAR_1->handle);
}
