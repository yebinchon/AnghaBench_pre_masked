
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int F; int ttt; int cmd; } ;
typedef TYPE_2__ text_req_t ;
struct TYPE_7__ {int bhs; } ;
struct TYPE_9__ {TYPE_1__ ipdu; } ;
typedef TYPE_3__ pdu_t ;
typedef int isess_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_4(isess_t *VAR_2)
{
     pdu_t VAR_3;
     text_req_t *VAR_4 = (text_req_t *)&VAR_3.ipdu.bhs;

     FUNC_2(3);

     FUNC_1(&VAR_3, sizeof(pdu_t));
     VAR_4->cmd = VAR_0 ;
     VAR_4->F = 1;
     VAR_4->ttt = 0xffffffff;
     FUNC_0(&VAR_3, "SendTargets=All");
     return FUNC_3(VAR_2, &VAR_3, VAR_1);
}
