
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* per_module_logging_file; } ;
struct TYPE_6__ {TYPE_1__ opt; } ;
struct TYPE_7__ {TYPE_2__ subn; } ;
typedef TYPE_3__ osm_opensm_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(char **VAR_2, osm_opensm_t * VAR_3, FILE * VAR_4)
{
 FILE *VAR_5;
 char VAR_6[1024];

 if (VAR_3->subn.opt.per_module_logging_file != ((void*)0)) {
  VAR_5 = FUNC_2(VAR_3->subn.opt.per_module_logging_file, "r");
  if (!VAR_5) {
   if (VAR_1 == VAR_0)
    return;
   FUNC_3(VAR_4, "fopen(%s) failed: %s\n",
    VAR_3->subn.opt.per_module_logging_file,
    FUNC_4(VAR_1));
   return;
  }

  FUNC_3(VAR_4, "Per module logging file: %s\n",
   VAR_3->subn.opt.per_module_logging_file);
  while (FUNC_1(VAR_6, sizeof VAR_6, VAR_5) != ((void*)0))
   FUNC_3(VAR_4, "%s", VAR_6);
  FUNC_0(VAR_5);
  FUNC_3(VAR_4, "\n");
 }
}
