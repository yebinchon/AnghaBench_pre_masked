
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_mm; TYPE_2__* vm_file; } ;
struct user_struct {int locked_vm; } ;
struct ring_buffer {int dummy; } ;
struct perf_event {int mmap_mutex; struct ring_buffer* rb; scalar_t__ mmap_locked; struct user_struct* mmap_user; int mmap_count; } ;
struct TYPE_4__ {struct perf_event* private_data; } ;
struct TYPE_3__ {int locked_vm; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (struct user_struct*) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (struct ring_buffer*) ;
 int FUNC_5 (struct ring_buffer*,int *) ;
 int FUNC_6 (struct perf_event*,struct ring_buffer*) ;
 int FUNC_7 (struct ring_buffer*) ;

__attribute__((used)) static void FUNC_8(struct vm_area_struct *VAR_1)
{
 struct perf_event *VAR_2 = VAR_1->vm_file->private_data;

 if (FUNC_0(&VAR_2->mmap_count, &VAR_2->mmap_mutex)) {
  unsigned long VAR_3 = FUNC_4(VAR_2->rb);
  struct user_struct *VAR_4 = VAR_2->mmap_user;
  struct ring_buffer *VAR_5 = VAR_2->rb;

  FUNC_1((VAR_3 >> VAR_0) + 1, &VAR_4->locked_vm);
  VAR_1->vm_mm->locked_vm -= VAR_2->mmap_locked;
  FUNC_5(VAR_2->rb, ((void*)0));
  FUNC_6(VAR_2, VAR_5);
  FUNC_3(&VAR_2->mmap_mutex);

  FUNC_7(VAR_5);
  FUNC_2(VAR_4);
 }
}
