
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; } ;
struct perf_event {int mmap_count; } ;
struct TYPE_2__ {struct perf_event* private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_0)
{
 struct perf_event *VAR_1 = VAR_0->vm_file->private_data;

 FUNC_0(&VAR_1->mmap_count);
}
