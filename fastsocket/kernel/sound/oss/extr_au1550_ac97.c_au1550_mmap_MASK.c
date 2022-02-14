
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; scalar_t__ vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_page_prot; } ;
struct file {scalar_t__ private_data; } ;
struct dmabuf {unsigned long buforder; int mapped; int rawbuf; } ;
struct au1550_state {int sem; struct dmabuf dma_adc; struct dmabuf dma_dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,int ,unsigned long,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 struct au1550_state *VAR_8 = (struct au1550_state *)VAR_6->private_data;
 struct dmabuf *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 FUNC_0();
 FUNC_1(&VAR_8->sem);
 if (VAR_7->vm_flags & VAR_5)
  VAR_9 = &VAR_8->dma_dac;
 else if (VAR_7->vm_flags & VAR_4)
  VAR_9 = &VAR_8->dma_adc;
 else {
  VAR_11 = -VAR_1;
  goto out;
 }
 if (VAR_7->vm_pgoff != 0) {
  VAR_11 = -VAR_1;
  goto out;
 }
 VAR_10 = VAR_7->vm_end - VAR_7->vm_start;
 if (VAR_10 > (VAR_2 << VAR_9->buforder)) {
  VAR_11 = -VAR_1;
  goto out;
 }
 if (FUNC_4(VAR_7, VAR_7->vm_start, FUNC_3(FUNC_6(VAR_9->rawbuf)),
        VAR_10, VAR_7->vm_page_prot)) {
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_7->vm_flags &= ~VAR_3;
 VAR_9->mapped = 1;
out:
 FUNC_2(&VAR_8->sem);
 FUNC_5();
 return VAR_11;
}
