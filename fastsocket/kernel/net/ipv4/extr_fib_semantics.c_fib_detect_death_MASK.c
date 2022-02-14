
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int nud_state; } ;
struct fib_info {int fib_dev; TYPE_1__* fib_nh; } ;
struct TYPE_2__ {int nh_gw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct neighbour* FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct neighbour*) ;

int FUNC_2(struct fib_info *VAR_4, int VAR_5,
       struct fib_info **VAR_6, int *VAR_7, int VAR_8)
{
 struct neighbour *VAR_9;
 int VAR_10 = VAR_0;

 VAR_9 = FUNC_0(&VAR_3, &VAR_4->fib_nh[0].nh_gw, VAR_4->fib_dev);
 if (VAR_9) {
  VAR_10 = VAR_9->nud_state;
  FUNC_1(VAR_9);
 }
 if (VAR_10 == VAR_1)
  return 0;
 if ((VAR_10&VAR_2) && VAR_5 != VAR_8)
  return 0;
 if ((VAR_10&VAR_2) ||
     (*VAR_7<0 && VAR_5 > VAR_8)) {
  *VAR_6 = VAR_4;
  *VAR_7 = VAR_5;
 }
 return 1;
}
