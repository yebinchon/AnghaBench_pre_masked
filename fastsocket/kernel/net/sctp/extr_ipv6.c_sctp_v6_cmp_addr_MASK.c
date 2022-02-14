
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__* s6_addr32; } ;
struct TYPE_12__ {scalar_t__ sin6_port; scalar_t__ sin6_scope_id; TYPE_5__ sin6_addr; } ;
struct TYPE_10__ {scalar_t__ s_addr; } ;
struct TYPE_11__ {scalar_t__ sin_port; TYPE_2__ sin_addr; } ;
struct TYPE_9__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_4__ v6; TYPE_3__ v4; TYPE_1__ sa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(const union sctp_addr *VAR_3,
       const union sctp_addr *VAR_4)
{
 if (VAR_3->sa.sa_family != VAR_4->sa.sa_family) {
  if (VAR_3->sa.sa_family == VAR_0 &&
      VAR_4->sa.sa_family == VAR_1 &&
      FUNC_2(&VAR_4->v6.sin6_addr)) {
   if (VAR_4->v6.sin6_port == VAR_3->v4.sin_port &&
       VAR_4->v6.sin6_addr.s6_addr32[3] ==
       VAR_3->v4.sin_addr.s_addr)
    return 1;
  }
  if (VAR_4->sa.sa_family == VAR_0 &&
      VAR_3->sa.sa_family == VAR_1 &&
      FUNC_2(&VAR_3->v6.sin6_addr)) {
   if (VAR_3->v6.sin6_port == VAR_4->v4.sin_port &&
       VAR_3->v6.sin6_addr.s6_addr32[3] ==
       VAR_4->v4.sin_addr.s_addr)
    return 1;
  }
  return 0;
 }
 if (!FUNC_0(&VAR_3->v6.sin6_addr, &VAR_4->v6.sin6_addr))
  return 0;

 if (FUNC_1(&VAR_3->v6.sin6_addr) & VAR_2) {
  if (VAR_3->v6.sin6_scope_id && VAR_4->v6.sin6_scope_id &&
      (VAR_3->v6.sin6_scope_id != VAR_4->v6.sin6_scope_id)) {
   return 0;
  }
 }

 return 1;
}
