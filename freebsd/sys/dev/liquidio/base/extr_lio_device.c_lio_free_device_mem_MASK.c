
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oq; int iq; } ;
struct octeon_device {int octeon_id; scalar_t__ chip; scalar_t__* instr_queue; TYPE_1__ io_qmask; scalar_t__* droq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ) ;
 int ** VAR_1 ;
 int VAR_2 ;

void
FUNC_4(struct octeon_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_3); VAR_4++) {
  if ((VAR_3->io_qmask.oq & FUNC_0(VAR_4)) && (VAR_3->droq[VAR_4]))
   FUNC_3(VAR_3->droq[VAR_4], VAR_0);
 }

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3); VAR_4++) {
  if ((VAR_3->io_qmask.iq & FUNC_0(VAR_4)) && (VAR_3->instr_queue[VAR_4]))
   FUNC_3(VAR_3->instr_queue[VAR_4], VAR_0);
 }

 VAR_4 = VAR_3->octeon_id;
 FUNC_3(VAR_3->chip, VAR_0);

 VAR_1[VAR_4] = ((void*)0);
 VAR_2--;
}
