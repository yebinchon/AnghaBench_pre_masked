
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_ild {scalar_t__ map; scalar_t__ max_bytes; scalar_t__ imm1_bytes; scalar_t__ imm2_bytes; int nominal_opcode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pt_ild*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pt_ild*) ;

__attribute__((used)) static int FUNC_2(struct pt_ild *VAR_3, uint8_t VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return -VAR_2;

 if (VAR_3->map == VAR_0) {
  if (VAR_3->max_bytes <= VAR_4)
   return -VAR_1;

  VAR_3->nominal_opcode = FUNC_0(VAR_3, VAR_4);
  return VAR_4 + 1;
 }

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 += VAR_3->imm1_bytes;
 VAR_4 += VAR_3->imm2_bytes;
 if (VAR_3->max_bytes < VAR_4)
  return -VAR_1;

 return VAR_4;
}
