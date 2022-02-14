
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t spa_feature_t ;
typedef int objset_t ;
struct TYPE_5__ {int * ds_feature_inuse; } ;
struct TYPE_4__ {int fi_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int * VAR_4 ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,int ,int ,int **) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int
FUNC_7(const char *VAR_7, void *VAR_8)
{
 int VAR_9;
 objset_t *VAR_10;

 VAR_9 = FUNC_6(VAR_7, VAR_0, VAR_1, &VAR_10);
 if (VAR_9 != 0)
  return (0);

 for (spa_feature_t VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!FUNC_2(VAR_10)->ds_feature_inuse[VAR_11])
   continue;
  FUNC_0(VAR_6[VAR_11].fi_flags &
      VAR_3);
  VAR_4[VAR_11]++;
 }

 if (FUNC_3(FUNC_2(VAR_10))) {
  VAR_5++;
 }

 FUNC_4(VAR_10);
 FUNC_1(VAR_10, VAR_1);
 FUNC_5();
 return (0);
}
