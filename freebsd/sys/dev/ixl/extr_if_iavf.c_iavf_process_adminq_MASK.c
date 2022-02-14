
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct virtchnl_msg {int v_retval; int v_opcode; } ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {int aq_buffer; struct i40e_hw hw; } ;
struct i40e_arq_event_info {int msg_buf; int msg_len; int desc; int buf_len; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40e_hw*,struct i40e_arq_event_info*,scalar_t__*) ;
 int FUNC_2 (struct iavf_sc*) ;
 int FUNC_3 (struct iavf_sc*,int ,int ,int ,int ) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static enum i40e_status_code
FUNC_6(struct iavf_sc *VAR_6, u16 *VAR_7)
{
 enum i40e_status_code VAR_8 = VAR_1;
 struct i40e_arq_event_info VAR_9;
 struct i40e_hw *VAR_10 = &VAR_6->hw;
 struct virtchnl_msg *VAR_11;
 int VAR_12 = 0, VAR_13 = 0;
 u32 VAR_14;

 VAR_12 = FUNC_2(VAR_6);
 if (VAR_12)
  return (VAR_0);

 VAR_9.buf_len = VAR_5;
        VAR_9.msg_buf = VAR_6->aq_buffer;
 FUNC_0(VAR_9.msg_buf, VAR_5);
 VAR_11 = (struct virtchnl_msg *)&VAR_9.desc;


 do {
  VAR_8 = FUNC_1(VAR_10, &VAR_9, VAR_7);




  if (VAR_8)
   break;
  FUNC_3(VAR_6, VAR_11->v_opcode,
      VAR_11->v_retval, VAR_9.msg_buf, VAR_9.msg_len);
  FUNC_0(VAR_9.msg_buf, VAR_5);
 } while (*VAR_7 && (VAR_13++ < VAR_4));


 VAR_14 = FUNC_4(VAR_10, VAR_2);
 VAR_14 |= VAR_3;
 FUNC_5(VAR_10, VAR_2, VAR_14);

 return (VAR_8);
}
