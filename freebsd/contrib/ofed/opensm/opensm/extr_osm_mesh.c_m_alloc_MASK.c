
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int osm_log_t ;
struct TYPE_5__ {TYPE_1__* p_osm; } ;
typedef TYPE_2__ lash_t ;
struct TYPE_4__ {int log; } ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int**,int) ;

__attribute__((used)) static int **FUNC_3(lash_t *VAR_1, int VAR_2)
{
 osm_log_t *VAR_3 = &VAR_1->p_osm->log;
 int VAR_4;
 int **VAR_5 = ((void*)0);

 do {
  if (!(VAR_5 = FUNC_1(VAR_2, sizeof(int *))))
   break;

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   if (!(VAR_5[VAR_4] = FUNC_1(VAR_2, sizeof(int))))
    break;
  }
  if (VAR_4 != VAR_2)
   break;

  return VAR_5;
 } while (0);

 FUNC_0(VAR_3, VAR_0,
  "Failed allocating matrix - out of memory\n");

 FUNC_2(VAR_5, VAR_2);
 return ((void*)0);
}
