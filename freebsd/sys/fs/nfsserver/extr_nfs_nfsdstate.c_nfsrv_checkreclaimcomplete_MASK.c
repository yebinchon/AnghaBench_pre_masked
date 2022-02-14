
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfssessionhash {int dummy; } ;
struct nfsrv_descript {int nd_sessionid; } ;
struct nfsdsession {TYPE_1__* sess_clp; } ;
struct TYPE_2__ {int lc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfssessionhash*) ;
 int FUNC_1 () ;
 struct nfssessionhash* FUNC_2 (int ) ;
 int FUNC_3 (struct nfssessionhash*) ;
 int FUNC_4 () ;
 struct nfsdsession* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(struct nfsrv_descript *VAR_4, int VAR_5)
{
 struct nfsdsession *VAR_6;
 struct nfssessionhash *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_2(VAR_4->nd_sessionid);
 FUNC_1();
 FUNC_0(VAR_7);
 VAR_6 = FUNC_5(VAR_4->nd_sessionid);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_7);
  FUNC_4();
  return (VAR_2);
 }

 if (VAR_5 != 0)
  VAR_6->sess_clp->lc_flags |= VAR_1;

 else if ((VAR_6->sess_clp->lc_flags & VAR_0) != 0)
  VAR_8 = VAR_3;
 else {
  VAR_6->sess_clp->lc_flags |= VAR_0;
  FUNC_6(VAR_6->sess_clp);
 }
 FUNC_3(VAR_7);
 FUNC_4();
 return (VAR_8);
}
