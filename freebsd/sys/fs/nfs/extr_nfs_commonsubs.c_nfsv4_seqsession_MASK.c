
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct nfsslot {size_t nfssl_seq; int nfssl_inprog; struct mbuf* nfssl_reply; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbuf*) ;

int
FUNC_1(uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6,
    struct nfsslot *VAR_7, struct mbuf **VAR_8, uint16_t VAR_9)
{
 int VAR_10;

 VAR_10 = 0;
 if (VAR_8 != ((void*)0))
  *VAR_8 = ((void*)0);
 if (VAR_5 > VAR_9)
  return (VAR_0);
 if (VAR_4 == VAR_7[VAR_5].nfssl_seq) {

  if (VAR_7[VAR_5].nfssl_inprog != 0)
   VAR_10 = VAR_1;
  else if (VAR_7[VAR_5].nfssl_reply != ((void*)0)) {
   if (VAR_8 != ((void*)0)) {
    *VAR_8 = VAR_7[VAR_5].nfssl_reply;
    VAR_7[VAR_5].nfssl_reply = ((void*)0);
   }
   VAR_7[VAR_5].nfssl_inprog = 1;
   VAR_10 = VAR_2;
  } else

   VAR_7[VAR_5].nfssl_inprog = 1;
 } else if ((VAR_7[VAR_5].nfssl_seq + 1) == VAR_4) {
  if (VAR_7[VAR_5].nfssl_reply != ((void*)0))
   FUNC_0(VAR_7[VAR_5].nfssl_reply);
  VAR_7[VAR_5].nfssl_reply = ((void*)0);
  VAR_7[VAR_5].nfssl_inprog = 1;
  VAR_7[VAR_5].nfssl_seq++;
 } else
  VAR_10 = VAR_3;
 return (VAR_10);
}
