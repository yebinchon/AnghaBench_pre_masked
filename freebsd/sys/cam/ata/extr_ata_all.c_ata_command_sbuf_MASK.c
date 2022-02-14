
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ccb_ataio {int cmd; } ;


 int FUNC_0 (int *,struct sbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sbuf*,char*,int ) ;

int
FUNC_3(struct ccb_ataio *VAR_0, struct sbuf *VAR_1)
{

 FUNC_2(VAR_1, "%s. ACB: ",
     FUNC_1(&VAR_0->cmd));
 FUNC_0(&VAR_0->cmd, VAR_1);

 return(0);
}
