
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zss_data; int zss_type; } ;
typedef TYPE_1__ zfs_soft_state_t ;
typedef int zfs_onexit_t ;
struct cdev {int dummy; } ;
typedef scalar_t__ minor_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (void*,int ) ;
 int VAR_4 ;
 int FUNC_6 (int **) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 () ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_7)
{
 minor_t VAR_8;
 zfs_soft_state_t *VAR_9;

 FUNC_0(FUNC_1(&VAR_4));

 VAR_8 = FUNC_7();
 if (VAR_8 == 0)
  return (FUNC_2(VAR_2));

 if (FUNC_4(VAR_6, VAR_8) != VAR_0)
  return (FUNC_2(VAR_1));

 FUNC_5((void *)(uintptr_t)VAR_8, VAR_5);

 VAR_9 = FUNC_3(VAR_6, VAR_8);
 VAR_9->zss_type = VAR_3;
 FUNC_6((zfs_onexit_t **)&VAR_9->zss_data);

 return (0);
}
