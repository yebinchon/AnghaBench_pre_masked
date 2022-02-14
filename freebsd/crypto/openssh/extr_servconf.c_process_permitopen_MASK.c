
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_3__ {int num_permitted_listens; int permitted_listens; int num_permitted_opens; int permitted_opens; } ;
typedef TYPE_1__ ServerOptions ;


 int FUNC_0 (struct ssh*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct ssh *VAR_2, ServerOptions *VAR_3)
{
 FUNC_0(VAR_2, VAR_1,
     VAR_3->permitted_opens, VAR_3->num_permitted_opens);
 FUNC_0(VAR_2, VAR_0,
     VAR_3->permitted_listens,
     VAR_3->num_permitted_listens);
}
