
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_2__ {int oq; } ;
struct octeon_device {int int_status; struct lio_droq** droq; TYPE_1__ io_qmask; } ;
struct lio_droq {int droq_task; int droq_taskqueue; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct octeon_device *VAR_1)
{
 struct lio_droq *VAR_2;
 uint64_t VAR_3;

 if (VAR_1->int_status & VAR_0) {
  for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); VAR_3++) {
   if (!(VAR_1->io_qmask.oq & FUNC_0(VAR_3)))
    continue;

   VAR_2 = VAR_1->droq[VAR_3];

   FUNC_2(VAR_2->droq_taskqueue,
       &VAR_2->droq_task);
  }
 }
}
