
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_queue {int snd_task; int snd_taskq; struct nicvf* nic; } ;
struct nicvf {int link_up; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_queue*) ;
 int FUNC_1 (struct snd_queue*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct snd_queue*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2, int VAR_3)
{
 struct snd_queue *VAR_4 = (struct snd_queue *)VAR_2;
 struct nicvf *VAR_5;
 struct ifnet *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->nic;
 VAR_6 = VAR_5->ifp;





 if (((FUNC_2(VAR_6) & (VAR_1 | VAR_0)) !=
     VAR_1) || !VAR_5->link_up)
  return;

 FUNC_0(VAR_4);
 VAR_7 = FUNC_3(VAR_4);
 FUNC_1(VAR_4);

 if (VAR_7 != 0)
  FUNC_4(VAR_4->snd_taskq, &VAR_4->snd_task);
}
