
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent_record {int dummy; } ;
struct TYPE_2__ {int value; } ;
struct filter_arg {int type; TYPE_1__ boolean; } ;
struct event_format {int dummy; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct event_format*,struct filter_arg*,struct pevent_record*) ;
 int FUNC_2 (struct event_format*,struct filter_arg*,struct pevent_record*) ;
 int FUNC_3 (struct event_format*,struct filter_arg*,struct pevent_record*) ;
 int FUNC_4 (struct event_format*,struct filter_arg*,struct pevent_record*) ;

__attribute__((used)) static int FUNC_5(struct event_format *VAR_0,
         struct filter_arg *VAR_1, struct pevent_record *VAR_2)
{
 switch (VAR_1->type) {
 case 134:

  return VAR_1->boolean.value;

 case 130:
  return FUNC_3(VAR_0, VAR_1, VAR_2);

 case 131:
  return FUNC_2(VAR_0, VAR_1, VAR_2);

 case 129:
  return FUNC_4(VAR_0, VAR_1, VAR_2);

 case 133:
 case 128:
 case 132:




  return !!FUNC_1(VAR_0, VAR_1, VAR_2);

 default:
  FUNC_0("oops!");

  return 0;
 }
}
