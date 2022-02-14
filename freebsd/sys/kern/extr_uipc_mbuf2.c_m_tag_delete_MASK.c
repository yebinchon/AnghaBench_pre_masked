
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct m_tag*) ;
 int FUNC_2 (struct mbuf*,struct m_tag*) ;

void
FUNC_3(struct mbuf *VAR_0, struct m_tag *VAR_1)
{

 FUNC_0(VAR_0 && VAR_1, ("m_tag_delete: null argument, m %p t %p", VAR_0, VAR_1));
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_1);
}
