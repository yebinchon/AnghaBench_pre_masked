
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {scalar_t__ initiator; scalar_t__ user_reg_hint_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct regulatory_request *VAR_2)
{
 if (VAR_2->initiator != VAR_0)
  return 0;
 return VAR_2->user_reg_hint_type == VAR_1;
}
