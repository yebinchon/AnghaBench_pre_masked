
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef int objset_t ;
struct TYPE_4__ {char const* ddha_name; } ;
typedef TYPE_1__ dsl_destroy_head_arg_t ;
typedef int boolean_t ;
struct TYPE_5__ {int ds_prev_snap_txg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int ,int ,int ,int **) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char const*,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char const*,int **,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char const*) ;

int
FUNC_13(const char *VAR_9)
{
 dsl_destroy_head_arg_t VAR_10;
 int VAR_11;
 spa_t *VAR_12;
 boolean_t VAR_13;





 VAR_11 = FUNC_10(VAR_9, &VAR_12, VAR_3);
 if (VAR_11 != 0)
  return (VAR_11);
 VAR_13 = FUNC_9(VAR_12, VAR_4);
 FUNC_8(VAR_12, VAR_3);

 VAR_10.ddha_name = VAR_9;

 if (!VAR_13) {
  objset_t *VAR_14;

  VAR_11 = FUNC_7(VAR_9, VAR_7,
      VAR_6, &VAR_10,
      0, VAR_5);
  if (VAR_11 != 0)
   return (VAR_11);






  VAR_11 = FUNC_4(VAR_9, VAR_1, VAR_0, VAR_3, &VAR_14);
  if (VAR_11 == 0) {
   uint64_t VAR_15 =
       FUNC_6(FUNC_3(VAR_14))->
       ds_prev_snap_txg;
   for (uint64_t VAR_16 = 0; VAR_11 == 0;
       VAR_11 = FUNC_1(VAR_14, &VAR_16, VAR_2,
       VAR_15))
    (void) FUNC_0(VAR_14, VAR_16);

   FUNC_11(FUNC_5(VAR_14), 0);
   FUNC_2(VAR_14, VAR_3);
  }
 }

 return (FUNC_7(VAR_9, VAR_7,
     VAR_8, &VAR_10, 0, VAR_5));
}
