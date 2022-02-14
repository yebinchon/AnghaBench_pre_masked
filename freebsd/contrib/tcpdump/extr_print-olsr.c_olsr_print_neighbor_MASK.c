
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct in_addr {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int *,int const*) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0,
                    const u_char *VAR_1, u_int VAR_2)
{
    int VAR_3;

    FUNC_0((VAR_0, "\n\t      neighbor\n\t\t"));
    VAR_3 = 1;

    while (VAR_2 >= sizeof(struct in_addr)) {

        if (!FUNC_1(*VAR_1, sizeof(struct in_addr)))
            return (-1);


        FUNC_0((VAR_0, "%s%s", FUNC_2(VAR_0, VAR_1),
               VAR_3 % 4 == 0 ? "\n\t\t" : " "));

        VAR_1 += sizeof(struct in_addr);
        VAR_2 -= sizeof(struct in_addr);
    }
    return (0);
}
