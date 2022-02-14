
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int spa_vdev_top_lock; int spa_name; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

int
FUNC_6(spa_t *VAR_7)
{
 int VAR_8;
 uint64_t VAR_9;

 FUNC_1(&VAR_7->spa_vdev_top_lock);
 FUNC_1(&VAR_6);
 VAR_9 = FUNC_4(((void*)0));

 VAR_8 = FUNC_0(VAR_7->spa_name, VAR_4,
     VAR_5, &VAR_9, 5, VAR_3);

 if (VAR_8 == 0) {
  FUNC_5(VAR_7, VAR_0, VAR_1);
  FUNC_3(VAR_7, ((void*)0), ((void*)0), VAR_2);
 }

 FUNC_2(&VAR_6);
 FUNC_2(&VAR_7->spa_vdev_top_lock);

 return (VAR_8);
}
