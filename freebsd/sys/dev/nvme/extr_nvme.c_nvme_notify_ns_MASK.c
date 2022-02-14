
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct nvme_namespace {int * cons_cookie; } ;
struct nvme_controller {void** cons_cookie; int is_initialized; struct nvme_namespace* ns; } ;
struct nvme_consumer {scalar_t__ id; int (* ns_fn ) (struct nvme_namespace*,void*) ;} ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 struct nvme_consumer* VAR_2 ;
 int FUNC_0 (struct nvme_namespace*,void*) ;

void
FUNC_1(struct nvme_controller *VAR_3, int VAR_4)
{
 struct nvme_consumer *VAR_5;
 struct nvme_namespace *VAR_6 = &VAR_3->ns[VAR_4 - 1];
 void *VAR_7;
 uint32_t VAR_8;

 if (!VAR_3->is_initialized)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_5 = &VAR_2[VAR_8];
  if (VAR_5->id != VAR_0 && VAR_5->ns_fn != ((void*)0) &&
      (VAR_7 = VAR_3->cons_cookie[VAR_8]) != ((void*)0))
   VAR_6->cons_cookie[VAR_8] = (*VAR_5->ns_fn)(VAR_6, VAR_7);
 }
}
