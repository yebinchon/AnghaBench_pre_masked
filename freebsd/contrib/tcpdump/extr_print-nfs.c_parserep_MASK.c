
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sunrpc_msg {int rm_reply; } ;
typedef int netdissect_options ;
typedef enum sunrpc_accept_stat { ____Placeholder_sunrpc_accept_stat } sunrpc_accept_stat ;
typedef int astat ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static const uint32_t *
FUNC_5(netdissect_options *VAR_3,
         register const struct sunrpc_msg *VAR_4, register u_int VAR_5)
{
 register const uint32_t *VAR_6;
 u_int VAR_7;
 enum sunrpc_accept_stat VAR_8;
 VAR_6 = ((const uint32_t *)&VAR_4->rm_reply) + 1;
 FUNC_2(VAR_6[1]);
 VAR_7 = FUNC_0(&VAR_6[1]);
 if (VAR_7 >= VAR_5)
  return (((void*)0));



 VAR_6 += (VAR_7 + (2*sizeof(uint32_t) + 3)) / sizeof(uint32_t);




 FUNC_2(VAR_6[0]);
 VAR_8 = (enum sunrpc_accept_stat) FUNC_0(VAR_6);
 if (VAR_8 != VAR_0) {
  FUNC_1((VAR_3, " %s", FUNC_4(VAR_2, "ar_stat %d", VAR_8)));
  VAR_1 = 1;
  return (((void*)0));
 }

 FUNC_3(*VAR_6, sizeof(VAR_8));
 return ((const uint32_t *) (sizeof(VAR_8) + ((const char *)VAR_6)));
trunc:
 return (0);
}
