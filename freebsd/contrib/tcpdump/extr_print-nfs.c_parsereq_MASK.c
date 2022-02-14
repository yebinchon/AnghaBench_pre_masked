
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int cb_cred; } ;
struct sunrpc_msg {TYPE_1__ rm_call; } ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int ) ;

__attribute__((used)) static const uint32_t *
FUNC_3(netdissect_options *VAR_0,
         register const struct sunrpc_msg *VAR_1, register u_int VAR_2)
{
 register const uint32_t *VAR_3;
 register u_int VAR_4;




 VAR_3 = (const uint32_t *)&VAR_1->rm_call.cb_cred;
 FUNC_1(VAR_3[1]);
 VAR_4 = FUNC_0(&VAR_3[1]);
 if (VAR_4 < VAR_2) {
  VAR_3 += (VAR_4 + (2 * sizeof(*VAR_3) + 3)) / sizeof(*VAR_3);
  FUNC_1(VAR_3[1]);
  VAR_4 = FUNC_0(&VAR_3[1]);
  if (VAR_4 < VAR_2) {
   VAR_3 += (VAR_4 + (2 * sizeof(*VAR_3) + 3)) / sizeof(*VAR_3);
   FUNC_2(VAR_3[0], 0);
   return (VAR_3);
  }
 }
trunc:
 return (((void*)0));
}
