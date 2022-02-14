
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_ip {int ipc; int ip; } ;
struct pt_encoder {int* pos; } ;
typedef enum pt_opcode { ____Placeholder_pt_opcode } pt_opcode ;


 int* FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct pt_encoder*,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct pt_encoder *VAR_2, enum pt_opcode VAR_3,
   const struct pt_packet_ip *VAR_4)
{
 uint8_t *VAR_5;
 uint8_t VAR_6, VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_2 || !VAR_4)
  return VAR_1;

 VAR_8 = FUNC_1(VAR_4->ipc);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = FUNC_2(VAR_2,
                         1u + (unsigned int) VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_7 = (uint8_t) (VAR_4->ipc << VAR_0);
 VAR_6 = (uint8_t) VAR_3;

 VAR_5 = VAR_2->pos;
 *VAR_5++ = VAR_6 | VAR_7;

 VAR_2->pos = FUNC_0(VAR_5, VAR_4->ip, VAR_8);
 return 1 + VAR_8;
}
