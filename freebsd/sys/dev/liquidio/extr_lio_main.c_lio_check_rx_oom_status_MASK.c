
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_device {int num_oqs; struct lio_droq** droq; } ;
struct lio_droq {int lock; int pkts_credit_reg; } ;
struct TYPE_6__ {TYPE_2__* rxpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_4__ {int q_no; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct octeon_device*,struct lio_droq*) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (struct octeon_device*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct lio *VAR_0)
{
 struct lio_droq *VAR_1;
 struct octeon_device *VAR_2 = VAR_0->oct_dev;
 int VAR_3;
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_oqs; VAR_4++) {
  VAR_5 = VAR_0->linfo.rxpciq[VAR_4].s.q_no;
  VAR_1 = VAR_2->droq[VAR_5];
  if (VAR_1 == ((void*)0))
   continue;
  if (FUNC_2(VAR_2, VAR_1->pkts_credit_reg) <= 0x40) {
   FUNC_4(&VAR_1->lock);
   VAR_3 = FUNC_1(VAR_2, VAR_1);





   FUNC_6();
   FUNC_3(VAR_2, VAR_1->pkts_credit_reg,
     VAR_3);

   FUNC_0();
   FUNC_5(&VAR_1->lock);
  }
 }
}
