
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sockaddr_u ;
struct TYPE_4__ {int * ep; int addr; } ;
typedef TYPE_1__ remaddr_t ;
typedef int endpt ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(
 sockaddr_u * VAR_2,
 endpt * VAR_3
 )
{
 remaddr_t *VAR_4;





  VAR_4 = FUNC_2(sizeof(*VAR_4));
  VAR_4->addr = *VAR_2;
  VAR_4->ep = VAR_3;

  FUNC_1(VAR_1, VAR_4, VAR_0);

  FUNC_0(4, ("Added addr %s to list of addresses\n",
       FUNC_4(VAR_2)));





}
