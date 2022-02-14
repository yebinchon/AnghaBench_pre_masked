
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_ild {scalar_t__ max_bytes; int nominal_opcode; } ;


 int FUNC_0 (struct pt_ild*,scalar_t__) ;
 int FUNC_1 (struct pt_ild*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_2(struct pt_ild *VAR_2, uint8_t VAR_3)
{
 if (!VAR_2)
  return -VAR_1;

 if (VAR_2->max_bytes <= VAR_3)
  return -VAR_0;

 VAR_2->nominal_opcode = FUNC_0(VAR_2, VAR_3);

 return FUNC_1(VAR_2, VAR_3 + 1);
}
