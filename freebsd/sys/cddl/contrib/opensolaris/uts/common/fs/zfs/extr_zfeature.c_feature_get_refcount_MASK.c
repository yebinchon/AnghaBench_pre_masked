
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t fi_feature; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__* spa_feat_refcount_cache; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (size_t) ;

int
FUNC_3(spa_t *VAR_2, zfeature_info_t *VAR_3, uint64_t *VAR_4)
{
 FUNC_0(FUNC_2(VAR_3->fi_feature));
 if (VAR_2->spa_feat_refcount_cache[VAR_3->fi_feature] ==
     VAR_1) {
  return (FUNC_1(VAR_0));
 }
 *VAR_4 = VAR_2->spa_feat_refcount_cache[VAR_3->fi_feature];
 return (0);
}
