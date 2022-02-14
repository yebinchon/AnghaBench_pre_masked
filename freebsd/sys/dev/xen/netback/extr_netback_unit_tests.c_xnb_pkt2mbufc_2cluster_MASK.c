
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct mbuf {struct mbuf* m_next; } ;
struct TYPE_2__ {int ifp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mbuf**) ;
 int FUNC_3 (struct xnb_pkt*,size_t const,int ) ;
 struct mbuf* FUNC_4 (struct xnb_pkt*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(char *VAR_2, size_t VAR_3)
{
 const size_t VAR_4 = 2 * VAR_0 + 1;
 size_t VAR_5 = 0;
 struct xnb_pkt VAR_6;
 struct mbuf *VAR_7;
 struct mbuf *VAR_8;

 FUNC_3(&VAR_6, VAR_4, 0);

 VAR_7 = FUNC_4(&VAR_6, VAR_1.ifp);

 for (VAR_8 = VAR_7; VAR_8 != ((void*)0); VAR_8 = VAR_8->m_next) {
  VAR_5 += FUNC_0(VAR_8);
 }
 FUNC_1(VAR_5 >= VAR_4);
 FUNC_2(&VAR_7);
}
