
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct interface {int dummy; } ;
typedef int sockaddr_u ;
struct TYPE_3__ {struct interface* ep; int addr; struct TYPE_3__* link; } ;
typedef TYPE_1__ remaddr_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct interface *
FUNC_3(
 sockaddr_u *VAR_1
 )
{
 remaddr_t *VAR_2;

 FUNC_0(4, ("Searching for addr %s in list of addresses - ",
      FUNC_2(VAR_1)));

 for (VAR_2 = VAR_0;
      VAR_2 != ((void*)0);
      VAR_2 = VAR_2->link)
  if (FUNC_1(&VAR_2->addr, VAR_1)) {
   FUNC_0(4, ("FOUND\n"));
   return VAR_2->ep;
  }

 FUNC_0(4, ("NOT FOUND\n"));
 return ((void*)0);
}
