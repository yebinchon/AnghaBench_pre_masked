
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_type; } ;
struct rfcomm_pinfo {scalar_t__ role_switch; TYPE_1__* dlc; int sec_level; } ;
struct TYPE_4__ {scalar_t__ defer_setup; } ;
struct TYPE_3__ {scalar_t__ role_switch; int sec_level; scalar_t__ defer_setup; } ;


 int FUNC_0 (char*,struct sock*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 struct rfcomm_pinfo* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1, struct sock *VAR_2)
{
 struct rfcomm_pinfo *VAR_3 = FUNC_2(VAR_1);

 FUNC_0("sk %p", VAR_1);

 if (VAR_2) {
  VAR_1->sk_type = VAR_2->sk_type;
  VAR_3->dlc->defer_setup = FUNC_1(VAR_2)->defer_setup;

  VAR_3->sec_level = FUNC_2(VAR_2)->sec_level;
  VAR_3->role_switch = FUNC_2(VAR_2)->role_switch;
 } else {
  VAR_3->dlc->defer_setup = 0;

  VAR_3->sec_level = VAR_0;
  VAR_3->role_switch = 0;
 }

 VAR_3->dlc->sec_level = VAR_3->sec_level;
 VAR_3->dlc->role_switch = VAR_3->role_switch;
}
