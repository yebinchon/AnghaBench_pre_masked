
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_5__ {int za_integer_length; int za_num_integers; int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int ,int ,int,int,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;

int
FUNC_8(objset_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, dmu_tx_t *VAR_6)
{
 zap_cursor_t VAR_7;
 int VAR_8 = 0;

 zap_attribute_t *VAR_9 = FUNC_1(sizeof (*VAR_9), VAR_1);
 for (FUNC_6(&VAR_7, VAR_2, VAR_3);
     FUNC_7(&VAR_7, VAR_9) == 0;
     (void) FUNC_4(&VAR_7)) {
  if (VAR_9->za_integer_length != 8 || VAR_9->za_num_integers != 1) {
   VAR_8 = FUNC_0(VAR_0);
   break;
  }
  VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_9->za_name,
      8, 1, &VAR_5, VAR_6);
  if (VAR_8 != 0)
   break;
 }
 FUNC_5(&VAR_7);
 FUNC_2(VAR_9, sizeof (*VAR_9));
 return (VAR_8);
}
