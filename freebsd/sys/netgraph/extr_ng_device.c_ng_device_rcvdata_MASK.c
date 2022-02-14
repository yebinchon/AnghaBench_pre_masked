
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_4__ {int flags; int ngd_mtx; int readq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct mbuf*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int *,struct mbuf*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_12(hook_p VAR_3, item_p VAR_4)
{
 priv_p VAR_5 = FUNC_6(FUNC_5(VAR_3));
 struct mbuf *VAR_6;

 VAR_0;

 FUNC_2(VAR_4, VAR_6);
 FUNC_3(VAR_4);

 FUNC_0(&VAR_5->readq);
 if (FUNC_8(&VAR_5->readq)) {
  FUNC_1(&VAR_5->readq);
  FUNC_4(VAR_6);
  return (VAR_1);
 }

 FUNC_7(&VAR_5->readq, VAR_6);
 FUNC_1(&VAR_5->readq);
 FUNC_9(&VAR_5->ngd_mtx);
 if (VAR_5->flags & VAR_2) {
  VAR_5->flags &= ~VAR_2;
  FUNC_11(VAR_5);
 }
 FUNC_10(&VAR_5->ngd_mtx);

 return(0);
}
