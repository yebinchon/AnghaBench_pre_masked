
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,char const*) ;
 scalar_t__ FUNC_1 (int **,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int **) ;
 int * FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int) ;

nvlist_t *
FUNC_6(zpool_handle_t *VAR_5, const char *VAR_6,
    boolean_t *VAR_7, boolean_t *VAR_8, boolean_t *VAR_9)
{
 nvlist_t *VAR_10, *VAR_11, *VAR_12;

 FUNC_5(FUNC_1(&VAR_10, VAR_2, VAR_1) == 0);
 FUNC_5(FUNC_0(VAR_10, VAR_3, VAR_6) == 0);

 FUNC_5(FUNC_3(VAR_5->zpool_config, VAR_4,
     &VAR_11) == 0);

 *VAR_7 = VAR_0;
 *VAR_8 = VAR_0;
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_0;
 VAR_12 = FUNC_4(VAR_11, VAR_10, VAR_7, VAR_8, VAR_9);
 FUNC_2(VAR_10);

 return (VAR_12);
}
