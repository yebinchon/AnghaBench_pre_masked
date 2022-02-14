
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32 ;
struct TYPE_6__ {int sa_family; } ;
struct TYPE_7__ {TYPE_1__ sa; } ;
typedef TYPE_2__ sockaddr_u ;
typedef int isc_boolean_t ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,char const*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,char const*,scalar_t__) ;

__attribute__((used)) static isc_boolean_t
FUNC_2(
 sockaddr_u *VAR_7,
 const char *VAR_8
 )
{
 u_int32 VAR_9;

 VAR_9 = 0;
 switch (VAR_7->sa.sa_family) {
 case 129:






  return FUNC_0(VAR_7, VAR_8, VAR_9) ? VAR_5 : VAR_6;
 case 128:
  return FUNC_1(VAR_7, VAR_8, VAR_9) ? VAR_5 : VAR_6;
 default:
  return VAR_5;
 }
}
