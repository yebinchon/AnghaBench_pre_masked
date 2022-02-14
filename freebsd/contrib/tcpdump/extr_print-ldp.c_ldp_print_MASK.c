
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct ldp_msg_header {int dummy; } ;
struct ldp_common_header {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *,int const*) ;

void
FUNC_1(netdissect_options *VAR_0,
          register const u_char *VAR_1, register u_int VAR_2)
{
    int VAR_3;
    while (VAR_2 > (sizeof(struct ldp_common_header) + sizeof(struct ldp_msg_header))) {
        VAR_3 = FUNC_0(VAR_0, VAR_1);
        if (VAR_3 == 0)
            return;
        VAR_2 -= VAR_3;
        VAR_1 += VAR_3;
    }
}
