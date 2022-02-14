
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_ucm_attr_id_resp {int remote_id; int local_id; int service_mask; int service_id; } ;
struct ib_ucm_attr_id {int id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct ib_cm_attr_param {int remote_id; int local_id; int service_mask; int service_id; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_attr_id*,struct ib_ucm_attr_id_resp*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ib_ucm_attr_id_resp*,int) ;
 int FUNC_3 (int ,void*,int) ;

int FUNC_4(struct ib_cm_id *VAR_3, struct ib_cm_attr_param *VAR_4)
{
 struct ib_ucm_attr_id_resp *VAR_5;
 struct ib_ucm_attr_id *VAR_6;
 void *VAR_7;
 int VAR_8;
 int VAR_9;

 if (!VAR_4)
  return FUNC_1(VAR_0);

 FUNC_0(VAR_7, VAR_6, VAR_5, VAR_2, VAR_9);
 VAR_6->id = VAR_3->handle;

 VAR_8 = FUNC_3(VAR_3->device->fd, VAR_7, VAR_9);
 if (VAR_8 != VAR_9)
  return (VAR_8 >= 0) ? FUNC_1(VAR_1) : -1;

 FUNC_2(VAR_5, sizeof *VAR_5);

 VAR_4->service_id = VAR_5->service_id;
 VAR_4->service_mask = VAR_5->service_mask;
 VAR_4->local_id = VAR_5->local_id;
 VAR_4->remote_id = VAR_5->remote_id;
 return 0;
}
