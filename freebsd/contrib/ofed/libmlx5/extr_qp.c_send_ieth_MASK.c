
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ibv_send_wr {int opcode; int imm_data; } ;





 int FUNC_0 (int ) ;

__attribute__((used)) static uint32_t FUNC_1(struct ibv_send_wr *VAR_0)
{
 switch (VAR_0->opcode) {
 case 129:
 case 130:
  return VAR_0->imm_data;
 case 128:
  return FUNC_0(VAR_0->imm_data);
 default:
  return 0;
 }
}
