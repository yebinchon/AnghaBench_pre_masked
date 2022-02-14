
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct octeon_device {int num_oqs; struct lio_droq** droq; } ;
struct TYPE_8__ {int * ifp; } ;
struct lio_droq {TYPE_4__ lro; } ;
struct TYPE_5__ {TYPE_3__* rxpciq; } ;
struct lio {TYPE_1__ linfo; } ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {int q_no; } ;
struct TYPE_7__ {TYPE_2__ s; } ;


 struct lio* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(struct octeon_device *VAR_0, struct ifnet *VAR_1)
{
 struct lio *VAR_2 = FUNC_0(VAR_1);
 struct lio_droq *VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_oqs; VAR_5++) {
  VAR_4 = VAR_2->linfo.rxpciq[VAR_5].s.q_no;
  VAR_3 = VAR_0->droq[VAR_4];
  if (VAR_3->lro.ifp) {
   FUNC_1(&VAR_3->lro);
   VAR_3->lro.ifp = ((void*)0);
  }
 }
}
