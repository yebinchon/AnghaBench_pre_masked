
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nfssessionhash {int dummy; } ;
struct nfsdsession {int sess_slots; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct nfssessionhash*) ;
 struct nfssessionhash* FUNC_1 (int *) ;
 int FUNC_2 (struct nfssessionhash*) ;
 int FUNC_3 (struct mbuf*) ;
 struct nfsdsession* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int,struct mbuf**) ;
 int FUNC_6 (char*) ;

void
FUNC_7(uint8_t *VAR_0, uint32_t VAR_1, int VAR_2,
   struct mbuf **VAR_3)
{
 struct nfsdsession *VAR_4;
 struct nfssessionhash *VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 FUNC_0(VAR_5);
 VAR_4 = FUNC_4(VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_5);
  FUNC_6("nfsrv_cache_session: no session\n");
  FUNC_3(*VAR_3);
  return;
 }
 FUNC_5(VAR_1, VAR_4->sess_slots, VAR_2, VAR_3);
 FUNC_2(VAR_5);
}
