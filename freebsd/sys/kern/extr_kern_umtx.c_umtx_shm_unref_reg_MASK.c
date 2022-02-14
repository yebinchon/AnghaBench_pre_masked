
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_object_t ;
struct umtx_shm_reg {TYPE_1__* ushm_obj; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {TYPE_2__* shm_object; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct umtx_shm_reg*) ;
 int VAR_1 ;
 int FUNC_5 (struct umtx_shm_reg*,int) ;

__attribute__((used)) static void
FUNC_6(struct umtx_shm_reg *VAR_2, bool VAR_3)
{
 vm_object_t VAR_4;
 bool VAR_5;

 if (VAR_3) {
  VAR_4 = VAR_2->ushm_obj->shm_object;
  FUNC_0(VAR_4);
  VAR_4->flags |= VAR_0;
  FUNC_1(VAR_4);
 }
 FUNC_2(&VAR_1);
 VAR_5 = FUNC_5(VAR_2, VAR_3);
 FUNC_3(&VAR_1);
 if (VAR_5)
  FUNC_4(VAR_2);
}
