
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_ucm_sidr_rep {uintptr_t data; uintptr_t info; scalar_t__ info_len; scalar_t__ data_len; int status; int qkey; int qpn; int id; } ;
struct ib_cm_sidr_rep_param {scalar_t__ info_length; scalar_t__ info; scalar_t__ private_data_len; scalar_t__ private_data; int status; int qkey; int qp_num; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_sidr_rep*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,void*,int) ;

int FUNC_3(struct ib_cm_id *VAR_3,
   struct ib_cm_sidr_rep_param *VAR_4)
{
 struct ib_ucm_sidr_rep *VAR_5;
 void *VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_4)
  return FUNC_1(VAR_0);

 FUNC_0(VAR_6, VAR_5, VAR_2, VAR_8);
 VAR_5->id = VAR_3->handle;
 VAR_5->qpn = VAR_4->qp_num;
 VAR_5->qkey = VAR_4->qkey;
 VAR_5->status = VAR_4->status;

 if (VAR_4->private_data && VAR_4->private_data_len) {
  VAR_5->data = (uintptr_t) VAR_4->private_data;
  VAR_5->data_len = VAR_4->private_data_len;
 }

 if (VAR_4->info && VAR_4->info_length) {
  VAR_5->info = (uintptr_t) VAR_4->info;
  VAR_5->info_len = VAR_4->info_length;
 }

 VAR_7 = FUNC_2(VAR_3->device->fd, VAR_6, VAR_8);
 if (VAR_7 != VAR_8)
  return (VAR_7 >= 0) ? FUNC_1(VAR_1) : -1;

 return 0;
}
