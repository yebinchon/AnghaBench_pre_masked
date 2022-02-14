
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int true_val ;
struct TYPE_8__ {int flags; char* label; } ;
struct pkcs11_slotinfo {int logged_in; int session; TYPE_1__ token; } ;
struct pkcs11_key {size_t slotidx; TYPE_6__* provider; int keyid_len; int * keyid; } ;
typedef int prompt ;
typedef int private_key_class ;
struct TYPE_12__ {struct pkcs11_slotinfo* slotinfo; TYPE_3__* function_list; int valid; } ;
struct TYPE_11__ {int member_2; int ulValueLen; int * pValue; int * member_1; int member_0; } ;
struct TYPE_10__ {char* (* C_Login ) (int ,int ,int *,int ) ;char* (* C_SignInit ) (int ,TYPE_2__*,int ) ;char* (* C_Sign ) (int ,int *,int,int *,int*) ;} ;
struct TYPE_9__ {int member_2; int member_1; int member_0; } ;
typedef char RSA ;
typedef int CK_ULONG ;
typedef char* CK_RV ;
typedef int CK_OBJECT_HANDLE ;
typedef int CK_OBJECT_CLASS ;
typedef TYPE_2__ CK_MECHANISM ;
typedef TYPE_3__ CK_FUNCTION_LIST ;
typedef int CK_BYTE ;
typedef int CK_BBOOL ;
typedef TYPE_4__ CK_ATTRIBUTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct pkcs11_key* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,size_t,TYPE_4__*,int,int *) ;
 int VAR_13 ;
 char* FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ,int ,int *,int ) ;
 char* FUNC_10 (int ,TYPE_2__*,int ) ;
 char* FUNC_11 (int ,int *,int,int *,int*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(int VAR_14, const u_char *VAR_15, u_char *VAR_16, RSA *VAR_17,
    int VAR_18)
{
 struct pkcs11_key *VAR_19;
 struct pkcs11_slotinfo *VAR_20;
 CK_FUNCTION_LIST *VAR_21;
 CK_OBJECT_HANDLE VAR_22;
 CK_ULONG VAR_23 = 0;
 CK_RV VAR_24;
 CK_OBJECT_CLASS VAR_25 = VAR_6;
 CK_BBOOL VAR_26 = VAR_10;
 CK_MECHANISM VAR_27 = {
  VAR_5, VAR_11, 0
 };
 CK_ATTRIBUTE VAR_28[] = {
  {VAR_0, ((void*)0), sizeof(VAR_25) },
  {VAR_1, ((void*)0), 0},
  {VAR_2, ((void*)0), sizeof(VAR_26) }
 };
 char *VAR_29 = ((void*)0), VAR_30[1024];
 int VAR_31 = -1;

 VAR_28[0].pValue = &VAR_25;
 VAR_28[2].pValue = &VAR_26;

 if ((VAR_19 = FUNC_0(VAR_17)) == ((void*)0)) {
  FUNC_2("RSA_get_app_data failed for rsa %p", VAR_17);
  return (-1);
 }
 if (!VAR_19->provider || !VAR_19->provider->valid) {
  FUNC_2("no pkcs11 (valid) provider for rsa %p", VAR_17);
  return (-1);
 }
 VAR_21 = VAR_19->provider->function_list;
 VAR_20 = &VAR_19->provider->slotinfo[VAR_19->slotidx];
 if ((VAR_20->token.flags & VAR_3) && !VAR_20->logged_in) {
  if (!VAR_13) {
   FUNC_2("need pin entry%s", (VAR_20->token.flags &
       VAR_4) ?
       " on reader keypad" : "");
   return (-1);
  }
  if (VAR_20->token.flags & VAR_4)
   FUNC_12("Deferring PIN entry to reader keypad.");
  else {
   FUNC_7(VAR_30, sizeof(VAR_30),
       "Enter PIN for '%s': ", VAR_20->token.label);
   VAR_29 = FUNC_6(VAR_30, VAR_12);
   if (VAR_29 == ((void*)0))
    return (-1);
  }
  VAR_24 = VAR_21->C_Login(VAR_20->session, VAR_9, (u_char *)VAR_29,
      (VAR_29 != ((void*)0)) ? FUNC_8(VAR_29) : 0);
  if (VAR_29 != ((void*)0)) {
   FUNC_3(VAR_29, FUNC_8(VAR_29));
   FUNC_4(VAR_29);
  }
  if (VAR_24 != VAR_7 && VAR_24 != VAR_8) {
   FUNC_2("C_Login failed: %lu", VAR_24);
   return (-1);
  }
  VAR_20->logged_in = 1;
 }
 VAR_28[1].pValue = VAR_19->keyid;
 VAR_28[1].ulValueLen = VAR_19->keyid_len;

 if (FUNC_5(VAR_19->provider, VAR_19->slotidx, VAR_28, 3, &VAR_22) < 0 &&
     FUNC_5(VAR_19->provider, VAR_19->slotidx, VAR_28, 2, &VAR_22) < 0) {
  FUNC_2("cannot find private key");
 } else if ((VAR_24 = VAR_21->C_SignInit(VAR_20->session, &VAR_27, VAR_22)) != VAR_7) {
  FUNC_2("C_SignInit failed: %lu", VAR_24);
 } else {

  VAR_23 = FUNC_1(VAR_17);
  VAR_24 = VAR_21->C_Sign(VAR_20->session, (CK_BYTE *)VAR_15, VAR_14, VAR_16, &VAR_23);
  if (VAR_24 == VAR_7)
   VAR_31 = VAR_23;
  else
   FUNC_2("C_Sign failed: %lu", VAR_24);
 }
 return (VAR_31);
}
