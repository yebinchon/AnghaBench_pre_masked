
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct netfront_txq {int dummy; } ;
struct netfront_rxq {int dummy; } ;
struct netfront_info {int num_queues; struct netfront_rxq* rxq; struct netfront_txq* txq; int xbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netfront_info*) ;
 int FUNC_1 (int ,struct netfront_info*) ;
 int FUNC_2 (struct netfront_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct netfront_info*) ;
 int FUNC_5 (struct netfront_info*) ;
 int FUNC_6 (struct netfront_rxq*) ;
 int FUNC_7 (struct netfront_txq*) ;
 int FUNC_8 (int ,int ,char*,int *,char*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_9(struct netfront_info *VAR_2)
{
 int VAR_3, VAR_4;
 u_int VAR_5;
 struct netfront_rxq *VAR_6;
 struct netfront_txq *VAR_7;

 VAR_4 = FUNC_8(VAR_1, FUNC_3(VAR_2->xbdev),
     "feature-rx-copy", ((void*)0), "%u", &VAR_5);
 if (VAR_4 != 0)
  VAR_5 = 0;


 if (!VAR_5)
  return (VAR_0);


 VAR_4 = FUNC_1(VAR_2->xbdev, VAR_2);
 if (VAR_4 != 0)
  return (VAR_4);


 FUNC_5(VAR_2);
 FUNC_4(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_2->num_queues; VAR_3++) {
  VAR_7 = &VAR_2->txq[VAR_3];
  FUNC_7(VAR_7);
 }


 for (VAR_3 = 0; VAR_3 < VAR_2->num_queues; VAR_3++) {
  VAR_6 = &VAR_2->rxq[VAR_3];
  FUNC_6(VAR_6);
 }






 FUNC_0(VAR_2);
 FUNC_2(VAR_2);

 return (0);
}
