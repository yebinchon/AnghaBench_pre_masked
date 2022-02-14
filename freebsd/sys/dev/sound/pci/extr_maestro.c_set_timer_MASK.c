
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct agg_info {int playchns; int active; int rch; scalar_t__ pch; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct agg_info*,int) ;

__attribute__((used)) static void
FUNC_3(struct agg_info *VAR_0)
{
 int VAR_1;
 u_int VAR_2 = 32 << 7, VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->playchns; VAR_1++)
  if ((VAR_0->active & (1 << VAR_1)) &&
      (VAR_2 > (VAR_3 = FUNC_0(VAR_0->pch + VAR_1))))
   VAR_2 = VAR_3;
 if ((VAR_0->active & (1 << VAR_1)) &&
     (VAR_2 > (VAR_3 = FUNC_1(&VAR_0->rch))))
  VAR_2 = VAR_3;

 FUNC_2(VAR_0, VAR_2);
}
