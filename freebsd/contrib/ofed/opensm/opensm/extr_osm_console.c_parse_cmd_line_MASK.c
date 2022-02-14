
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * out; } ;
struct TYPE_8__ {TYPE_1__ console; } ;
typedef TYPE_2__ osm_opensm_t ;
struct TYPE_10__ {char* name; int (* parse_function ) (char**,TYPE_2__*,int *) ;} ;
struct TYPE_9__ {scalar_t__ on; } ;
typedef int FILE ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char) ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,char**) ;
 int FUNC_6 (char**,TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_7(char *VAR_2, osm_opensm_t * VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6, VAR_7 = 0;
 FILE *VAR_8 = VAR_3->console.out;

 while (FUNC_3(*VAR_2))
  VAR_2++;
 if (!*VAR_2)
  return;


 VAR_4 = FUNC_5(VAR_2, " \t\n\r", &VAR_5);
 if (VAR_4) {
  for (VAR_6 = 0; VAR_0[VAR_6].name; VAR_6++) {
   if (VAR_1.on) {
    if (!FUNC_4(VAR_4, "q")) {
     VAR_1.on = 0;
    }
    VAR_7 = 1;
    break;
   }
   if (!FUNC_4(VAR_4, VAR_0[VAR_6].name)) {
    VAR_7 = 1;
    VAR_0[VAR_6].parse_function(&VAR_5, VAR_3,
              VAR_8);
    break;
   }
  }
  if (!VAR_7) {
   FUNC_1(VAR_8, "%s : Command not found\n\n", VAR_4);
   FUNC_2(VAR_8, 0);
  }
 } else {
  FUNC_1(VAR_8, "Error parsing command line: `%s'\n", VAR_2);
 }
 if (VAR_1.on) {
  FUNC_1(VAR_8, "use \"q<ret>\" to quit loop\n");
  FUNC_0(VAR_8);
 }
}
