
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct file {int f_mode; scalar_t__ private_data; } ;
struct TYPE_4__ {int count; scalar_t__ dma_fragsize; scalar_t__ dmasize; scalar_t__ mapped; int wait; int ready; } ;
struct TYPE_3__ {int count; scalar_t__ dma_fragsize; int wait; int ready; } ;
struct au1550_state {int lock; TYPE_2__ dma_dac; TYPE_1__ dma_adc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_3(struct file *VAR_6, struct poll_table_struct *VAR_7)
{
 struct au1550_state *VAR_8 = (struct au1550_state *)VAR_6->private_data;
 unsigned long VAR_9;
 unsigned int VAR_10 = 0;

 if (VAR_6->f_mode & VAR_1) {
  if (!VAR_8->dma_dac.ready)
   return 0;
  FUNC_0(VAR_6, &VAR_8->dma_dac.wait, VAR_7);
 }
 if (VAR_6->f_mode & VAR_0) {
  if (!VAR_8->dma_adc.ready)
   return 0;
  FUNC_0(VAR_6, &VAR_8->dma_adc.wait, VAR_7);
 }

 FUNC_1(&VAR_8->lock, VAR_9);

 if (VAR_6->f_mode & VAR_0) {
  if (VAR_8->dma_adc.count >= (signed)VAR_8->dma_adc.dma_fragsize)
   VAR_10 |= VAR_2 | VAR_4;
 }
 if (VAR_6->f_mode & VAR_1) {
  if (VAR_8->dma_dac.mapped) {
   if (VAR_8->dma_dac.count >=
       (signed)VAR_8->dma_dac.dma_fragsize)
    VAR_10 |= VAR_3 | VAR_5;
  } else {
   if ((signed) VAR_8->dma_dac.dmasize >=
       VAR_8->dma_dac.count + (signed)VAR_8->dma_dac.dma_fragsize)
    VAR_10 |= VAR_3 | VAR_5;
  }
 }
 FUNC_2(&VAR_8->lock, VAR_9);
 return VAR_10;
}
