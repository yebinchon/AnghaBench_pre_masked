
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32 ;
struct TYPE_5__ {int ifru_flags6; } ;
struct in6_ifreq {TYPE_1__ ifr_ifru; int ifr_name; int ifr_addr; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {int sa6; TYPE_2__ sa; } ;
typedef TYPE_3__ sockaddr_u ;
typedef int isc_boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct in6_ifreq) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,struct in6_ifreq*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static isc_boolean_t
FUNC_6(
 sockaddr_u *VAR_5,
 const char *VAR_6,
 u_int32 VAR_7
 )
{
 return VAR_1;
}
