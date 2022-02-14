
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_pri_vector {scalar_t__ pv_root_id; scalar_t__ pv_cost; scalar_t__ pv_dbridge_id; scalar_t__ pv_dport_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct bstp_pri_vector *VAR_3,
    struct bstp_pri_vector *VAR_4)
{
 if (VAR_4->pv_root_id < VAR_3->pv_root_id)
  return (VAR_0);
 if (VAR_4->pv_root_id > VAR_3->pv_root_id)
  return (VAR_2);

 if (VAR_4->pv_cost < VAR_3->pv_cost)
  return (VAR_0);
 if (VAR_4->pv_cost > VAR_3->pv_cost)
  return (VAR_2);

 if (VAR_4->pv_dbridge_id < VAR_3->pv_dbridge_id)
  return (VAR_0);
 if (VAR_4->pv_dbridge_id > VAR_3->pv_dbridge_id)
  return (VAR_2);

 if (VAR_4->pv_dport_id < VAR_3->pv_dport_id)
  return (VAR_0);
 if (VAR_4->pv_dport_id > VAR_3->pv_dport_id)
  return (VAR_2);

 return (VAR_1);
}
