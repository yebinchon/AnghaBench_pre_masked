
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * z_log; int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_10__ {TYPE_1__* vfs_data; } ;
typedef TYPE_2__ vfs_t ;
struct TYPE_11__ {int dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(vfs_t *VAR_3, int VAR_4)
{





 if (VAR_1)
  return (0);





 if (VAR_4 == VAR_0)
  return (0);

 if (VAR_3 != ((void*)0)) {



  zfsvfs_t *VAR_5 = VAR_3->vfs_data;
  dsl_pool_t *VAR_6;
  int VAR_7;

  VAR_7 = FUNC_5(VAR_3, VAR_4);
  if (VAR_7 != 0)
   return (VAR_7);

  FUNC_0(VAR_5);
  VAR_6 = FUNC_2(VAR_5->z_os);





  if (VAR_2 && FUNC_3(VAR_6->dp_spa)) {
   FUNC_1(VAR_5);
   return (0);
  }

  if (VAR_5->z_log != ((void*)0))
   FUNC_6(VAR_5->z_log, 0);

  FUNC_1(VAR_5);
 } else {





  FUNC_4();
 }

 return (0);
}
