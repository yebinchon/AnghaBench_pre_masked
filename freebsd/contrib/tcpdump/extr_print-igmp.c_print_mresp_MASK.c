
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int u_char ;
struct tr_query {int tr_rttlqid; int tr_raddr; int tr_dst; int tr_src; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tr_query const) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(netdissect_options *VAR_1,
            register const u_char *VAR_2, register u_int VAR_3)
{
    register const struct tr_query *VAR_4 = (const struct tr_query *)(VAR_2 + 8);

    FUNC_3(*VAR_4);
    if (VAR_3 < 8 + sizeof (struct tr_query)) {
 FUNC_2((VAR_1, " [invalid len %d]", VAR_3));
 return;
    }
    FUNC_2((VAR_1, "mresp %lu: %s to %s reply-to %s",
        (u_long)FUNC_4(FUNC_0(&VAR_4->tr_rttlqid)),
        FUNC_6(VAR_1, &VAR_4->tr_src), FUNC_6(VAR_1, &VAR_4->tr_dst),
        FUNC_6(VAR_1, &VAR_4->tr_raddr)));
    if (FUNC_1(FUNC_0(&VAR_4->tr_raddr)))
        FUNC_2((VAR_1, " with-ttl %d", FUNC_5(FUNC_0(&VAR_4->tr_rttlqid))));
    return;
trunc:
    FUNC_2((VAR_1, "%s", VAR_0));
}
