
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ifp; } ;
struct octeon_device {TYPE_3__ props; } ;
struct lio_mbuf_free_info {int mb; int map; struct lio_gather* g; } ;
struct TYPE_4__ {int q_no; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct lio_instr_queue {int txtag; struct octeon_device* oct_dev; TYPE_2__ txpciq; } ;
struct lio_gather {int node; } ;
struct lio {int * glist_lock; int * ghead; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 struct lio* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct lio_instr_queue *VAR_2, struct lio_mbuf_free_info *VAR_3)
{
 struct lio_gather *VAR_4;
 struct octeon_device *VAR_5;
 struct lio *VAR_6;
 int VAR_7;

 VAR_4 = VAR_3->g;
 VAR_7 = VAR_2->txpciq.s.q_no;
 VAR_5 = VAR_2->oct_dev;
 VAR_6 = FUNC_3(VAR_5->props.ifp);

 FUNC_5(&VAR_6->glist_lock[VAR_7]);
 FUNC_0(&VAR_6->ghead[VAR_7], &VAR_4->node, VAR_1);
 FUNC_6(&VAR_6->glist_lock[VAR_7]);

 FUNC_1(VAR_2->txtag, VAR_3->map, VAR_0);
 FUNC_2(VAR_2->txtag, VAR_3->map);
 FUNC_4(VAR_3->mb);
}
