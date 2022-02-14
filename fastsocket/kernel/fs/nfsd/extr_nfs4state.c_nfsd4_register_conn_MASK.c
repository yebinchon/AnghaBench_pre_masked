
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int callback; } ;
struct nfsd4_conn {TYPE_1__ cn_xpt_user; int cn_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct nfsd4_conn *VAR_1)
{
 VAR_1->cn_xpt_user.callback = VAR_0;
 return FUNC_0(VAR_1->cn_xprt, &VAR_1->cn_xpt_user);
}
