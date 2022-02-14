
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct eapol_state_machine {int remediation; TYPE_3__* eapol; } ;
struct eap_user {scalar_t__ remediation; } ;
struct TYPE_5__ {int ctx; } ;
struct TYPE_4__ {int (* get_eap_user ) (int ,int const*,size_t,int,struct eap_user*) ;} ;
struct TYPE_6__ {TYPE_2__ conf; TYPE_1__ cb; } ;


 int FUNC_0 (int ,int const*,size_t,int,struct eap_user*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const u8 *VAR_1,
     size_t VAR_2, int VAR_3,
     struct eap_user *VAR_4)
{
 struct eapol_state_machine *VAR_5 = VAR_0;
 int VAR_6;

 VAR_6 = VAR_5->eapol->cb.get_eap_user(VAR_5->eapol->conf.ctx, VAR_1,
      VAR_2, VAR_3, VAR_4);
 if (VAR_4->remediation)
  VAR_5->remediation = 1;
 return VAR_6;
}
