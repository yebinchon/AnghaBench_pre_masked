
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_field {int flags; int offset; } ;
struct event_format {int dummy; } ;


 int VAR_0 ;
 struct format_field* FUNC_0 (struct event_format*,char const*) ;

void *FUNC_1(struct event_format *VAR_1, const char *VAR_2, void *VAR_3)
{
 struct format_field *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 if (VAR_4->flags & VAR_0) {
  int VAR_5;

  VAR_5 = *(int *)(VAR_3 + VAR_4->offset);
  VAR_5 &= 0xffff;

  return VAR_3 + VAR_5;
 }

 return VAR_3 + VAR_4->offset;
}
