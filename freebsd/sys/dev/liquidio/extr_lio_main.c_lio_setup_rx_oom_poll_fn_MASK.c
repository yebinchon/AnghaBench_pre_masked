
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int octeon_id; } ;
struct lio_tq {int work; int * tq; struct lio* ctxptr; } ;
struct lio {struct lio_tq rx_status_tq; struct octeon_device* oct_dev; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ,void*) ;
 struct lio* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct octeon_device*,char*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int * FUNC_4 (char*,int ,int ,int **) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int **,int,int ,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_4)
{
 struct lio *VAR_5 = FUNC_1(VAR_4);
 struct octeon_device *VAR_6 = VAR_5->oct_dev;
 struct lio_tq *VAR_7;

 VAR_7 = &VAR_5->rx_status_tq;

 VAR_7->tq = FUNC_4("lio_rx_oom_status", VAR_0,
         VAR_3,
         &VAR_7->tq);
 if (VAR_7->tq == ((void*)0)) {
  FUNC_2(VAR_6, "unable to create lio rx oom status tq\n");
  return (-1);
 }

 FUNC_0(VAR_7->tq, &VAR_7->work, 0,
     VAR_2, (void *)VAR_7);

 VAR_7->ctxptr = VAR_5;

 FUNC_6(&VAR_7->tq, 1, VAR_1,
    "lio%d_rx_oom_status",
    VAR_6->octeon_id);

 FUNC_5(VAR_7->tq, &VAR_7->work,
      FUNC_3(50));

 return (0);
}
