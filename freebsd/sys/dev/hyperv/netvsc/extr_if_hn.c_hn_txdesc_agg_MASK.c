
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_txdesc {int flags; int agg_list; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct hn_txdesc*,int ) ;
 int VAR_1 ;

__attribute__((used)) static __inline void
FUNC_3(struct hn_txdesc *VAR_2, struct hn_txdesc *VAR_3)
{

 FUNC_0((VAR_2->flags & VAR_0) == 0,
     ("recursive aggregation on aggregating txdesc"));

 FUNC_0((VAR_3->flags & VAR_0) == 0,
     ("already aggregated"));
 FUNC_0(FUNC_1(&VAR_3->agg_list),
     ("recursive aggregation on to-be-aggregated txdesc"));

 VAR_3->flags |= VAR_0;
 FUNC_2(&VAR_2->agg_list, VAR_3, VAR_1);
}
