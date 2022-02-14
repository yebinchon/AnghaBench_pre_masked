
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int congested; } ;
struct port {int waiting_pkts; int wait_list; TYPE_1__ publ; struct link* congested_link; int wakeup; } ;
struct TYPE_4__ {int link_congs; } ;
struct link {TYPE_2__ stats; int waiting_ports; } ;


 int VAR_0 ;
 int FUNC_0 (struct link*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 struct port* FUNC_5 (int) ;
 int FUNC_6 (struct port*) ;

__attribute__((used)) static int FUNC_7(struct link *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct port *VAR_5;

 FUNC_3(&VAR_1);
 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5) {
  if (!VAR_5->wakeup)
   goto exit;
  if (!FUNC_2(&VAR_5->wait_list))
   goto exit;
  VAR_5->congested_link = VAR_2;
  VAR_5->publ.congested = 1;
  VAR_5->waiting_pkts = 1 + ((VAR_4 - 1) / FUNC_0(VAR_2));
  FUNC_1(&VAR_5->wait_list, &VAR_2->waiting_ports);
  VAR_2->stats.link_congs++;
exit:
  FUNC_6(VAR_5);
 }
 FUNC_4(&VAR_1);
 return -VAR_0;
}
