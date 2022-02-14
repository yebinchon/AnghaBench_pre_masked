
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_info_rsp {void* result; void* type; int data; } ;
typedef struct l2cap_info_rsp u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct l2cap_info_req {int type; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_hdr {int ident; } ;
typedef int rsp ;
typedef int buf ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct l2cap_conn*,int ,int ,int,struct l2cap_info_rsp*) ;
 int FUNC_4 (struct l2cap_info_rsp*,int ,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static inline int FUNC_6(struct l2cap_conn *VAR_11, struct l2cap_cmd_hdr *VAR_12, u8 *VAR_13)
{
 struct l2cap_info_req *VAR_14 = (struct l2cap_info_req *) VAR_13;
 u16 VAR_15;

 VAR_15 = FUNC_1(VAR_14->type);

 FUNC_0("type 0x%4.4x", VAR_15);

 if (VAR_15 == VAR_6) {
  u8 VAR_16[8];
  u32 VAR_17 = VAR_9;
  struct l2cap_info_rsp *VAR_18 = (struct l2cap_info_rsp *) VAR_16;
  VAR_18->type = FUNC_2(VAR_6);
  VAR_18->result = FUNC_2(VAR_5);
  if (VAR_8)
   VAR_17 |= VAR_0 | VAR_2
        | VAR_1;
  FUNC_5(VAR_17, VAR_18->data);
  FUNC_3(VAR_11, VAR_12->ident,
     VAR_3, sizeof(VAR_16), VAR_16);
 } else if (VAR_15 == VAR_7) {
  u8 VAR_19[12];
  struct l2cap_info_rsp *VAR_20 = (struct l2cap_info_rsp *) VAR_19;
  VAR_20->type = FUNC_2(VAR_7);
  VAR_20->result = FUNC_2(VAR_5);
  FUNC_4(VAR_19 + 4, VAR_10, 8);
  FUNC_3(VAR_11, VAR_12->ident,
     VAR_3, sizeof(VAR_19), VAR_19);
 } else {
  struct l2cap_info_rsp VAR_21;
  VAR_21.type = FUNC_2(VAR_15);
  VAR_21.result = FUNC_2(VAR_4);
  FUNC_3(VAR_11, VAR_12->ident,
     VAR_3, sizeof(VAR_21), &VAR_21);
 }

 return 0;
}
