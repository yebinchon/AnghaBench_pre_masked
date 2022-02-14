
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int osm_log_t ;
struct TYPE_8__ {TYPE_1__* p_osm; } ;
typedef TYPE_2__ lash_t ;
struct TYPE_7__ {int log; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int,int***,int*) ;
 int FUNC_3 (int*) ;
 int*** FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (int***,int) ;
 int* FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_7(lash_t *VAR_0, int VAR_1, int **VAR_2, int **VAR_3)
{
 osm_log_t *VAR_4 = &VAR_0->p_osm->log;
 int VAR_5 = -1;
 int VAR_6, VAR_7;
 int ***VAR_8 = ((void*)0);
 int *VAR_9 = ((void*)0);
 int VAR_10 = VAR_1;

 FUNC_0(VAR_4);

 do {
  if (!VAR_2)
   break;

  if (!(VAR_9 = FUNC_6(VAR_0, VAR_10)))
   break;

  if (!(VAR_8 = FUNC_4(VAR_0, VAR_1, VAR_10))) {
   FUNC_3(VAR_9);
   VAR_9 = ((void*)0);
   break;
  }

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    VAR_8[VAR_6][VAR_7][0] = VAR_2[VAR_6][VAR_7];
   }
   VAR_8[VAR_6][VAR_6][1] = -1;
  }

  if (FUNC_2(VAR_0, VAR_10, VAR_1, VAR_8, VAR_9)) {
   FUNC_3(VAR_9);
   VAR_9 = ((void*)0);
   break;
  }

  VAR_5 = 0;
 } while (0);

 FUNC_5(VAR_8, VAR_1);
 *VAR_3 = VAR_9;

 FUNC_1(VAR_4);
 return VAR_5;
}
