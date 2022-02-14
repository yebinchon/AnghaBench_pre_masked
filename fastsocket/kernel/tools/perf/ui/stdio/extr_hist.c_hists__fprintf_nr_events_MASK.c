
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* nr_events; } ;
struct hists {TYPE_1__ stats; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char const*,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*,char*) ;

size_t FUNC_3(struct hists *VAR_1, FILE *VAR_2)
{
 int VAR_3;
 size_t VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  const char *VAR_5;

  if (VAR_1->stats.nr_events[VAR_3] == 0)
   continue;

  VAR_5 = FUNC_1(VAR_3);
  if (!FUNC_2(VAR_5, "UNKNOWN"))
   continue;

  VAR_4 += FUNC_0(VAR_2, "%16s events: %10d\n", VAR_5,
          VAR_1->stats.nr_events[VAR_3]);
 }

 return VAR_4;
}
