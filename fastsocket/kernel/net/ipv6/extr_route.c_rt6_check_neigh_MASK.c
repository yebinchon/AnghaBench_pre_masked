
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_flags; struct neighbour* rt6i_nexthop; } ;
struct neighbour {int nud_state; int lock; } ;
typedef enum rt6_nud_state { ____Placeholder_rt6_nud_state } rt6_nud_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline enum rt6_nud_state FUNC_2(struct rt6_info *VAR_7)
{
 struct neighbour *VAR_8 = VAR_7->rt6i_nexthop;
 enum rt6_nud_state VAR_9 = VAR_2;

 if (VAR_7->rt6i_flags & VAR_6 ||
     !(VAR_7->rt6i_flags & VAR_5))
  VAR_9 = VAR_4;
 else if (VAR_8) {
  FUNC_0(&VAR_8->lock);
  if (VAR_8->nud_state & VAR_1)
   VAR_9 = VAR_4;






  FUNC_1(&VAR_8->lock);
 }
 return VAR_9;
}
