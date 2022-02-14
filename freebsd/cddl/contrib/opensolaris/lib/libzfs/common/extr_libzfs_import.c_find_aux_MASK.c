
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_6__ {scalar_t__ cb_guid; TYPE_1__* cb_zhp; int cb_type; } ;
typedef TYPE_2__ aux_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(zpool_handle_t *VAR_2, void *VAR_3)
{
 aux_cbdata_t *VAR_4 = VAR_3;
 nvlist_t **VAR_5;
 uint_t VAR_6, VAR_7;
 uint64_t VAR_8;
 nvlist_t *VAR_9;

 FUNC_3(FUNC_0(VAR_2->zpool_config, VAR_1,
     &VAR_9) == 0);

 if (FUNC_1(VAR_9, VAR_4->cb_type,
     &VAR_5, &VAR_7) == 0) {
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   FUNC_3(FUNC_2(VAR_5[VAR_6],
       VAR_0, &VAR_8) == 0);
   if (VAR_8 == VAR_4->cb_guid) {
    VAR_4->cb_zhp = VAR_2;
    return (1);
   }
  }
 }

 FUNC_4(VAR_2);
 return (0);
}
