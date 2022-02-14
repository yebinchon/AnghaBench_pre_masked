
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct pt_query_decoder {int dummy; } ;
struct TYPE_6__ {int ip; int at; } ;
struct TYPE_4__ {int from; } ;
struct TYPE_5__ {TYPE_3__ async_disabled; TYPE_1__ async_branch; } ;
struct pt_event {int type; int ip_suppressed; TYPE_2__ variant; } ;


 int FUNC_0 (int *,struct pt_event*,struct pt_query_decoder const*) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;




__attribute__((used)) static int FUNC_1(struct pt_event *VAR_3,
    const struct pt_query_decoder *VAR_4)
{
 if (!VAR_3)
  return -VAR_1;

 switch (VAR_3->type) {
 case 131: {
  uint64_t VAR_5;


  VAR_5 = VAR_3->variant.async_branch.from;

  VAR_3->type = VAR_2;
  VAR_3->variant.async_disabled.at = VAR_5;

  return FUNC_0(&VAR_3->variant.async_disabled.ip, VAR_3,
           VAR_4);
 }

 case 130:
 case 129:
 case 128:
  VAR_3->ip_suppressed = 1;

  return 0;

 default:
  break;
 }

 return -VAR_0;
}
