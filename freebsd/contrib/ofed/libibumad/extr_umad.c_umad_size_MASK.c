
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_user_mad {int dummy; } ;


 scalar_t__ VAR_0 ;

size_t FUNC_0(void)
{
 return VAR_0 ? sizeof(struct ib_user_mad) :
     sizeof(struct ib_user_mad) - 8;
}
