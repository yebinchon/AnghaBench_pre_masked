
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_user_path_rec {int dummy; } ;
struct ib_ucm_sidr_req {uintptr_t path; uintptr_t data; scalar_t__ len; int max_cm_retries; int timeout; int sid; int id; } ;
struct ib_cm_sidr_req_param {scalar_t__ private_data_len; scalar_t__ private_data; int path; int max_cm_retries; int timeout_ms; int service_id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_sidr_req*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ib_user_path_rec*,int ) ;
 int FUNC_3 (int ,void*,int) ;

int FUNC_4(struct ib_cm_id *VAR_3,
   struct ib_cm_sidr_req_param *VAR_4)
{
 struct ib_user_path_rec VAR_5;
 struct ib_ucm_sidr_req *VAR_6;
 void *VAR_7;
 int VAR_8;
 int VAR_9;

 if (!VAR_4 || !VAR_4->path)
  return FUNC_1(VAR_0);

 FUNC_0(VAR_7, VAR_6, VAR_2, VAR_9);
 VAR_6->id = VAR_3->handle;
 VAR_6->sid = VAR_4->service_id;
 VAR_6->timeout = VAR_4->timeout_ms;
 VAR_6->max_cm_retries = VAR_4->max_cm_retries;

 FUNC_2(&VAR_5, VAR_4->path);
 VAR_6->path = (uintptr_t) &VAR_5;

 if (VAR_4->private_data && VAR_4->private_data_len) {
  VAR_6->data = (uintptr_t) VAR_4->private_data;
  VAR_6->len = VAR_4->private_data_len;
 }

 VAR_8 = FUNC_3(VAR_3->device->fd, VAR_7, VAR_9);
 if (VAR_8 != VAR_9)
  return (VAR_8 >= 0) ? FUNC_1(VAR_1) : VAR_8;

 return 0;
}
