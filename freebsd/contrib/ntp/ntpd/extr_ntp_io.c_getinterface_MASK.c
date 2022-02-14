
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32 ;
typedef int sockaddr_u ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ endpt ;


 TYPE_1__* FUNC_0 (int *) ;

endpt *
FUNC_1(
 sockaddr_u * VAR_0,
 u_int32 VAR_1
 )
{
 endpt *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 != ((void*)0) && (VAR_2->flags & VAR_1))
  VAR_2 = ((void*)0);

 return VAR_2;
}
