
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_10__ {int zgd_lr; scalar_t__ zgd_db; TYPE_2__* zgd_private; } ;
typedef TYPE_3__ zgd_t ;
typedef int objset_t ;
struct TYPE_8__ {int * z_os; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int ) ;

void
FUNC_7(zgd_t *VAR_0, int VAR_1)
{
 znode_t *VAR_2 = VAR_0->zgd_private;
 objset_t *VAR_3 = VAR_2->z_zfsvfs->z_os;

 if (VAR_0->zgd_db)
  FUNC_2(VAR_0->zgd_db, VAR_0);

 FUNC_6(VAR_0->zgd_lr);





 FUNC_0(FUNC_1(VAR_2), FUNC_4(FUNC_3(VAR_3)));

 FUNC_5(VAR_0, sizeof (zgd_t));
}
