
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_6__ {int za_integer_length; int za_num_integers; int za_first_integer; int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_7__ {int spa_feat_for_write_obj; int spa_meta_objset; int spa_feat_for_read_obj; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_0, nvlist_t *VAR_1)
{
 zap_cursor_t VAR_2;
 zap_attribute_t VAR_3;


 if (FUNC_3(VAR_0))
  return;

 if (VAR_0->spa_feat_for_read_obj != 0) {
  for (FUNC_6(&VAR_2, VAR_0->spa_meta_objset,
      VAR_0->spa_feat_for_read_obj);
      FUNC_7(&VAR_2, &VAR_3) == 0;
      FUNC_4(&VAR_2)) {
   FUNC_0(VAR_3.za_integer_length == sizeof (uint64_t) &&
       VAR_3.za_num_integers == 1);
   FUNC_1(FUNC_2(VAR_1, VAR_3.za_name,
       VAR_3.za_first_integer));
  }
  FUNC_5(&VAR_2);
 }

 if (VAR_0->spa_feat_for_write_obj != 0) {
  for (FUNC_6(&VAR_2, VAR_0->spa_meta_objset,
      VAR_0->spa_feat_for_write_obj);
      FUNC_7(&VAR_2, &VAR_3) == 0;
      FUNC_4(&VAR_2)) {
   FUNC_0(VAR_3.za_integer_length == sizeof (uint64_t) &&
       VAR_3.za_num_integers == 1);
   FUNC_1(FUNC_2(VAR_1, VAR_3.za_name,
       VAR_3.za_first_integer));
  }
  FUNC_5(&VAR_2);
 }
}
