
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_et {int dummy; } ;
struct cam_ed {scalar_t__ serial_num_len; int * serial_num; scalar_t__ queue_flags; scalar_t__ inq_flags; int inq_data; scalar_t__ maxtags; scalar_t__ mintags; int * quirk; } ;
struct cam_eb {int dummy; } ;
typedef int lun_id_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;
 struct cam_ed* FUNC_2 (struct cam_eb*,struct cam_et*,int ) ;

__attribute__((used)) static struct cam_ed *
FUNC_3(struct cam_eb *VAR_0, struct cam_et *VAR_1, lun_id_t VAR_2)
{
 struct cam_ed *VAR_3;

 FUNC_1("mmc_alloc_device()\n");
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3->quirk = ((void*)0);
 VAR_3->mintags = 0;
 VAR_3->maxtags = 0;
 FUNC_0(&VAR_3->inq_data, sizeof(VAR_3->inq_data));
 VAR_3->inq_flags = 0;
 VAR_3->queue_flags = 0;
 VAR_3->serial_num = ((void*)0);
 VAR_3->serial_num_len = 0;
 return (VAR_3);
}
