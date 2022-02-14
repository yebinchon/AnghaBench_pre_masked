
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct l2cap_info_rsp {int data; int result; int type; } ;
struct l2cap_info_req {int type; } ;
struct l2cap_conn {int feat_mask; scalar_t__ info_ident; int info_state; int info_timer; } ;
struct l2cap_cmd_hdr {int dummy; } ;
typedef int req ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct l2cap_conn*) ;
 scalar_t__ FUNC_6 (struct l2cap_conn*) ;
 int FUNC_7 (struct l2cap_conn*,scalar_t__,int ,int,struct l2cap_info_req*) ;

__attribute__((used)) static inline int FUNC_8(struct l2cap_conn *VAR_5, struct l2cap_cmd_hdr *VAR_6, u8 *VAR_7)
{
 struct l2cap_info_rsp *VAR_8 = (struct l2cap_info_rsp *) VAR_7;
 u16 VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_8->type);
 VAR_10 = FUNC_1(VAR_8->result);

 FUNC_0("type 0x%4.4x result 0x%2.2x", VAR_9, VAR_10);

 FUNC_3(&VAR_5->info_timer);

 if (VAR_9 == VAR_3) {
  VAR_5->feat_mask = FUNC_4(VAR_8->data);

  if (VAR_5->feat_mask & VAR_0) {
   struct l2cap_info_req VAR_11;
   VAR_11.type = FUNC_2(VAR_4);

   VAR_5->info_ident = FUNC_6(VAR_5);

   FUNC_7(VAR_5, VAR_5->info_ident,
     VAR_2, sizeof(VAR_11), &VAR_11);
  } else {
   VAR_5->info_state |= VAR_1;
   VAR_5->info_ident = 0;

   FUNC_5(VAR_5);
  }
 } else if (VAR_9 == VAR_4) {
  VAR_5->info_state |= VAR_1;
  VAR_5->info_ident = 0;

  FUNC_5(VAR_5);
 }

 return 0;
}
