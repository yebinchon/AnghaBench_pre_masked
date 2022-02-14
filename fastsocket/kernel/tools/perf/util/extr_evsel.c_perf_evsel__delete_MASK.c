
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {struct perf_evsel* name; scalar_t__ tp_format; struct perf_evsel* group_name; int cgrp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct perf_evsel*) ;
 int FUNC_2 (struct perf_evsel*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct perf_evsel *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->cgrp);
 FUNC_1(VAR_0->group_name);
 if (VAR_0->tp_format)
  FUNC_3(VAR_0->tp_format);
 FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
