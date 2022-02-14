
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int sockaddr_u ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ isc_sockaddr_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_netaddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int,int) ;

int
FUNC_5(
 const sockaddr_u * VAR_1
 )
{
 isc_netaddr_t VAR_2;
 isc_sockaddr_t VAR_3;
 u_int VAR_4;
 isc_result_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_3);
 FUNC_3(&VAR_3.type, VAR_1,
        FUNC_4(sizeof(VAR_3.type), sizeof(*VAR_1)));
 FUNC_1(&VAR_2, &VAR_3);
 VAR_5 = FUNC_2(&VAR_2, &VAR_4);
 VAR_6 = (VAR_0 == VAR_5)
   ? (int)VAR_4
   : -1;

 return VAR_6;
}
