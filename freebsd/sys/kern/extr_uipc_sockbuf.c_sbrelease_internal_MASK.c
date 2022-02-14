
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* so_cred; } ;
struct sockbuf {scalar_t__ sb_mbmax; int sb_hiwat; } ;
struct TYPE_2__ {int cr_uidinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (struct sockbuf*) ;

void
FUNC_2(struct sockbuf *VAR_1, struct socket *VAR_2)
{

 FUNC_1(VAR_1);
 (void)FUNC_0(VAR_2->so_cred->cr_uidinfo, &VAR_1->sb_hiwat, 0,
     VAR_0);
 VAR_1->sb_mbmax = 0;
}
