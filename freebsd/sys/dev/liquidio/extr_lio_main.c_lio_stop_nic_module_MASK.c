
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ifp; } ;
struct octeon_device {int ifcount; int num_oqs; TYPE_1__ props; int cmd_resp_wqlock; int cmd_resp_state; } ;
struct TYPE_8__ {TYPE_3__* rxpciq; } ;
struct lio {int stats_timer; TYPE_4__ linfo; } ;
struct TYPE_6__ {int q_no; } ;
struct TYPE_7__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct lio* FUNC_1 (int ) ;
 int FUNC_2 (struct octeon_device*,int) ;
 int FUNC_3 (struct octeon_device*,char*) ;
 int FUNC_4 (struct octeon_device*,char*) ;
 int FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct octeon_device *VAR_1)
{
 int VAR_2, VAR_3;
 struct lio *VAR_4;

 FUNC_3(VAR_1, "Stopping network interfaces\n");
 if (!VAR_1->ifcount) {
  FUNC_4(VAR_1, "Init for Octeon was not completed\n");
  return (1);
 }

 FUNC_6(&VAR_1->cmd_resp_wqlock);
 VAR_1->cmd_resp_state = VAR_0;
 FUNC_7(&VAR_1->cmd_resp_wqlock);

 for (VAR_2 = 0; VAR_2 < VAR_1->ifcount; VAR_2++) {
  VAR_4 = FUNC_1(VAR_1->props.ifp);
  for (VAR_3 = 0; VAR_3 < VAR_1->num_oqs; VAR_3++)
   FUNC_5(VAR_1,
      VAR_4->linfo.rxpciq[VAR_3].s.q_no);
 }

 FUNC_0(&VAR_4->stats_timer);

 for (VAR_2 = 0; VAR_2 < VAR_1->ifcount; VAR_2++)
  FUNC_2(VAR_1, VAR_2);

 FUNC_3(VAR_1, "Network interface stopped\n");

 return (0);
}
