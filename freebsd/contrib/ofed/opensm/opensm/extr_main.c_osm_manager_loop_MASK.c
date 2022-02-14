
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int osm_subn_opt_t ;
struct TYPE_6__ {int force_heavy_sweep; } ;
struct TYPE_7__ {int log; int console; TYPE_1__ subn; } ;
typedef TYPE_2__ osm_opensm_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;

int FUNC_7(osm_subn_opt_t * VAR_4, osm_opensm_t * VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_1(VAR_4)) {
  if (!FUNC_4(VAR_4, &VAR_5->console, &VAR_5->log))
   VAR_6 = 1;
 }




 while (!VAR_1) {
  if (VAR_6) {
   if (FUNC_2(VAR_5))
    VAR_6 = 0;
  } else
   FUNC_0(10000);

  if (VAR_3) {
   VAR_3 = 0;
   FUNC_5(&(VAR_5->log));
  }
  if (VAR_2) {
   VAR_2 = 0;

   VAR_5->subn.force_heavy_sweep = VAR_0;
   FUNC_6(VAR_5);
  }
 }
 if (FUNC_1(VAR_4))
  FUNC_3(&VAR_5->console, &VAR_5->log);
 return 0;
}
