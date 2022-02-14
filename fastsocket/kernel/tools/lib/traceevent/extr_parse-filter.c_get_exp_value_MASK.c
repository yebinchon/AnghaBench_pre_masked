
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent_record {int dummy; } ;
struct TYPE_2__ {int type; int right; int left; } ;
struct filter_arg {TYPE_1__ exp; } ;
struct event_format {int dummy; } ;
 int FUNC_0 (char*) ;
 unsigned long long FUNC_1 (struct event_format*,int ,struct pevent_record*) ;

__attribute__((used)) static unsigned long long
FUNC_2(struct event_format *VAR_0, struct filter_arg *VAR_1, struct pevent_record *VAR_2)
{
 unsigned long long VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1->exp.left, VAR_2);
 VAR_4 = FUNC_1(VAR_0, VAR_1->exp.right, VAR_2);

 switch (VAR_1->exp.type) {
 case 138:
  return VAR_3 + VAR_4;

 case 129:
  return VAR_3 - VAR_4;

 case 133:
  return VAR_3 * VAR_4;

 case 136:
  return VAR_3 / VAR_4;

 case 134:
  return VAR_3 % VAR_4;

 case 130:
  return VAR_3 >> VAR_4;

 case 135:
  return VAR_3 << VAR_4;

 case 137:
  return VAR_3 & VAR_4;

 case 131:
  return VAR_3 | VAR_4;

 case 128:
  return VAR_3 ^ VAR_4;

 case 132:
 default:
  FUNC_0("error in exp");
 }
 return 0;
}
