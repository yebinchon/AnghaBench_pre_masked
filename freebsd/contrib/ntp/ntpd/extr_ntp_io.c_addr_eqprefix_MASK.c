
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int sockaddr_u ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ isc_sockaddr_t ;
typedef int isc_netaddr_t ;


 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int
FUNC_5(
 const sockaddr_u * VAR_0,
 const sockaddr_u * VAR_1,
 int VAR_2
 )
{
 isc_netaddr_t VAR_3;
 isc_netaddr_t VAR_4;
 isc_sockaddr_t VAR_5;

 FUNC_0(VAR_5);
 FUNC_3(&VAR_5.type, VAR_0, FUNC_4(sizeof(VAR_5.type), sizeof(*VAR_0)));
 FUNC_2(&VAR_3, &VAR_5);

 FUNC_0(VAR_5);
 FUNC_3(&VAR_5.type, VAR_1, FUNC_4(sizeof(VAR_5.type), sizeof(*VAR_1)));
 FUNC_2(&VAR_4, &VAR_5);

 return (int)FUNC_1(&VAR_3, &VAR_4,
      (u_int)VAR_2);
}
