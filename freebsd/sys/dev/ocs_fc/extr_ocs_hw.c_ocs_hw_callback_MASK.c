
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* bounce; void* rnode; void* unsolicited; void* port; void* domain; } ;
struct TYPE_6__ {void* bounce; void* rnode; void* unsolicited; void* port; void* domain; } ;
struct TYPE_8__ {int os; TYPE_2__ args; TYPE_1__ callback; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_callback_e ;




 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,TYPE_3__*,int,void*) ;
 int FUNC_1 (int ,char*,int) ;

ocs_hw_rtn_e
FUNC_2(ocs_hw_t *VAR_3, ocs_hw_callback_e VAR_4, void *VAR_5, void *VAR_6)
{

 if (!VAR_3 || !VAR_5 || (VAR_4 >= VAR_0)) {
  FUNC_0(((void*)0), "bad parameter hw=%p which=%#x func=%p\n",
       VAR_3, VAR_4, VAR_5);
  return VAR_1;
 }

 switch (VAR_4) {
 case 131:
  VAR_3->callback.domain = VAR_5;
  VAR_3->args.domain = VAR_6;
  break;
 case 130:
  VAR_3->callback.port = VAR_5;
  VAR_3->args.port = VAR_6;
  break;
 case 128:
  VAR_3->callback.unsolicited = VAR_5;
  VAR_3->args.unsolicited = VAR_6;
  break;
 case 129:
  VAR_3->callback.rnode = VAR_5;
  VAR_3->args.rnode = VAR_6;
  break;
 case 132:
  VAR_3->callback.bounce = VAR_5;
  VAR_3->args.bounce = VAR_6;
  break;
 default:
  FUNC_1(VAR_3->os, "unknown callback %#x\n", VAR_4);
  return VAR_1;
 }

 return VAR_2;
}
