
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct mptcp_option {int sub_etc; } ;
typedef int netdissect_options ;
struct TYPE_2__ {int (* print ) (int *,int const*,int,int ) ;int name; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int *,int const*,int,int ) ;

int
FUNC_4(netdissect_options *VAR_2,
            const u_char *VAR_3, u_int VAR_4, u_char VAR_5)
{
        const struct mptcp_option *VAR_6;
        u_int VAR_7;

        if (VAR_4 < 3)
                return 0;

        VAR_6 = (const struct mptcp_option *) VAR_3;
        VAR_7 = FUNC_2(FUNC_0(VAR_6->sub_etc), VAR_0 + 1);

        FUNC_1((VAR_2, " %s", VAR_1[VAR_7].name));
        return VAR_1[VAR_7].print(VAR_2, VAR_3, VAR_4, VAR_5);
}
