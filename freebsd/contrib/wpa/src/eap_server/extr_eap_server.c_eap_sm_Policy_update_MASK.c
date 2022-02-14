
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int decision; TYPE_1__* user; } ;
struct TYPE_2__ {scalar_t__ phase2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_sm*,int const*,size_t) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_2, const u8 *VAR_3,
     size_t VAR_4)
{
 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0) || VAR_2->user == ((void*)0))
  return;

 if (VAR_2->user->phase2) {
  FUNC_1(VAR_1, "EAP: EAP-Nak received after Phase2 user"
      " info was selected - reject");
  VAR_2->decision = VAR_0;
  return;
 }

 FUNC_0(VAR_2, VAR_3, VAR_4);
}
