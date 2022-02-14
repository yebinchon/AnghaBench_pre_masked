
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32 ;
typedef int sockaddr_u ;
struct TYPE_5__ {TYPE_2__* ep; int addr; struct TYPE_5__* link; } ;
typedef TYPE_1__ remaddr_t ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ endpt ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static endpt *
FUNC_3(
 sockaddr_u * VAR_1,
 u_int32 VAR_2
 )
{
 remaddr_t *VAR_3;

 FUNC_0(4, ("Finding addr %s with flags %d in list: ",
      FUNC_2(VAR_1), VAR_2));

 for (VAR_3 = VAR_0;
      VAR_3 != ((void*)0);
      VAR_3 = VAR_3->link)

  if (FUNC_1(&VAR_3->addr, VAR_1)
      && (VAR_3->ep->flags & VAR_2) == VAR_2) {

   FUNC_0(4, ("FOUND\n"));
   return VAR_3->ep;
  }

 FUNC_0(4, ("NOT FOUND\n"));
 return ((void*)0);
}
