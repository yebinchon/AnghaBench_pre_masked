
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct pkcs11_provider {TYPE_2__* slotinfo; int * slotlist; TYPE_3__* function_list; } ;
struct TYPE_6__ {scalar_t__ (* C_OpenSession ) (int ,int,int *,int *,int *) ;scalar_t__ (* C_Login ) (int ,int ,int *,int ) ;scalar_t__ (* C_CloseSession ) (int ) ;} ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {int logged_in; int session; TYPE_1__ token; } ;
typedef size_t CK_ULONG ;
typedef int CK_SESSION_HANDLE ;
typedef scalar_t__ CK_RV ;
typedef TYPE_3__ CK_FUNCTION_LIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct pkcs11_provider *VAR_6, CK_ULONG VAR_7, char *VAR_8)
{
 CK_RV VAR_9;
 CK_FUNCTION_LIST *VAR_10;
 CK_SESSION_HANDLE VAR_11;
 int VAR_12;

 VAR_10 = VAR_6->function_list;
 VAR_12 = VAR_6->slotinfo[VAR_7].token.flags & VAR_0;
 if (VAR_8 && VAR_12 && !FUNC_1(VAR_8)) {
  FUNC_0("pin required");
  return (-1);
 }
 if ((VAR_9 = VAR_10->C_OpenSession(VAR_6->slotlist[VAR_7], VAR_1|
     VAR_2, ((void*)0), ((void*)0), &VAR_11))
     != VAR_3) {
  FUNC_0("C_OpenSession failed: %lu", VAR_9);
  return (-1);
 }
 if (VAR_12 && VAR_8) {
  VAR_9 = VAR_10->C_Login(VAR_11, VAR_5,
      (u_char *)VAR_8, FUNC_1(VAR_8));
  if (VAR_9 != VAR_3 && VAR_9 != VAR_4) {
   FUNC_0("C_Login failed: %lu", VAR_9);
   if ((VAR_9 = VAR_10->C_CloseSession(VAR_11)) != VAR_3)
    FUNC_0("C_CloseSession failed: %lu", VAR_9);
   return (-1);
  }
  VAR_6->slotinfo[VAR_7].logged_in = 1;
 }
 VAR_6->slotinfo[VAR_7].session = VAR_11;
 return (0);
}
