
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * s6_addr32; } ;
struct sockaddr_in6 {int sin6_scope_id; TYPE_1__ sin6_addr; int sin6_flowinfo; } ;
struct sockaddr_ib {int sib_scope_id; int sib_addr; int sib_flowinfo; int sib_pkey; int sib_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct sockaddr_ib* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int,struct sockaddr*,struct sockaddr_ib*) ;

__attribute__((used)) static int FUNC_5(int VAR_2, struct sockaddr_ib **VAR_3, socklen_t *VAR_4,
       struct sockaddr_in6 *VAR_5, socklen_t VAR_6)
{
 *VAR_3 = FUNC_1(1, sizeof(struct sockaddr_ib));
 if (!(*VAR_3))
  return FUNC_0(VAR_1);

 (*VAR_3)->sib_family = VAR_0;
 (*VAR_3)->sib_pkey = FUNC_2(0xFFFF);
 (*VAR_3)->sib_flowinfo = VAR_5->sin6_flowinfo;
 FUNC_3(&(*VAR_3)->sib_addr, VAR_5->sin6_addr.s6_addr32[0],
      VAR_5->sin6_addr.s6_addr32[1], VAR_5->sin6_addr.s6_addr32[2],
      VAR_5->sin6_addr.s6_addr32[3]);
 FUNC_4(VAR_2, (struct sockaddr *) VAR_5, *VAR_3);
 (*VAR_3)->sib_scope_id = VAR_5->sin6_scope_id;

 *VAR_4 = sizeof(struct sockaddr_ib);
 return 0;
}
