
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_field {int dummy; } ;
struct event_format {int dummy; } ;


 struct format_field* FUNC_0 (struct event_format*,char const*) ;
 struct format_field* FUNC_1 (struct event_format*,char const*) ;

struct format_field *
FUNC_2(struct event_format *VAR_0, const char *VAR_1)
{
 struct format_field *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 return FUNC_1(VAR_0, VAR_1);
}
