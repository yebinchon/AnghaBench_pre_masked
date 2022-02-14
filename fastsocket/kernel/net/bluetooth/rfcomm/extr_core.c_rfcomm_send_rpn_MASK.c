
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct rfcomm_session {int initiator; } ;
struct rfcomm_rpn {int param_mask; void* xoff_char; void* xon_char; void* flow_ctrl; int line_settings; void* bit_rate; void* dlci; } ;
struct rfcomm_mcc {void* len; int type; } ;
struct rfcomm_hdr {void* len; int ctrl; void* addr; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int,void*,void*,void*,void*,void*,void*,void*,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,void*) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (void**) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (void*,void*,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct rfcomm_session*,void**,int) ;

int FUNC_9(struct rfcomm_session *VAR_2, int VAR_3, u8 VAR_4,
   u8 VAR_5, u8 VAR_6, u8 VAR_7,
   u8 VAR_8, u8 VAR_9,
   u8 VAR_10, u8 VAR_11, u16 VAR_12)
{
 struct rfcomm_hdr *VAR_13;
 struct rfcomm_mcc *VAR_14;
 struct rfcomm_rpn *VAR_15;
 u8 VAR_16[16], *VAR_17 = VAR_16;

 FUNC_0("%p cr %d dlci %d bit_r 0x%x data_b 0x%x stop_b 0x%x parity 0x%x"
   " flwc_s 0x%x xon_c 0x%x xoff_c 0x%x p_mask 0x%x",
  VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
  VAR_9, VAR_10, VAR_11, VAR_12);

 VAR_13 = (void *) VAR_17; VAR_17 += sizeof(*VAR_13);
 VAR_13->addr = FUNC_1(VAR_2->initiator, 0);
 VAR_13->ctrl = FUNC_2(VAR_1, 0);
 VAR_13->len = FUNC_4(sizeof(*VAR_14) + sizeof(*VAR_15));

 VAR_14 = (void *) VAR_17; VAR_17 += sizeof(*VAR_14);
 VAR_14->type = FUNC_5(VAR_3, VAR_0);
 VAR_14->len = FUNC_4(sizeof(*VAR_15));

 VAR_15 = (void *) VAR_17; VAR_17 += sizeof(*VAR_15);
 VAR_15->dlci = FUNC_1(1, VAR_4);
 VAR_15->bit_rate = VAR_5;
 VAR_15->line_settings = FUNC_6(VAR_6, VAR_7, VAR_8);
 VAR_15->flow_ctrl = VAR_9;
 VAR_15->xon_char = VAR_10;
 VAR_15->xoff_char = VAR_11;
 VAR_15->param_mask = FUNC_7(VAR_12);

 *VAR_17 = FUNC_3(VAR_16); VAR_17++;

 return FUNC_8(VAR_2, VAR_16, VAR_17 - VAR_16);
}
