
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int sscop; } ;
struct ngm_queue_state {int dummy; } ;
struct TYPE_2__ {int arglen; int cmd; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef int node_p ;


 int VAR_0 ;


 struct priv* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_1, struct ng_mesg *VAR_2)
{
 struct priv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->header.arglen != sizeof(struct ngm_queue_state))
  return (VAR_0);

 switch (VAR_2->header.cmd) {

   case 129:
  FUNC_1(VAR_3->sscop, 1);
  break;

   case 128:
  FUNC_1(VAR_3->sscop, 1);
  break;

   default:
  return (VAR_0);
 }
 return (0);
}
