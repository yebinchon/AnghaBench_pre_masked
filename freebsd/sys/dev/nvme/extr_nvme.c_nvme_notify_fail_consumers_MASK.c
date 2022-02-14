
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct nvme_controller {int ** cons_cookie; int is_initialized; } ;
struct nvme_consumer {scalar_t__ id; int (* fail_fn ) (void*) ;} ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 struct nvme_consumer* VAR_2 ;
 int FUNC_0 (void*) ;

void
FUNC_1(struct nvme_controller *VAR_3)
{
 struct nvme_consumer *VAR_4;
 void *VAR_5;
 uint32_t VAR_6;







 if (!VAR_3->is_initialized)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = &VAR_2[VAR_6];
  if (VAR_4->id != VAR_0 &&
      (VAR_5 = VAR_3->cons_cookie[VAR_6]) != ((void*)0)) {
   VAR_3->cons_cookie[VAR_6] = ((void*)0);
   if (VAR_4->fail_fn != ((void*)0))
    VAR_4->fail_fn(VAR_5);
  }
 }
}
