
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct netmap_kring {scalar_t__ nkr_num_slots; scalar_t__ rhead; scalar_t__ nr_hwcur; scalar_t__ nr_hwtail; struct netmap_adapter* na; } ;
struct netmap_adapter {int ifp; } ;
struct mbq {int dummy; } ;


 int FUNC_0 (struct mbq*) ;
 int FUNC_1 (struct mbq*) ;
 int FUNC_2 (struct netmap_kring*,struct mbq*,int) ;
 int FUNC_3 (int ,struct mbq*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct netmap_kring *VAR_0, int VAR_1)
{
 struct netmap_adapter *VAR_2 = VAR_0->na;
 u_int const VAR_3 = VAR_0->nkr_num_slots - 1;
 u_int const VAR_4 = VAR_0->rhead;
 struct mbq VAR_5;




 FUNC_0(&VAR_5);
 FUNC_2(VAR_0, &VAR_5, 1 );
 FUNC_4("have %d pkts in queue", FUNC_1(&VAR_5));
 VAR_0->nr_hwcur = VAR_4;
 VAR_0->nr_hwtail = VAR_4 + VAR_3;
 if (VAR_0->nr_hwtail > VAR_3)
  VAR_0->nr_hwtail -= VAR_3 + 1;

 FUNC_3(VAR_2->ifp, &VAR_5);
 return 0;
}
