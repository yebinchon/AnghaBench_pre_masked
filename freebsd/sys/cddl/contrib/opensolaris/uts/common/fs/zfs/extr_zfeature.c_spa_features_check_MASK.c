
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_5__ {int za_integer_length; int za_num_integers; scalar_t__ za_first_integer; int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_6__ {int spa_feat_desc_obj; int spa_feat_for_read_obj; int spa_feat_for_write_obj; int * spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int objset_t ;
typedef int nvlist_t ;
typedef int buf ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int,int,char*) ;
 int FUNC_9 (int ) ;

boolean_t
FUNC_10(spa_t *VAR_3, boolean_t VAR_4,
    nvlist_t *VAR_5, nvlist_t *VAR_6)
{
 objset_t *VAR_7 = VAR_3->spa_meta_objset;
 boolean_t VAR_8;
 zap_cursor_t VAR_9;
 zap_attribute_t VAR_10;
 uint64_t VAR_11 = VAR_4 ?
     VAR_3->spa_feat_for_write_obj : VAR_3->spa_feat_for_read_obj;

 VAR_8 = VAR_1;
 for (FUNC_6(&VAR_9, VAR_7, VAR_11);
     FUNC_7(&VAR_9, &VAR_10) == 0;
     FUNC_4(&VAR_9)) {
  FUNC_0(VAR_10.za_integer_length == sizeof (uint64_t) &&
      VAR_10.za_num_integers == 1);

  if (((void*)0) != VAR_6) {
   FUNC_2(VAR_6, VAR_10.za_name,
       VAR_10.za_first_integer);
  }

  if (VAR_10.za_first_integer != 0 &&
      !FUNC_9(VAR_10.za_name)) {
   VAR_8 = VAR_0;

   if (((void*)0) != VAR_5) {
    char *VAR_12 = "";
    char VAR_13[VAR_2];

    if (FUNC_8(VAR_7, VAR_3->spa_feat_desc_obj,
        VAR_10.za_name, 1, sizeof (VAR_13), VAR_13) == 0)
     VAR_12 = VAR_13;

    FUNC_1(FUNC_3(VAR_5, VAR_10.za_name,
        VAR_12) == 0);
   }
  }
 }
 FUNC_5(&VAR_9);

 return (VAR_8);
}
