
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_iw_recv_work {TYPE_2__* r_frag; TYPE_1__* r_iwinc; } ;
struct rds_iw_connection {int dummy; } ;
struct TYPE_5__ {scalar_t__ f_page; } ;
struct TYPE_4__ {int ii_inc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct rds_iw_connection*,struct rds_iw_recv_work*) ;

__attribute__((used)) static void FUNC_4(struct rds_iw_connection *VAR_0,
      struct rds_iw_recv_work *VAR_1)
{
 if (VAR_1->r_iwinc) {
  FUNC_0(&VAR_1->r_iwinc->ii_inc);
  VAR_1->r_iwinc = ((void*)0);
 }
 if (VAR_1->r_frag) {
  FUNC_3(VAR_0, VAR_1);
  if (VAR_1->r_frag->f_page)
   FUNC_1(VAR_1->r_frag);
  FUNC_2(VAR_1->r_frag);
  VAR_1->r_frag = ((void*)0);
 }
}
