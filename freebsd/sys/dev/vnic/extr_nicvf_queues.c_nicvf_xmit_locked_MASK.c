
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_queue {int br; struct nicvf* nic; } ;
struct nicvf {struct ifnet* ifp; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (struct snd_queue*) ;
 int FUNC_2 (struct ifnet*,int ) ;
 struct mbuf* FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct ifnet*,int ,struct mbuf*) ;
 int FUNC_5 (struct snd_queue*,struct mbuf**) ;

int
FUNC_6(struct snd_queue *VAR_0)
{
 struct nicvf *VAR_1;
 struct ifnet *VAR_2;
 struct mbuf *VAR_3;
 int VAR_4;

 FUNC_1(VAR_0);

 VAR_1 = VAR_0->nic;
 VAR_2 = VAR_1->ifp;
 VAR_4 = 0;

 while ((VAR_3 = FUNC_3(VAR_2, VAR_0->br)) != ((void*)0)) {

  FUNC_0(VAR_2, VAR_3);

  VAR_4 = FUNC_5(VAR_0, &VAR_3);
  if (VAR_4 != 0) {
   if (VAR_3 == ((void*)0))
    FUNC_2(VAR_2, VAR_0->br);
   else
    FUNC_4(VAR_2, VAR_0->br, VAR_3);

   break;
  }
  FUNC_2(VAR_2, VAR_0->br);
 }
 return (VAR_4);
}
