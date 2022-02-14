
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_sockaddr_t ;
typedef int isc_netaddr_t ;
typedef int isc_boolean_t ;


 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (int *,int const*) ;

isc_boolean_t
FUNC_2(const isc_sockaddr_t *VAR_0, const isc_sockaddr_t *VAR_1,
     unsigned int VAR_2)
{
 isc_netaddr_t VAR_3, VAR_4;
 FUNC_1(&VAR_3, VAR_0);
 FUNC_1(&VAR_4, VAR_1);
 return (FUNC_0(&VAR_3, &VAR_4, VAR_2));
}
