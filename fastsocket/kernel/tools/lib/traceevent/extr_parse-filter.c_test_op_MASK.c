
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent_record {int dummy; } ;
struct TYPE_2__ {int type; int right; int left; } ;
struct filter_arg {TYPE_1__ op; } ;
struct event_format {int dummy; } ;





 int FUNC_0 (struct event_format*,int ,struct pevent_record*) ;

__attribute__((used)) static int FUNC_1(struct event_format *VAR_0,
     struct filter_arg *VAR_1, struct pevent_record *VAR_2)
{
 switch (VAR_1->op.type) {
 case 130:
  return FUNC_0(VAR_0, VAR_1->op.left, VAR_2) &&
   FUNC_0(VAR_0, VAR_1->op.right, VAR_2);

 case 128:
  return FUNC_0(VAR_0, VAR_1->op.left, VAR_2) ||
   FUNC_0(VAR_0, VAR_1->op.right, VAR_2);

 case 129:
  return !FUNC_0(VAR_0, VAR_1->op.right, VAR_2);

 default:

  return 0;
 }
}
