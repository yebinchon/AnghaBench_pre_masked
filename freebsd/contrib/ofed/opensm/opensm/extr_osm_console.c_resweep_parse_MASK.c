
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int force_heavy_sweep; } ;
struct TYPE_6__ {TYPE_1__ subn; } ;
typedef TYPE_2__ osm_opensm_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (char**) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(char **VAR_1, osm_opensm_t * VAR_2, FILE * VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4 ||
     (FUNC_4(VAR_4, "heavy") != 0 && FUNC_4(VAR_4, "light") != 0)) {
  FUNC_0(VAR_3, "Invalid resweep command\n");
  FUNC_1(VAR_3, 1);
 } else {
  if (FUNC_4(VAR_4, "heavy") == 0)
   VAR_2->subn.force_heavy_sweep = VAR_0;
  FUNC_3(VAR_2);
 }
}
