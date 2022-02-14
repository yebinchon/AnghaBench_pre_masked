
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_ucm_listen {void* service_mask; void* service_id; int id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
typedef void* __be64 ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_listen*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,void*,int) ;

int FUNC_3(struct ib_cm_id *VAR_2,
   __be64 VAR_3,
   __be64 VAR_4)
{
 struct ib_ucm_listen *VAR_5;
 void *VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_6, VAR_5, VAR_1, VAR_8);
 VAR_5->id = VAR_2->handle;
 VAR_5->service_id = VAR_3;
 VAR_5->service_mask = VAR_4;

 VAR_7 = FUNC_2(VAR_2->device->fd, VAR_6, VAR_8);
 if (VAR_7 != VAR_8)
  return (VAR_7 >= 0) ? FUNC_1(VAR_0) : -1;

 return 0;
}
