
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_event {int nargs; int * args; int event; int group; int point; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct perf_probe_event *VAR_1)
{
 int VAR_2, VAR_3;
 char VAR_4[128];
 char *VAR_5;


 VAR_5 = FUNC_4(&VAR_1->point);
 if (!VAR_5)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_4, 128, "%s:%s", VAR_1->group, VAR_1->event);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_2("  %-20s (on %s", VAR_4, VAR_5);

 if (VAR_1->nargs > 0) {
  FUNC_2(" with");
  for (VAR_2 = 0; VAR_2 < VAR_1->nargs; VAR_2++) {
   VAR_3 = FUNC_3(&VAR_1->args[VAR_2],
       VAR_4, 128);
   if (VAR_3 < 0)
    break;
   FUNC_2(" %s", VAR_4);
  }
 }
 FUNC_2(")\n");
 FUNC_1(VAR_5);
 return VAR_3;
}
