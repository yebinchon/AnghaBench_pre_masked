
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef int item_p ;
typedef scalar_t__ hook_p ;
typedef TYPE_2__* bt3c_softc_p ;
struct TYPE_4__ {scalar_t__ hook; int node; int outq; int stat; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct mbuf*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,struct mbuf*) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_2 ;
 int FUNC_11 (int ,int *,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_12(hook_p VAR_3, item_p VAR_4)
{
 bt3c_softc_p VAR_5 = (bt3c_softc_p)FUNC_8(FUNC_7(VAR_3));
 struct mbuf *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 if (VAR_5 == ((void*)0)) {
  VAR_7 = VAR_0;
  goto out;
 }

 if (VAR_3 != VAR_5->hook) {
  VAR_7 = VAR_1;
  goto out;
 }

 FUNC_2(VAR_4, VAR_6);

 FUNC_0(&VAR_5->outq);
 if (FUNC_10(&VAR_5->outq)) {
  FUNC_3(VAR_5->dev,
"Outgoing queue is full. Dropping mbuf, len=%d\n", VAR_6->m_pkthdr.len);

  FUNC_4(VAR_5->stat);

  FUNC_6(VAR_6);
 } else
  FUNC_9(&VAR_5->outq, VAR_6);
 FUNC_1(&VAR_5->outq);

 VAR_7 = FUNC_11(VAR_5->node, ((void*)0), VAR_2, ((void*)0), 0 );
out:
        FUNC_5(VAR_4);

 return (VAR_7);
}
