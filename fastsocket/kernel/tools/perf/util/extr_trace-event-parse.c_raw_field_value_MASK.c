
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_field {int dummy; } ;
struct event_format {int dummy; } ;


 struct format_field* FUNC_0 (struct event_format*,char const*) ;
 int FUNC_1 (struct format_field*,void*,unsigned long long*) ;

unsigned long long
FUNC_2(struct event_format *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct format_field *VAR_3;
 unsigned long long VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return 0ULL;

 FUNC_1(VAR_3, VAR_2, &VAR_4);

 return VAR_4;
}
