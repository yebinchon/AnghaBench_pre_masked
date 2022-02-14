
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct perf_sample {void* raw_data; } ;
struct perf_evsel {int needs_swap; } ;
struct format_field {int offset; int size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct format_field* FUNC_3 (struct perf_evsel*,char const*) ;

u64 FUNC_4(struct perf_evsel *VAR_0, struct perf_sample *VAR_1,
         const char *VAR_2)
{
 struct format_field *VAR_3 = FUNC_3(VAR_0, VAR_2);
 void *VAR_4;
 u64 VAR_5;

 if (!VAR_3)
  return 0;

 VAR_4 = VAR_1->raw_data + VAR_3->offset;

 switch (VAR_3->size) {
 case 1:
  return *(u8 *)VAR_4;
 case 2:
  VAR_5 = *(u16 *)VAR_4;
  break;
 case 4:
  VAR_5 = *(u32 *)VAR_4;
  break;
 case 8:
  VAR_5 = *(u64 *)VAR_4;
  break;
 default:
  return 0;
 }

 if (!VAR_0->needs_swap)
  return VAR_5;

 switch (VAR_3->size) {
 case 2:
  return FUNC_0(VAR_5);
 case 4:
  return FUNC_1(VAR_5);
 case 8:
  return FUNC_2(VAR_5);
 default:
  return 0;
 }

 return 0;
}
