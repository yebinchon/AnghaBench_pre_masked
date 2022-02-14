
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct nfssessionhash {int dummy; } ;
struct TYPE_4__ {int * nfsess_xprt; } ;
struct nfsdsession {scalar_t__ sess_refcnt; TYPE_2__ sess_cbsess; TYPE_1__* sess_slots; int * sess_sessionid; } ;
struct TYPE_3__ {int * nfssl_reply; } ;


 int FUNC_0 (struct nfsdsession*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nfssessionhash*) ;
 int FUNC_2 () ;
 struct nfssessionhash* FUNC_3 (int *) ;
 int FUNC_4 (struct nfssessionhash*) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfsdsession*,int ) ;
 int FUNC_8 (int *) ;
 struct nfsdsession* FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_10(struct nfsdsession *VAR_6, uint8_t *VAR_7)
{
 struct nfssessionhash *VAR_8;
 int VAR_9;

 FUNC_2();
 if (VAR_6 == ((void*)0)) {
  VAR_8 = FUNC_3(VAR_7);
  FUNC_1(VAR_8);
  VAR_6 = FUNC_9(VAR_7);
 } else {
  VAR_8 = FUNC_3(VAR_6->sess_sessionid);
  FUNC_1(VAR_8);
 }
 if (VAR_6 != ((void*)0)) {
  VAR_6->sess_refcnt--;
  if (VAR_6->sess_refcnt > 0) {
   FUNC_4(VAR_8);
   FUNC_5();
   return (VAR_1);
  }
  FUNC_0(VAR_6, VAR_4);
  FUNC_0(VAR_6, VAR_5);
 }
 FUNC_4(VAR_8);
 FUNC_5();
 if (VAR_6 == ((void*)0))
  return (VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  if (VAR_6->sess_slots[VAR_9].nfssl_reply != ((void*)0))
   FUNC_8(VAR_6->sess_slots[VAR_9].nfssl_reply);
 if (VAR_6->sess_cbsess.nfsess_xprt != ((void*)0))
  FUNC_6(VAR_6->sess_cbsess.nfsess_xprt);
 FUNC_7(VAR_6, VAR_0);
 return (0);
}
