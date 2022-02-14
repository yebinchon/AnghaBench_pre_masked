
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {TYPE_1__ sa; } ;
struct TYPE_8__ {TYPE_2__ type; } ;
typedef TYPE_3__ isc_sockaddr_t ;
typedef int isc_netaddr_t ;
typedef int isc_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__ const*) ;
 int FUNC_1 (int *) ;

isc_boolean_t
FUNC_2(const isc_sockaddr_t *VAR_3) {
 isc_netaddr_t VAR_4;

 if (VAR_3->type.sa.sa_family == VAR_0 ||
     VAR_3->type.sa.sa_family == VAR_1) {
  FUNC_0(&VAR_4, VAR_3);
  return (FUNC_1(&VAR_4));
 }
 return (VAR_2);
}
