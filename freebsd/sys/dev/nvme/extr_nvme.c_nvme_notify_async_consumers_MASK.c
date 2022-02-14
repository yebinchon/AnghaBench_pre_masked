
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct nvme_controller {void** cons_cookie; } ;
struct nvme_consumer {scalar_t__ id; int (* async_fn ) (void*,struct nvme_completion const*,size_t,void*,size_t) ;} ;
struct nvme_completion {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 struct nvme_consumer* VAR_2 ;
 int FUNC_0 (void*,struct nvme_completion const*,size_t,void*,size_t) ;

void
FUNC_1(struct nvme_controller *VAR_3,
       const struct nvme_completion *VAR_4,
       uint32_t VAR_5, void *VAR_6,
       uint32_t VAR_7)
{
 struct nvme_consumer *VAR_8;
 void *VAR_9;
 uint32_t VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_8 = &VAR_2[VAR_10];
  if (VAR_8->id != VAR_0 && VAR_8->async_fn != ((void*)0) &&
      (VAR_9 = VAR_3->cons_cookie[VAR_10]) != ((void*)0)) {
   (*VAR_8->async_fn)(VAR_9, VAR_4,
       VAR_5, VAR_6, VAR_7);
  }
 }
}
