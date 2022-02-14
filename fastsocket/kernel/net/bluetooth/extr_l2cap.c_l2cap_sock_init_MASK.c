
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_type; } ;
struct l2cap_pinfo {int flush_to; scalar_t__ conf_len; scalar_t__ force_reliable; scalar_t__ role_switch; int sec_level; int fcs; int mode; scalar_t__ omtu; int imtu; } ;
struct TYPE_2__ {int defer_setup; } ;


 int FUNC_0 (char*,struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 struct l2cap_pinfo* FUNC_6 (struct sock*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_5, struct sock *VAR_6)
{
 struct l2cap_pinfo *VAR_7 = FUNC_6(VAR_5);

 FUNC_0("sk %p", VAR_5);

 if (VAR_6) {
  VAR_5->sk_type = VAR_6->sk_type;
  FUNC_5(VAR_5)->defer_setup = FUNC_5(VAR_6)->defer_setup;

  VAR_7->imtu = FUNC_6(VAR_6)->imtu;
  VAR_7->omtu = FUNC_6(VAR_6)->omtu;
  VAR_7->mode = FUNC_6(VAR_6)->mode;
  VAR_7->fcs = FUNC_6(VAR_6)->fcs;
  VAR_7->sec_level = FUNC_6(VAR_6)->sec_level;
  VAR_7->role_switch = FUNC_6(VAR_6)->role_switch;
  VAR_7->force_reliable = FUNC_6(VAR_6)->force_reliable;
 } else {
  VAR_7->imtu = VAR_2;
  VAR_7->omtu = 0;
  VAR_7->mode = VAR_4;
  VAR_7->fcs = VAR_3;
  VAR_7->sec_level = VAR_0;
  VAR_7->role_switch = 0;
  VAR_7->force_reliable = 0;
 }


 VAR_7->conf_len = 0;
 VAR_7->flush_to = VAR_1;
 FUNC_7(FUNC_4(VAR_5));
 FUNC_7(FUNC_3(VAR_5));
 FUNC_1(FUNC_2(VAR_5));
}
