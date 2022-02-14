
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sockaddr_u ;
struct TYPE_5__ {int name; int ifnum; } ;
typedef TYPE_1__ endpt ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

endpt *
FUNC_4(
 sockaddr_u *VAR_1
 )
{
 endpt *VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0, 0);

 if (((void*)0) == VAR_2) {
  FUNC_1(4, ("Found no interface for address %s - returning wildcard\n",
       FUNC_3(VAR_1)));

  VAR_2 = FUNC_0(VAR_1);
 } else
  FUNC_1(4, ("Found interface #%d %s for address %s\n",
       VAR_2->ifnum, VAR_2->name, FUNC_3(VAR_1)));

 return VAR_2;
}
