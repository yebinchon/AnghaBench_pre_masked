
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_query_decoder {int dummy; } ;
struct TYPE_9__ {int ip; } ;
struct TYPE_8__ {int ip; } ;
struct TYPE_7__ {int ip; } ;
struct TYPE_6__ {int ip; } ;
struct TYPE_10__ {TYPE_4__ async_vmcs; TYPE_3__ tsx; TYPE_2__ exec_mode; TYPE_1__ async_paging; } ;
struct pt_event {int status_update; int type; TYPE_5__ variant; } ;


 int FUNC_0 (int *,struct pt_event*,struct pt_query_decoder*) ;
 int FUNC_1 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_0 ;







__attribute__((used)) static int FUNC_2(struct pt_event *VAR_1,
          struct pt_query_decoder *VAR_2)
{
 int VAR_3;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;


 VAR_1->status_update = 1;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 switch (VAR_1->type) {
 case 133:
  return FUNC_0(&VAR_1->variant.async_paging.ip, VAR_1,
           VAR_2);

 case 130:
  return FUNC_0(&VAR_1->variant.exec_mode.ip, VAR_1, VAR_2);

 case 128:
  return FUNC_0(&VAR_1->variant.tsx.ip, VAR_1, VAR_2);

 case 132:
  return FUNC_0(&VAR_1->variant.async_vmcs.ip, VAR_1,
           VAR_2);

 case 131:
  return 0;

 case 129:



  VAR_1->status_update = 0;
  return 0;

 default:
  break;
 }

 return -VAR_0;
}
