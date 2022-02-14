
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
struct filter_arg {int type; TYPE_1__ boolean; } ;
struct event_filter {int dummy; } ;
 char* FUNC_0 (struct event_filter*,struct filter_arg*) ;
 char* FUNC_1 (struct event_filter*,struct filter_arg*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (struct event_filter*,struct filter_arg*) ;
 char* FUNC_4 (struct event_filter*,struct filter_arg*) ;
 char* FUNC_5 (struct event_filter*,struct filter_arg*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (struct event_filter*,struct filter_arg*) ;

__attribute__((used)) static char *FUNC_8(struct event_filter *VAR_0, struct filter_arg *VAR_1)
{
 char *VAR_2;

 switch (VAR_1->type) {
 case 134:
  VAR_2 = FUNC_2(6);
  if (VAR_1->boolean.value)
   FUNC_6(VAR_2, "TRUE");
  else
   FUNC_6(VAR_2, "FALSE");
  return VAR_2;

 case 130:
  return FUNC_4(VAR_0, VAR_1);

 case 131:
  return FUNC_3(VAR_0, VAR_1);

 case 129:
  return FUNC_5(VAR_0, VAR_1);

 case 128:
  return FUNC_7(VAR_0, VAR_1);

 case 132:
  return FUNC_1(VAR_0, VAR_1);

 case 133:
  return FUNC_0(VAR_0, VAR_1);

 default:

  return ((void*)0);
 }

}
