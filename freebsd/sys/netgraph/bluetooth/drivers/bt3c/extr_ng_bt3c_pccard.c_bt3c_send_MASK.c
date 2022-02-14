
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mbuf {scalar_t__ m_len; int * m_data; } ;
typedef int node_p ;
typedef int hook_p ;
typedef TYPE_1__* bt3c_softc_p ;
struct TYPE_5__ {int flags; int stat; int dev; int outq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 struct mbuf* FUNC_9 (struct mbuf*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(node_p VAR_2, hook_p VAR_3, void *VAR_4, int VAR_5)
{
 bt3c_softc_p VAR_6 = (bt3c_softc_p) FUNC_5(VAR_2);
 struct mbuf *VAR_7 = ((void*)0);
 int VAR_8, VAR_9, VAR_10;

 if (VAR_6 == ((void*)0))
  return;

 if (VAR_5)
  VAR_6->flags &= ~VAR_1;

 if (VAR_6->flags & VAR_1)
  return;

 FUNC_6(VAR_6, 0x7080);

 for (VAR_9 = 0; VAR_9 < VAR_0; ) {
  FUNC_0(&VAR_6->outq, VAR_7);
  if (VAR_7 == ((void*)0))
   break;

  while (VAR_7 != ((void*)0)) {
   VAR_10 = FUNC_10((VAR_0 - VAR_9), VAR_7->m_len);

   for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
    FUNC_8(VAR_6, VAR_7->m_data[VAR_8]);

   VAR_9 += VAR_10;
   VAR_7->m_data += VAR_10;
   VAR_7->m_len -= VAR_10;

   if (VAR_7->m_len > 0)
    break;

   VAR_7 = FUNC_9(VAR_7);
  }

  if (VAR_7 != ((void*)0)) {
   FUNC_1(&VAR_6->outq, VAR_7);
   break;
  }

  FUNC_4(VAR_6->stat);
 }

 if (VAR_9 > 0) {
  FUNC_2(VAR_6->dev, "Wrote %d bytes\n", VAR_9);
  FUNC_3(VAR_6->stat, VAR_9);

  FUNC_7(VAR_6, 0x7005, VAR_9);
  VAR_6->flags |= VAR_1;
 }
}
