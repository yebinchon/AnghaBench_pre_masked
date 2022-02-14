
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef struct ng_pptpgre_roq {int item; } const ng_pptpgre_roq ;
struct mbuf {int dummy; } ;
typedef int roqh ;
typedef TYPE_1__* hpriv_p ;
struct TYPE_3__ {int hook; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int,int ,int ,struct mbuf*) ;
 int FUNC_2 (int *) ;
 struct ng_pptpgre_roq const* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ng_pptpgre_roq const*,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(const hpriv_p VAR_3, roqh *VAR_4, const struct ng_pptpgre_roq *VAR_5)
{
 struct ng_pptpgre_roq *VAR_6;
 struct mbuf *VAR_7;
 int VAR_8 = 0;

 FUNC_6(&VAR_3->mtx, VAR_0);
 while (!FUNC_2(VAR_4)) {
  VAR_6 = FUNC_3(VAR_4);
  FUNC_4(VAR_4, VAR_2);
  FUNC_0(VAR_6->item, VAR_7);
  FUNC_1(VAR_8, VAR_6->item, VAR_3->hook, VAR_7);
  if (VAR_6 != VAR_5)
   FUNC_5(VAR_6, VAR_1);
 }
 return (VAR_8);
}
