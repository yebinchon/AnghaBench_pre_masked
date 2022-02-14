
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_query_decoder {int consume_packet; } ;
struct TYPE_7__ {int ip; } ;
struct TYPE_6__ {int ip; } ;
struct TYPE_10__ {int ip; } ;
struct TYPE_8__ {int to; } ;
struct TYPE_9__ {TYPE_2__ exec_mode; TYPE_1__ async_vmcs; TYPE_5__ async_paging; TYPE_3__ async_branch; } ;
struct pt_event {int type; TYPE_4__ variant; } ;


 int FUNC_0 (int *,struct pt_event*,struct pt_query_decoder*) ;
 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static int FUNC_1(struct pt_event *VAR_2,
       struct pt_query_decoder *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 switch (VAR_2->type) {
 case 131:
  VAR_3->consume_packet = 1;

  return FUNC_0(&VAR_2->variant.async_branch.to, VAR_2,
           VAR_3);

 case 130:
  return FUNC_0(&VAR_2->variant.async_paging.ip, VAR_2,
           VAR_3);

 case 129:
  return FUNC_0(&VAR_2->variant.async_vmcs.ip, VAR_2,
           VAR_3);

 case 128:
  return FUNC_0(&VAR_2->variant.exec_mode.ip, VAR_2,
           VAR_3);

 default:
  break;
 }

 return -VAR_0;
}
