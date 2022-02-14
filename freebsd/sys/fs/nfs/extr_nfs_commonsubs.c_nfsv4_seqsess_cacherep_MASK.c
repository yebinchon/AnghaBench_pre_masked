
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct nfsslot {scalar_t__ nfssl_inprog; struct mbuf* nfssl_reply; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;

void
FUNC_1(uint32_t VAR_1, struct nfsslot *VAR_2, int VAR_3,
   struct mbuf **VAR_4)
{

 if (VAR_3 == VAR_0) {
  *VAR_4 = VAR_2[VAR_1].nfssl_reply;
  VAR_2[VAR_1].nfssl_reply = ((void*)0);
 } else {
  if (VAR_2[VAR_1].nfssl_reply != ((void*)0))
   FUNC_0(VAR_2[VAR_1].nfssl_reply);
  VAR_2[VAR_1].nfssl_reply = *VAR_4;
 }
 VAR_2[VAR_1].nfssl_inprog = 0;
}
