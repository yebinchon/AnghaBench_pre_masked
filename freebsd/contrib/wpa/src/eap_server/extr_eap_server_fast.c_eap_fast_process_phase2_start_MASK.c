
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int require_identity_match; int user_eap_method_index; TYPE_2__* user; scalar_t__ identity_len; int * identity; } ;
struct eap_fast_data {scalar_t__ identity_len; int * identity; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_sm*,struct eap_fast_data*,int ) ;
 int FUNC_1 (struct eap_sm*,struct eap_fast_data*) ;
 int FUNC_2 (struct eap_fast_data*,int ) ;
 scalar_t__ FUNC_3 (struct eap_sm*,int *,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int *,scalar_t__) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_4,
      struct eap_fast_data *VAR_5)
{
 u8 VAR_6;

 if (VAR_5->identity) {
  FUNC_4(VAR_4->identity);
  VAR_4->identity = VAR_5->identity;
  VAR_5->identity = ((void*)0);
  VAR_4->identity_len = VAR_5->identity_len;
  VAR_5->identity_len = 0;
  VAR_4->require_identity_match = 1;
  if (FUNC_3(VAR_4, VAR_4->identity, VAR_4->identity_len, 1) != 0) {
   FUNC_5(VAR_1, "EAP-FAST: "
       "Phase2 Identity not found "
       "in the user database",
       VAR_4->identity, VAR_4->identity_len);
   VAR_6 = FUNC_1(VAR_4, VAR_5);
  } else {
   FUNC_6(VAR_1, "EAP-FAST: Identity already "
       "known - skip Phase 2 Identity Request");
   VAR_6 = VAR_4->user->methods[0].method;
   VAR_4->user_eap_method_index = 1;
  }

  FUNC_2(VAR_5, VAR_3);
 } else {
  FUNC_2(VAR_5, VAR_2);
  VAR_6 = VAR_0;
 }

 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
