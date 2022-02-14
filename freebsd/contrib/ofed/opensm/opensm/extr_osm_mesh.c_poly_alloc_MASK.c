
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
 int* FUNC_1 (int,int) ;

__attribute__((used)) static int *FUNC_2(lash_t *VAR_1, int VAR_2)
{
 osm_log_t *VAR_3 = &VAR_1->p_osm->log;
 int *VAR_4;

 if (!(VAR_4 = FUNC_1(VAR_2+1, sizeof(int))))
  FUNC_0(VAR_3, VAR_0,
   "Failed allocating poly - out of memory\n");

 return VAR_4;
}
