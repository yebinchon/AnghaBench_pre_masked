
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_fault {int flags; int pgoff; TYPE_2__* page; } ;
struct vm_area_struct {TYPE_1__* vm_file; } ;
struct ring_buffer {int dummy; } ;
struct perf_event {int rb; } ;
struct TYPE_5__ {int index; int mapping; } ;
struct TYPE_4__ {int f_mapping; struct perf_event* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (struct ring_buffer*,int ) ;
 struct ring_buffer* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 struct perf_event *VAR_5 = VAR_3->vm_file->private_data;
 struct ring_buffer *VAR_6;
 int VAR_7 = VAR_2;

 if (VAR_4->flags & VAR_0) {
  if (VAR_4->pgoff == 0)
   VAR_7 = 0;
  return VAR_7;
 }

 FUNC_3();
 VAR_6 = FUNC_2(VAR_5->rb);
 if (!VAR_6)
  goto unlock;

 if (VAR_4->pgoff && (VAR_4->flags & VAR_1))
  goto unlock;

 VAR_4->page = FUNC_1(VAR_6, VAR_4->pgoff);
 if (!VAR_4->page)
  goto unlock;

 FUNC_0(VAR_4->page);
 VAR_4->page->mapping = VAR_3->vm_file->f_mapping;
 VAR_4->page->index = VAR_4->pgoff;

 VAR_7 = 0;
unlock:
 FUNC_4();

 return VAR_7;
}
