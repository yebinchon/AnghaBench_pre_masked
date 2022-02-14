
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flush; int out_port; } ;
struct TYPE_5__ {TYPE_1__ log; } ;
typedef TYPE_2__ osm_opensm_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(char **VAR_2, osm_opensm_t * VAR_3, FILE * VAR_4)
{
 char *VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 if (!VAR_5 ||
     (FUNC_4(VAR_5, "on") != 0 && FUNC_4(VAR_5, "off") != 0)) {
  FUNC_1(VAR_4, "Invalid logflush command\n");
  FUNC_2(VAR_4, 1);
 } else {
  if (FUNC_4(VAR_5, "on") == 0) {
   VAR_3->log.flush = VAR_1;
                 FUNC_0(VAR_3->log.out_port);
  } else
   VAR_3->log.flush = VAR_0;
 }
}
