
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_ild {int nominal_opcode; } ;


 int FUNC_0 (struct pt_ild*,scalar_t__) ;
 int FUNC_1 (struct pt_ild*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct pt_ild *VAR_1, uint8_t VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->nominal_opcode = FUNC_0(VAR_1, VAR_2);

 return FUNC_1(VAR_1, VAR_2 + 1);
}
