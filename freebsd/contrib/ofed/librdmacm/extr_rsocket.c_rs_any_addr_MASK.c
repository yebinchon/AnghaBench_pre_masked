
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_7__ {TYPE_2__ sin_addr; } ;
struct TYPE_5__ {scalar_t__ sa_family; } ;
union socket_addr {TYPE_4__ sin6; TYPE_3__ sin; TYPE_1__ sa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(const union socket_addr *VAR_5)
{
 if (VAR_5->sa.sa_family == VAR_0) {
  return (VAR_5->sin.sin_addr.s_addr == FUNC_0(VAR_1) ||
   VAR_5->sin.sin_addr.s_addr == FUNC_0(VAR_2));
 } else {
  return (!FUNC_1(&VAR_5->sin6.sin6_addr, &VAR_3, 16) ||
   !FUNC_1(&VAR_5->sin6.sin6_addr, &VAR_4, 16));
 }
}
