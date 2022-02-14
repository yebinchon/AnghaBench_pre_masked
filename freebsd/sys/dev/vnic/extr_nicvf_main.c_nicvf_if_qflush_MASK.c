
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_queue {int br; } ;
struct queue_set {size_t sq_cnt; struct snd_queue* sq; } ;
struct nicvf {struct queue_set* qs; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct snd_queue*) ;
 int FUNC_1 (struct snd_queue*) ;
 struct mbuf* FUNC_2 (int ) ;
 struct nicvf* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_0)
{
 struct nicvf *VAR_1;
 struct queue_set *VAR_2;
 struct snd_queue *VAR_3;
 struct mbuf *VAR_4;
 size_t VAR_5;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = VAR_1->qs;

 for (VAR_5 = 0; VAR_5 < VAR_2->sq_cnt; VAR_5++) {
  VAR_3 = &VAR_2->sq[VAR_5];
  FUNC_0(VAR_3);
  while ((VAR_4 = FUNC_2(VAR_3->br)) != ((void*)0))
   FUNC_5(VAR_4);
  FUNC_1(VAR_3);
 }
 FUNC_4(VAR_0);
}
