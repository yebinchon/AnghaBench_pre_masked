
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_page_frag {scalar_t__ f_mapped; int f_page; } ;
struct rds_iw_recv_work {struct rds_page_frag* r_frag; } ;
struct rds_iw_connection {TYPE_1__* i_cm_id; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (char*,struct rds_iw_recv_work*,struct rds_page_frag*,int ) ;

__attribute__((used)) static void FUNC_2(struct rds_iw_connection *VAR_2,
       struct rds_iw_recv_work *VAR_3)
{
 struct rds_page_frag *VAR_4 = VAR_3->r_frag;

 FUNC_1("recv %p frag %p page %p\n", VAR_3, VAR_4, VAR_4->f_page);
 if (VAR_4->f_mapped)
  FUNC_0(VAR_2->i_cm_id->device,
          VAR_4->f_mapped,
          VAR_1, VAR_0);
 VAR_4->f_mapped = 0;
}
