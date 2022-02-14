
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_pmu__format {int value; int bits; } ;
struct perf_event_attr {int config2; int config1; int config; } ;
struct TYPE_2__ {int num; } ;
struct parse_events__term {scalar_t__ type_val; TYPE_1__ val; int config; } ;
struct list_head {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ FUNC_0 (struct parse_events__term*) ;
 struct perf_pmu__format* FUNC_1 (struct list_head*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct list_head *VAR_2,
      struct perf_event_attr *VAR_3,
      struct parse_events__term *VAR_4)
{
 struct perf_pmu__format *VAR_5;
 __u64 *VAR_6;






 if (FUNC_0(VAR_4))
  return 0;

 if (VAR_4->type_val != VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2, VAR_4->config);
 if (!VAR_5)
  return -VAR_0;

 switch (VAR_5->value) {
 case 130:
  VAR_6 = &VAR_3->config;
  break;
 case 129:
  VAR_6 = &VAR_3->config1;
  break;
 case 128:
  VAR_6 = &VAR_3->config2;
  break;
 default:
  return -VAR_0;
 }






 *VAR_6 |= FUNC_2(VAR_5->bits, VAR_4->val.num);
 return 0;
}
