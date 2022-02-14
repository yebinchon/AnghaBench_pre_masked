
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {void* raw_data; } ;
struct perf_evsel {int dummy; } ;
struct format_field {int offset; int flags; } ;


 int VAR_0 ;
 struct format_field* FUNC_0 (struct perf_evsel*,char const*) ;

void *FUNC_1(struct perf_evsel *VAR_1, struct perf_sample *VAR_2,
    const char *VAR_3)
{
 struct format_field *VAR_4 = FUNC_0(VAR_1, VAR_3);
 int VAR_5;

 if (!VAR_4)
  return ((void*)0);

 VAR_5 = VAR_4->offset;

 if (VAR_4->flags & VAR_0) {
  VAR_5 = *(int *)(VAR_2->raw_data + VAR_4->offset);
  VAR_5 &= 0xffff;
 }

 return VAR_2->raw_data + VAR_5;
}
