
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_pri_vector {int pv_dport_id; int pv_dbridge_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bstp_pri_vector*,struct bstp_pri_vector*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bstp_pri_vector *VAR_1,
    struct bstp_pri_vector *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2) == VAR_0 ||
     (FUNC_1(VAR_1->pv_dbridge_id, VAR_2->pv_dbridge_id) &&
     (VAR_2->pv_dport_id & 0xfff) == (VAR_1->pv_dport_id & 0xfff)))
  return (1);
 return (0);
}
