
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_device {int num_oqs; struct lio_droq** droq; } ;
struct lro_ctrl {struct ifnet* ifp; } ;
struct lio_droq {struct lro_ctrl lro; } ;
struct TYPE_6__ {TYPE_2__* rxpciq; } ;
struct lio {TYPE_3__ linfo; } ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {int q_no; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 struct lio* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct octeon_device*,char*,int) ;
 int FUNC_2 (struct octeon_device*,struct ifnet*) ;
 int FUNC_3 (struct lro_ctrl*) ;

__attribute__((used)) static int
FUNC_4(struct octeon_device *VAR_0, struct ifnet *VAR_1)
{
 struct lio *VAR_2 = FUNC_0(VAR_1);
 struct lio_droq *VAR_3;
 struct lro_ctrl *VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_oqs; VAR_5++) {
  VAR_6 = VAR_2->linfo.rxpciq[VAR_5].s.q_no;
  VAR_3 = VAR_0->droq[VAR_6];
  VAR_4 = &VAR_3->lro;
  VAR_7 = FUNC_3(VAR_4);
  if (VAR_7) {
   FUNC_1(VAR_0, "LRO Initialization failed ret %d\n",
        VAR_7);
   goto lro_init_failed;
  }

  VAR_4->ifp = VAR_1;
 }

 return (VAR_7);

lro_init_failed:
 FUNC_2(VAR_0, VAR_1);

 return (VAR_7);
}
