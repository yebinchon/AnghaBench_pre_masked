
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_snd_tag {int refcount; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;

void
FUNC_3(struct m_snd_tag *VAR_1, struct ifnet *VAR_2)
{

 FUNC_1(VAR_2);
 VAR_1->ifp = VAR_2;
 FUNC_2(&VAR_1->refcount, 1);
 FUNC_0(VAR_0, 1);
}
