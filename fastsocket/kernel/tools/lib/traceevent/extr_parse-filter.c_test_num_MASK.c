
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent_record {int dummy; } ;
struct TYPE_2__ {int type; int right; int left; } ;
struct filter_arg {TYPE_1__ num; } ;
struct event_format {int dummy; } ;
 unsigned long long FUNC_0 (struct event_format*,int ,struct pevent_record*) ;

__attribute__((used)) static int FUNC_1(struct event_format *VAR_0,
      struct filter_arg *VAR_1, struct pevent_record *VAR_2)
{
 unsigned long long VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1->num.left, VAR_2);
 VAR_4 = FUNC_0(VAR_0, VAR_1->num.right, VAR_2);

 switch (VAR_1->num.type) {
 case 133:
  return VAR_3 == VAR_4;

 case 128:
  return VAR_3 != VAR_4;

 case 131:
  return VAR_3 > VAR_4;

 case 129:
  return VAR_3 < VAR_4;

 case 132:
  return VAR_3 >= VAR_4;

 case 130:
  return VAR_3 <= VAR_4;

 default:

  return 0;
 }
}
