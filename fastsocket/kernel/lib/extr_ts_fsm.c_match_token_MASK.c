
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ts_fsm_token {int type; size_t value; } ;


 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ts_fsm_token *VAR_1, u8 VAR_2)
{
 if (VAR_1->type)
  return (VAR_0[VAR_2] & VAR_1->type) != 0;
 else
  return VAR_1->value == VAR_2;
}
