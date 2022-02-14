
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct in_addr {int dummy; } ;
typedef int netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const,int) ;
 char* FUNC_2 (int *,int const*) ;
 char* FUNC_3 (int *,int const*) ;
 int FUNC_4 (char*,int ,char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_1,
                    const u_char *VAR_2, char *VAR_3, u_int VAR_4)
{

    const u_char *VAR_5;
    const u_char *VAR_6;

    FUNC_0(VAR_2[0]);


    if (*VAR_2 != VAR_0 * 8)
 return -1;
    VAR_2++;


    FUNC_1(VAR_2[0], 8);
    VAR_5 = VAR_2;
    VAR_2+=8;


    FUNC_1(VAR_2[0], sizeof(struct in_addr));
    VAR_6 = VAR_2;
    VAR_2+=sizeof(struct in_addr);


    FUNC_1(VAR_2[0], sizeof(struct in_addr));

    FUNC_4(VAR_3, VAR_4, "RD: %s, VPN IP Address: %s, MC Group Address: %s",
      FUNC_2(VAR_1, VAR_5), FUNC_3(VAR_1, VAR_6), FUNC_3(VAR_1, VAR_2));

    return VAR_0 + 1;

 trunc:

return -2;
}
