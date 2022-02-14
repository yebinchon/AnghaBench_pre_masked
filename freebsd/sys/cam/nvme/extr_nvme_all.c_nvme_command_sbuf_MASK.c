
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ func_code; } ;
struct ccb_nvmeio {int cmd; TYPE_1__ ccb_h; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct sbuf*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct sbuf*,char*,int ) ;

int
FUNC_3(struct ccb_nvmeio *VAR_1, struct sbuf *VAR_2)
{

 FUNC_2(VAR_2, "%s. NCB: ", FUNC_1(&VAR_1->cmd,
     VAR_1->ccb_h.func_code == VAR_0));
 FUNC_0(&VAR_1->cmd, VAR_2);
 return(0);
}
