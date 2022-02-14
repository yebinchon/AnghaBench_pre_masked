
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int osm_opensm_t ;
struct TYPE_2__ {int on; int (* loop_function ) (int *,int *) ;int previous; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_3 (char**) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(char **VAR_1, osm_opensm_t * VAR_2, FILE * VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4) {
  if (FUNC_5(VAR_4, "loop") == 0) {
   FUNC_1(VAR_3, "Looping on status command...\n");
   FUNC_0(VAR_3);
   VAR_0.on = 1;
   VAR_0.previous = FUNC_6(((void*)0));
   VAR_0.loop_function = FUNC_4;
  } else {
   FUNC_2(VAR_3, 1);
   return;
  }
 }
 FUNC_4(VAR_2, VAR_3);
}
