
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_conn {int info_state; scalar_t__ info_ident; int info_timer; } ;
struct l2cap_cmd_rej {int reason; } ;
struct l2cap_cmd_hdr {scalar_t__ ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct l2cap_conn*) ;

__attribute__((used)) static inline int FUNC_2(struct l2cap_conn *VAR_2, struct l2cap_cmd_hdr *VAR_3, u8 *VAR_4)
{
 struct l2cap_cmd_rej *VAR_5 = (struct l2cap_cmd_rej *) VAR_4;

 if (VAR_5->reason != 0x0000)
  return 0;

 if ((VAR_2->info_state & VAR_1) &&
     VAR_3->ident == VAR_2->info_ident) {
  FUNC_0(&VAR_2->info_timer);

  VAR_2->info_state |= VAR_0;
  VAR_2->info_ident = 0;

  FUNC_1(VAR_2);
 }

 return 0;
}
