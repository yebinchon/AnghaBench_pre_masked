
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oq; } ;
struct octeon_device {TYPE_2__** droq; TYPE_1__ io_qmask; } ;
struct TYPE_4__ {int droq_task; int droq_taskqueue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct octeon_device *VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0, VAR_4 = 100;

 do {
  VAR_2 = 0;

  for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) {
   if (!(VAR_0->io_qmask.oq & FUNC_0(VAR_1)))
    continue;

   VAR_3 = FUNC_2(VAR_0->droq[VAR_1]);
   if (VAR_3 > 0) {
    VAR_2 += VAR_3;
    FUNC_4(VAR_0->droq[VAR_1]->droq_taskqueue,
        &VAR_0->droq[VAR_1]->droq_task);
   }
  }

  VAR_3 = 0;
  FUNC_3(1);
 } while (VAR_4-- && VAR_2);

 return (VAR_3);
}
