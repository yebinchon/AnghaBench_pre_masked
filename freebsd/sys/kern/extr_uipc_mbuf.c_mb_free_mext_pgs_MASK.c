
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
struct mbuf_ext_pgs {int npgs; int * pa; } ;
struct TYPE_2__ {struct mbuf_ext_pgs* ext_pgs; } ;
struct mbuf {TYPE_1__ m_ext; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct mbuf *VAR_0)
{
 struct mbuf_ext_pgs *VAR_1;
 vm_page_t VAR_2;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->m_ext.ext_pgs;
 for (int VAR_3 = 0; VAR_3 < VAR_1->npgs; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1->pa[VAR_3]);
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
 }
}
