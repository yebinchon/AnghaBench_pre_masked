
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pevent_record {int dummy; } ;
struct TYPE_4__ {unsigned long long val; int type; } ;
struct TYPE_3__ {int field; } ;
struct filter_arg {int type; TYPE_2__ value; TYPE_1__ field; } ;
struct event_format {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long long FUNC_1 (struct event_format*,struct filter_arg*,struct pevent_record*) ;
 unsigned long long FUNC_2 (struct event_format*,int ,struct pevent_record*) ;

__attribute__((used)) static unsigned long long
FUNC_3(struct event_format *VAR_1, struct filter_arg *VAR_2, struct pevent_record *VAR_3)
{
 switch (VAR_2->type) {
 case 129:
  return FUNC_2(VAR_1, VAR_2->field.field, VAR_3);

 case 128:
  if (VAR_2->value.type != VAR_0)
   FUNC_0("must have number field!");
  return VAR_2->value.val;

 case 130:
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 default:
  FUNC_0("oops in filter");
 }
 return 0;
}
