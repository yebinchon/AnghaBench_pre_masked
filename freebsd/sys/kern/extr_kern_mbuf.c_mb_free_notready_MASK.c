
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ext_type; TYPE_1__* ext_pgs; } ;
struct mbuf {int m_flags; TYPE_2__ m_ext; } ;
struct TYPE_3__ {scalar_t__ nrdy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 struct mbuf* FUNC_1 (struct mbuf*) ;

void
FUNC_2(struct mbuf *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3 && VAR_2 != ((void*)0); VAR_4++) {
  if ((VAR_2->m_flags & VAR_1) != 0 &&
      VAR_2->m_ext.ext_type == VAR_0) {
   VAR_2->m_ext.ext_pgs->nrdy--;
   if (VAR_2->m_ext.ext_pgs->nrdy != 0)
    continue;
  }
  VAR_2 = FUNC_1(VAR_2);
 }
 FUNC_0(VAR_4 == VAR_3, ("Removed only %d items from %p", VAR_4, VAR_2));
}
