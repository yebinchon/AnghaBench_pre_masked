
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct m_tag {int dummy; } ;


 int FUNC_0 (struct mbuf*,char*) ;
 struct m_tag* FUNC_1 (int *) ;
 struct m_tag* FUNC_2 (struct m_tag*,int ) ;
 int FUNC_3 (struct mbuf*,struct m_tag*) ;
 int VAR_0 ;

void
FUNC_4(struct mbuf *VAR_1, struct m_tag *VAR_2)
{
 struct m_tag *VAR_3, *VAR_4;

 FUNC_0(VAR_1, ("m_tag_delete_chain: null mbuf"));
 if (VAR_2 != ((void*)0))
  VAR_3 = VAR_2;
 else
  VAR_3 = FUNC_1(&VAR_1->m_pkthdr.tags);
 if (VAR_3 == ((void*)0))
  return;
 while ((VAR_4 = FUNC_2(VAR_3, VAR_0)) != ((void*)0))
  FUNC_3(VAR_1, VAR_4);
 FUNC_3(VAR_1, VAR_3);
}
