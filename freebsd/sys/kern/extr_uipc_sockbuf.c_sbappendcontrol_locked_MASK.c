
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockbuf {struct mbuf* sb_mbtail; } ;
struct mbuf {struct mbuf* m_next; } ;
struct TYPE_2__ {struct mbuf* m_next; } ;


 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct sockbuf*,struct mbuf*) ;
 int FUNC_3 (struct mbuf*) ;
 TYPE_1__* FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct sockbuf*,struct mbuf*) ;

void
FUNC_6(struct sockbuf *VAR_0, struct mbuf *VAR_1,
    struct mbuf *VAR_2)
{
 struct mbuf *VAR_3, *VAR_4;

 FUNC_3(VAR_1);
 FUNC_4(VAR_2)->m_next = VAR_1;

 FUNC_1(VAR_0);

 for (VAR_3 = VAR_2; VAR_3->m_next; VAR_3 = VAR_3->m_next)
  FUNC_5(VAR_0, VAR_3);
 FUNC_5(VAR_0, VAR_3);
 VAR_4 = VAR_3;
 FUNC_2(VAR_0, VAR_2);

 VAR_0->sb_mbtail = VAR_4;
 FUNC_0(VAR_0);

 FUNC_1(VAR_0);
}
