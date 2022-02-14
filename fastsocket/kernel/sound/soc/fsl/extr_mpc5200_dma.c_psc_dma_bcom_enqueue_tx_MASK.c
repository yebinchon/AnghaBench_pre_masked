
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct psc_dma_stream {scalar_t__ appl_ptr; scalar_t__ period_size; int bcom_task; TYPE_1__* runtime; } ;
struct TYPE_4__ {scalar_t__ appl_ptr; } ;
struct TYPE_3__ {scalar_t__ boundary; TYPE_2__* control; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct psc_dma_stream*) ;

__attribute__((used)) static void FUNC_2(struct psc_dma_stream *VAR_0)
{
 if (VAR_0->appl_ptr > VAR_0->runtime->control->appl_ptr) {





  while (VAR_0->appl_ptr < VAR_0->runtime->boundary) {
   if (FUNC_0(VAR_0->bcom_task))
    return;

   VAR_0->appl_ptr += VAR_0->period_size;

   FUNC_1(VAR_0);
  }
  VAR_0->appl_ptr -= VAR_0->runtime->boundary;
 }

 while (VAR_0->appl_ptr < VAR_0->runtime->control->appl_ptr) {

  if (FUNC_0(VAR_0->bcom_task))
   return;

  VAR_0->appl_ptr += VAR_0->period_size;

  FUNC_1(VAR_0);
 }
}
