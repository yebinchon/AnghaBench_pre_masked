
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_evsel {TYPE_1__* cgrp; } ;
struct TYPE_4__ {int * map; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (int ,char const*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (struct perf_evsel*) ;
 scalar_t__ FUNC_3 (struct perf_evsel*,int ,int ) ;
 int FUNC_4 (struct perf_evsel*) ;
 int FUNC_5 (char*,char*,int,int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(int VAR_7, struct perf_evsel *VAR_8, double VAR_9)
{
 double VAR_10 = VAR_9 / 1e6;
 char VAR_11[16] = { '\0', };
 const char *VAR_12 = VAR_2 ? "%s%.6f%s%s" : "%s%18.6f%s%-25s";

 if (VAR_4)
  FUNC_5(VAR_11, "CPU%*d%s",
   VAR_2 ? 0 : -4,
   FUNC_2(VAR_8)->map[VAR_7], VAR_3);

 FUNC_1(VAR_5, VAR_12, VAR_11, VAR_10, VAR_3, FUNC_4(VAR_8));

 if (VAR_8->cgrp)
  FUNC_1(VAR_5, "%s%d", VAR_3, VAR_8->cgrp->name);

 if (VAR_2)
  return;

 if (FUNC_3(VAR_8, VAR_0, VAR_1))
  FUNC_1(VAR_5, " # %8.3f CPUs utilized          ",
   VAR_9 / FUNC_0(&VAR_6));
 else
  FUNC_1(VAR_5, "                                   ");
}
