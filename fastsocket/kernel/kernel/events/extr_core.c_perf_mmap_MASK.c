
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; int * vm_ops; TYPE_3__* vm_mm; } ;
struct user_struct {int locked_vm; } ;
struct ring_buffer {int dummy; } ;
struct TYPE_7__ {int wakeup_watermark; scalar_t__ watermark; scalar_t__ inherit; } ;
struct perf_event {int cpu; long mmap_locked; int mmap_mutex; int mmap_count; int mmap_user; TYPE_4__* rb; TYPE_2__ attr; TYPE_1__* ctx; } ;
struct file {struct perf_event* private_data; } ;
struct TYPE_9__ {unsigned long nr_pages; int refcount; } ;
struct TYPE_8__ {long locked_vm; } ;
struct TYPE_6__ {int parent_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (long,int *) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct user_struct* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 unsigned long FUNC_11 () ;
 int FUNC_12 (struct perf_event*) ;
 int VAR_11 ;
 scalar_t__ FUNC_13 () ;
 struct ring_buffer* FUNC_14 (unsigned long,int ,int,int) ;
 int FUNC_15 (TYPE_4__*,struct ring_buffer*) ;
 unsigned long FUNC_16 (int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_17(struct file *VAR_13, struct vm_area_struct *VAR_14)
{
 struct perf_event *VAR_15 = VAR_13->private_data;
 unsigned long VAR_16, VAR_17;
 struct user_struct *VAR_18 = FUNC_6();
 unsigned long VAR_19, VAR_20;
 struct ring_buffer *VAR_21;
 unsigned long VAR_22;
 unsigned long VAR_23;
 long VAR_24, VAR_25;
 int VAR_26 = 0, VAR_27 = 0;






 if (VAR_15->cpu == -1 && VAR_15->attr.inherit)
  return -VAR_1;

 if (!(VAR_14->vm_flags & VAR_9))
  return -VAR_1;

 VAR_22 = VAR_14->vm_end - VAR_14->vm_start;
 VAR_23 = (VAR_22 / VAR_5) - 1;





 if (VAR_23 != 0 && !FUNC_8(VAR_23))
  return -VAR_1;

 if (VAR_22 != VAR_5 * (1 + VAR_23))
  return -VAR_1;

 if (VAR_14->vm_pgoff != 0)
  return -VAR_1;

 FUNC_1(VAR_15->ctx->parent_ctx);
 FUNC_9(&VAR_15->mmap_mutex);
 if (VAR_15->rb) {
  if (VAR_15->rb->nr_pages == VAR_23)
   FUNC_2(&VAR_15->rb->refcount);
  else
   VAR_26 = -VAR_1;
  goto unlock;
 }

 VAR_24 = VAR_23 + 1;
 VAR_17 = VAR_12 >> (VAR_4 - 10);




 VAR_17 *= FUNC_11();

 VAR_16 = FUNC_4(&VAR_18->locked_vm) + VAR_24;

 VAR_25 = 0;
 if (VAR_16 > VAR_17)
  VAR_25 = VAR_16 - VAR_17;

 VAR_20 = FUNC_16(VAR_7);
 VAR_20 >>= VAR_4;
 VAR_19 = VAR_14->vm_mm->locked_vm + VAR_25;

 if ((VAR_19 > VAR_20) && FUNC_13() &&
  !FUNC_5(VAR_0)) {
  VAR_26 = -VAR_3;
  goto unlock;
 }

 FUNC_0(VAR_15->rb);

 if (VAR_14->vm_flags & VAR_10)
  VAR_27 |= VAR_6;

 VAR_21 = FUNC_14(VAR_23,
  VAR_15->attr.watermark ? VAR_15->attr.wakeup_watermark : 0,
  VAR_15->cpu, VAR_27);

 if (!VAR_21) {
  VAR_26 = -VAR_2;
  goto unlock;
 }
 FUNC_15(VAR_15->rb, VAR_21);

 FUNC_3(VAR_24, &VAR_18->locked_vm);
 VAR_15->mmap_locked = VAR_25;
 VAR_15->mmap_user = FUNC_7();
 VAR_14->vm_mm->locked_vm += VAR_15->mmap_locked;

 FUNC_12(VAR_15);

unlock:
 if (!VAR_26)
  FUNC_2(&VAR_15->mmap_count);
 FUNC_10(&VAR_15->mmap_mutex);

 VAR_14->vm_flags |= VAR_8;
 VAR_14->vm_ops = &VAR_11;

 return VAR_26;
}
