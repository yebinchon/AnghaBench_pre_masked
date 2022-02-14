
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cn_flags; int cn_pnbuf; } ;
struct nameidata {TYPE_1__ ni_cnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct nameidata *VAR_2)
{

 if ((VAR_2->ni_cnd.cn_flags & VAR_0) == 0)
  FUNC_0("nfsrelpath");
 FUNC_1(VAR_1, VAR_2->ni_cnd.cn_pnbuf);
 VAR_2->ni_cnd.cn_flags &= ~VAR_0;
}
