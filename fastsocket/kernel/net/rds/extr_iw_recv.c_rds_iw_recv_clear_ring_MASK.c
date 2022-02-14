
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {scalar_t__ f_page; } ;
struct TYPE_3__ {size_t w_nr; } ;
struct rds_iw_connection {TYPE_2__ i_frag; int * i_recvs; TYPE_1__ i_recv_ring; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct rds_iw_connection*,int *) ;

void FUNC_2(struct rds_iw_connection *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->i_recv_ring.w_nr; VAR_1++)
  FUNC_1(VAR_0, &VAR_0->i_recvs[VAR_1]);

 if (VAR_0->i_frag.f_page)
  FUNC_0(&VAR_0->i_frag);
}
