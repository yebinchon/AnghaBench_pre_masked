
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_5__ {scalar_t__* buf; } ;
struct TYPE_4__ {int out; int in; scalar_t__ ring; } ;
struct TYPE_6__ {int hc_kthread_proc; TYPE_2__ hc_entropy_fast_accumulator; TYPE_1__ hc_entropy_ring; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*,int,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void)
{
        u_int VAR_6, VAR_7, VAR_8;






 for (VAR_5 = 1; VAR_5;) {

  VAR_6 = VAR_1;
  while (VAR_4.hc_entropy_ring.out != VAR_4.hc_entropy_ring.in) {
   VAR_7 = (VAR_4.hc_entropy_ring.out + 1)%VAR_1;
   FUNC_3(VAR_4.hc_entropy_ring.ring + VAR_7);
   VAR_4.hc_entropy_ring.out = VAR_7;
   if (!--VAR_6)
    break;
  }
  FUNC_4();

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   if (VAR_4.hc_entropy_fast_accumulator.buf[VAR_8]) {
    FUNC_2(VAR_4.hc_entropy_fast_accumulator.buf + VAR_8, sizeof(VAR_4.hc_entropy_fast_accumulator.buf[0]), VAR_2);
    VAR_4.hc_entropy_fast_accumulator.buf[VAR_8] = 0;
   }
  }

  FUNC_5(&VAR_4.hc_kthread_proc, 0, "-", VAR_3/10, 0, FUNC_0(1));
 }
 VAR_5 = -1;
 FUNC_6(&VAR_4.hc_kthread_proc);
 FUNC_1(0);

}
