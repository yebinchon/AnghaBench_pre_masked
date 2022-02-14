
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int spa_feat_stats_lock; int * spa_feat_stats; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_9(spa_t *VAR_5, nvlist_t *VAR_6)
{
 nvlist_t *VAR_7;

 FUNC_0(FUNC_6(VAR_5, VAR_3, VAR_2));

 FUNC_2(&VAR_5->spa_feat_stats_lock);
 VAR_7 = VAR_5->spa_feat_stats;

 if (VAR_7 != ((void*)0)) {
  FUNC_7(VAR_5, VAR_7);
 } else {
  FUNC_1(FUNC_5(&VAR_7, VAR_1, VAR_0));
  VAR_5->spa_feat_stats = VAR_7;
  FUNC_8(VAR_5, VAR_7);
 }

 FUNC_1(FUNC_4(VAR_6, VAR_4,
     VAR_7));

 FUNC_3(&VAR_5->spa_feat_stats_lock);
}
