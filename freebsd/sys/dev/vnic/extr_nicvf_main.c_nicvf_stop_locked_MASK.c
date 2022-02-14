
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; } ;
union nic_mbx {TYPE_1__ msg; } ;
struct queue_set {int rbdr_cnt; } ;
struct nicvf {struct ifnet* ifp; int stats_callout; struct queue_set* qs; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nicvf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ifnet*,int ,int ) ;
 int FUNC_3 (struct nicvf*,int ,int) ;
 int FUNC_4 (struct nicvf*,int ) ;
 int FUNC_5 (struct nicvf*,int ,int) ;
 int FUNC_6 (struct nicvf*,int ) ;
 int FUNC_7 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int
FUNC_8(struct nicvf *VAR_7)
{
 struct ifnet *VAR_8;
 int VAR_9;
 struct queue_set *VAR_10 = VAR_7->qs;
 union nic_mbx VAR_11 = {};

 FUNC_0(VAR_7);

 FUNC_1(&VAR_7->stats_callout);

 VAR_8 = VAR_7->ifp;

 VAR_11.msg.msg = VAR_6;
 FUNC_7(VAR_7, &VAR_11);


 for (VAR_9 = 0; VAR_9 < VAR_10->rbdr_cnt; VAR_9++) {
  FUNC_5(VAR_7, VAR_5, VAR_9);
  FUNC_3(VAR_7, VAR_5, VAR_9);
 }
 FUNC_5(VAR_7, VAR_4, 0);
 FUNC_3(VAR_7, VAR_4, 0);


 FUNC_2(VAR_8, VAR_1, VAR_2);


 FUNC_4(VAR_7, VAR_0);


 FUNC_6(VAR_7, VAR_0);


 FUNC_5(VAR_7, VAR_3, 0);

 return (0);
}
