
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int sm_priority; } ;
struct TYPE_5__ {TYPE_2__ opt; } ;
struct TYPE_7__ {int sm; TYPE_1__ subn; } ;
typedef TYPE_3__ osm_opensm_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (char**) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_4(char **VAR_0, osm_opensm_t * VAR_1, FILE * VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  FUNC_0(VAR_2, "Current sm-priority is %d\n",
   VAR_1->subn.opt.sm_priority);
 else {
  VAR_4 = FUNC_3(VAR_3, ((void*)0), 0);
  if (0 > VAR_4 || 15 < VAR_4)
   FUNC_0(VAR_2,
    "Invalid sm-priority %d; must be between 0 and 15\n",
    VAR_4);
  else {
   FUNC_0(VAR_2, "Setting sm-priority to %d\n", VAR_4);
   FUNC_2(&VAR_1->sm, (uint8_t)VAR_4);
  }
 }
}
