
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pt_query_decoder {int consume_packet; int ip; } ;
struct TYPE_11__ {int ip; } ;
struct TYPE_10__ {int ip; } ;
struct TYPE_9__ {int ip; } ;
struct TYPE_8__ {int ip; int aborted; } ;
struct TYPE_7__ {int ip; } ;
struct TYPE_12__ {TYPE_5__ ptwrite; TYPE_4__ mwait; TYPE_3__ exstop; TYPE_2__ tsx; TYPE_1__ overflow; } ;
struct pt_event {int type; TYPE_6__ variant; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct pt_event*,struct pt_query_decoder*) ;
 int VAR_0 ;






__attribute__((used)) static int FUNC_2(struct pt_event *VAR_1,
       struct pt_query_decoder *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 switch (VAR_1->type) {
 case 130:
  VAR_2->consume_packet = 1;


  return FUNC_0(&VAR_1->variant.overflow.ip,
     &VAR_2->ip);

 case 128:
  if (!(VAR_1->variant.tsx.aborted))
   VAR_2->consume_packet = 1;

  return FUNC_1(&VAR_1->variant.tsx.ip, VAR_1, VAR_2);

 case 132:
  VAR_2->consume_packet = 1;

  return FUNC_1(&VAR_1->variant.exstop.ip, VAR_1, VAR_2);

 case 131:
  VAR_2->consume_packet = 1;

  return FUNC_1(&VAR_1->variant.mwait.ip, VAR_1, VAR_2);

 case 129:
  VAR_2->consume_packet = 1;

  return FUNC_1(&VAR_1->variant.ptwrite.ip, VAR_1, VAR_2);

 default:
  break;
 }

 return -VAR_0;
}
