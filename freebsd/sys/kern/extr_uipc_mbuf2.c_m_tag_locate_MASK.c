
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int tags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct m_tag {scalar_t__ m_tag_cookie; int m_tag_id; } ;


 int FUNC_0 (struct mbuf*,char*) ;
 struct m_tag* FUNC_1 (int *) ;
 struct m_tag* FUNC_2 (struct m_tag*,int ) ;
 int VAR_0 ;

struct m_tag *
FUNC_3(struct mbuf *VAR_1, uint32_t VAR_2, int VAR_3, struct m_tag *VAR_4)
{
 struct m_tag *VAR_5;

 FUNC_0(VAR_1, ("m_tag_locate: null mbuf"));
 if (VAR_4 == ((void*)0))
  VAR_5 = FUNC_1(&VAR_1->m_pkthdr.tags);
 else
  VAR_5 = FUNC_2(VAR_4, VAR_0);
 while (VAR_5 != ((void*)0)) {
  if (VAR_5->m_tag_cookie == VAR_2 && VAR_5->m_tag_id == VAR_3)
   return VAR_5;
  VAR_5 = FUNC_2(VAR_5, VAR_0);
 }
 return ((void*)0);
}
