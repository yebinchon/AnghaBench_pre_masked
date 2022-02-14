
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {TYPE_1__* parms; } ;
struct TYPE_2__ {int (* neigh_cleanup ) (struct neighbour*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct neighbour*,int ,int ) ;
 int FUNC_1 (struct neighbour*) ;
 int FUNC_2 (struct neighbour*) ;

__attribute__((used)) static void FUNC_3(struct neighbour *VAR_1)
{
 if (VAR_1->parms->neigh_cleanup)
  VAR_1->parms->neigh_cleanup(VAR_1);

 FUNC_0(VAR_1, VAR_0, 0);
 FUNC_1(VAR_1);
}
