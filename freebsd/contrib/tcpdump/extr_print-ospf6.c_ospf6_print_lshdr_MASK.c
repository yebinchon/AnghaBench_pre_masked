
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct lsa6_hdr {int ls_stateid; int ls_type; int ls_length; int ls_age; int ls_seq; int ls_router; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_0,
                  register const struct lsa6_hdr *VAR_1, const u_char *VAR_2)
{
 if ((const u_char *)(VAR_1 + 1) > VAR_2)
  goto trunc;
 FUNC_3(VAR_1->ls_type);
 FUNC_3(VAR_1->ls_seq);

 FUNC_2((VAR_0, "\n\t  Advertising Router %s, seq 0x%08x, age %us, length %u",
               FUNC_4(VAR_0, &VAR_1->ls_router),
               FUNC_1(&VAR_1->ls_seq),
               FUNC_0(&VAR_1->ls_age),
               FUNC_0(&VAR_1->ls_length)-(u_int)sizeof(struct lsa6_hdr)));

 FUNC_5(VAR_0, FUNC_0(&VAR_1->ls_type), &VAR_1->ls_stateid);

 return (0);
trunc:
 return (1);
}
