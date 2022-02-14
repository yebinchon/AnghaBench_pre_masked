
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct req_pkt {int u; int err_nitems; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,struct req_pkt*,int ) ;

__attribute__((used)) static void
FUNC_3(
 sockaddr_u *VAR_1,
 endpt *VAR_2,
 struct req_pkt *VAR_3,
 u_long VAR_4
 )
{
 register uint32_t *VAR_5;
 register int VAR_6;

 VAR_6 = FUNC_0(VAR_3->err_nitems);
 VAR_5 = (uint32_t *)&VAR_3->u;
 while (VAR_6-- > 0) {
  FUNC_1(*VAR_5, VAR_4);
  VAR_5++;
 }

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0);
}
