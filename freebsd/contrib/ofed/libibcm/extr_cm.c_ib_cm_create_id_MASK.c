
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_create_id_resp {int id; } ;
struct ib_ucm_create_id {uintptr_t uid; } ;
struct ib_cm_id {int handle; } ;
struct ib_cm_device {int fd; } ;
struct cm_id_private {struct ib_cm_id id; } ;


 int FUNC_0 (void*,struct ib_ucm_create_id*,struct ib_ucm_create_id_resp*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ib_ucm_create_id_resp*,int) ;
 struct cm_id_private* FUNC_3 (struct ib_cm_device*,void*) ;
 int FUNC_4 (struct cm_id_private*) ;
 int FUNC_5 (int ,void*,int) ;

int FUNC_6(struct ib_cm_device *VAR_2,
      struct ib_cm_id **VAR_3, void *VAR_4)
{
 struct ib_ucm_create_id_resp *VAR_5;
 struct ib_ucm_create_id *VAR_6;
 struct cm_id_private *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(VAR_2, VAR_4);
 if (!VAR_7)
  return FUNC_1(VAR_0);

 FUNC_0(VAR_8, VAR_6, VAR_5, VAR_1, VAR_10);
 VAR_6->uid = (uintptr_t) VAR_7;

 VAR_9 = FUNC_5(VAR_2->fd, VAR_8, VAR_10);
 if (VAR_9 != VAR_10)
  goto err;

 FUNC_2(VAR_5, sizeof *VAR_5);

 VAR_7->id.handle = VAR_5->id;
 *VAR_3 = &VAR_7->id;
 return 0;

err: FUNC_4(VAR_7);
 return VAR_9;
}
