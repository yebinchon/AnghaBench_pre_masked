
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psc_dma_stream {scalar_t__ period_bytes; scalar_t__ period_next_pt; scalar_t__ period_end; scalar_t__ period_start; int bcom_task; } ;
struct bcom_bd {scalar_t__ status; scalar_t__* data; } ;


 struct bcom_bd* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct psc_dma_stream *VAR_0)
{
 struct bcom_bd *VAR_1;


 VAR_1 = FUNC_0(VAR_0->bcom_task);
 VAR_1->status = VAR_0->period_bytes;
 VAR_1->data[0] = VAR_0->period_next_pt;
 FUNC_1(VAR_0->bcom_task, ((void*)0));


 VAR_0->period_next_pt += VAR_0->period_bytes;
 if (VAR_0->period_next_pt >= VAR_0->period_end)
  VAR_0->period_next_pt = VAR_0->period_start;
}
