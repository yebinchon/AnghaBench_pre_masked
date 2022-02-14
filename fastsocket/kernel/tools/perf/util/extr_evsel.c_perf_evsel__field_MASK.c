
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int tp_format; } ;
struct format_field {int dummy; } ;


 struct format_field* FUNC_0 (int ,char const*) ;

struct format_field *FUNC_1(struct perf_evsel *VAR_0, const char *VAR_1)
{
 return FUNC_0(VAR_0->tp_format, VAR_1);
}
