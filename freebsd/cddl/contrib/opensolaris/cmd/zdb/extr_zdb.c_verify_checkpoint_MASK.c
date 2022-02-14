
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {scalar_t__ ub_checkpoint_txg; } ;
typedef TYPE_1__ uberblock_t ;
struct TYPE_10__ {int spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int * VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,int,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_5)
{
 uberblock_t VAR_6;
 int VAR_7;

 if (!FUNC_3(VAR_5, VAR_3))
  return (0);

 VAR_7 = FUNC_5(VAR_5->spa_meta_objset, VAR_0,
     VAR_1, sizeof (uint64_t),
     sizeof (uberblock_t) / sizeof (uint64_t), &VAR_6);

 if (VAR_7 == VAR_2 && !VAR_4['L']) {





  (void) FUNC_2("\nPartially discarded checkpoint "
      "state found:\n");
  FUNC_0(VAR_5);
  return (0);
 } else if (VAR_7 != 0) {
  (void) FUNC_2("lookup error %d when looking for "
      "checkpointed uberblock in MOS\n", VAR_7);
  return (VAR_7);
 }
 FUNC_1(&VAR_6, "\nCheckpointed uberblock found:\n", "\n");

 if (VAR_6.ub_checkpoint_txg == 0) {
  (void) FUNC_2("\nub_checkpoint_txg not set in checkpointed "
      "uberblock\n");
  VAR_7 = 3;
 }

 if (VAR_7 == 0 && !VAR_4['L'])
  FUNC_4(VAR_5);

 return (VAR_7);
}
