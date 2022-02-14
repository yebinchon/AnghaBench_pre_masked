
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int spa_history; int * spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_10__ {int sh_phys_max_off; } ;
typedef TYPE_2__ spa_history_phys_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
struct TYPE_11__ {int db_size; TYPE_2__* db_data; } ;
typedef TYPE_3__ dmu_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int ,int ,TYPE_3__**) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (int *,int ,int ,int ,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int *,int ,int ,int,int,int *,int *) ;

void
FUNC_11(spa_t *VAR_6, dmu_tx_t *VAR_7)
{
 dmu_buf_t *VAR_8;
 spa_history_phys_t *VAR_9;
 objset_t *VAR_10 = VAR_6->spa_meta_objset;

 FUNC_0(VAR_6->spa_history == 0);
 VAR_6->spa_history = FUNC_7(VAR_10, VAR_0,
     VAR_5, VAR_1,
     sizeof (spa_history_phys_t), VAR_7);

 FUNC_3(FUNC_10(VAR_10, VAR_2,
     VAR_3, sizeof (uint64_t), 1,
     &VAR_6->spa_history, VAR_7) == 0);

 FUNC_3(0 == FUNC_4(VAR_10, VAR_6->spa_history, VAR_4, &VAR_8));
 FUNC_0(VAR_8->db_size >= sizeof (spa_history_phys_t));

 VAR_9 = VAR_8->db_data;
 FUNC_6(VAR_8, VAR_7);





 VAR_9->sh_phys_max_off =
     FUNC_8(FUNC_9(VAR_6)) / 1000;
 VAR_9->sh_phys_max_off = FUNC_2(VAR_9->sh_phys_max_off, 1<<30);
 VAR_9->sh_phys_max_off = FUNC_1(VAR_9->sh_phys_max_off, 128<<10);

 FUNC_5(VAR_8, VAR_4);
}
