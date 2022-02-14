
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_snd_tag {struct ifnet* ifp; } ;
struct ifnet {int (* if_snd_tag_free ) (struct m_snd_tag*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_0 ;
 int FUNC_2 (struct m_snd_tag*) ;

void
FUNC_3(struct m_snd_tag *VAR_1)
{
 struct ifnet *VAR_2;

 VAR_2 = VAR_1->ifp;
 VAR_2->if_snd_tag_free(VAR_1);
 FUNC_1(VAR_2);
 FUNC_0(VAR_0, -1);
}
