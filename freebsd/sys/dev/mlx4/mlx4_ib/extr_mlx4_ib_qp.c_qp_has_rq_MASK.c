
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_init_attr {scalar_t__ qp_type; int srq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ib_qp_init_attr *VAR_2)
{
 if (VAR_2->qp_type == VAR_0 || VAR_2->qp_type == VAR_1)
  return 0;

 return !VAR_2->srq;
}
