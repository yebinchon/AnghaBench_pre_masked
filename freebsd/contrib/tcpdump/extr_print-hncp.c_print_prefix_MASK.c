
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct in_addr {int dummy; } ;
typedef int netdissect_options ;
typedef int buf ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int,char*,int) ;
 char* FUNC_2 (int *,struct in_addr*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (struct in_addr*,int const*,int) ;
 int FUNC_5 (struct in_addr*,int ,int) ;
 int FUNC_6 (char*,int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_7(netdissect_options *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
    int VAR_4;
    char VAR_5[sizeof("xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:xxxx::/128")];

    if (VAR_2[0] >= 96 && VAR_3 >= VAR_0 + 1 &&
        FUNC_3(&VAR_2[1])) {
        struct in_addr VAR_6;
        u_int VAR_7;

        VAR_7 = VAR_2[0]-96;
        if (32 < VAR_7)
            return -1;
        VAR_3 -= 1;

        FUNC_5(&VAR_6, 0, sizeof(VAR_6));
        VAR_4 = (VAR_7 + 7) / 8;
        if (VAR_3 < (u_int)VAR_4 + VAR_0)
            return -3;
        FUNC_4(&VAR_6, &VAR_2[1 + VAR_0], VAR_4);
        if (VAR_7 % 8) {
  ((u_char *)&VAR_6)[VAR_4 - 1] &=
   ((0xff00 >> (VAR_7 % 8)) & 0xff);
 }
 FUNC_6(VAR_5, sizeof(VAR_5), "%s/%d", FUNC_2(VAR_1, &VAR_6), VAR_7);
        VAR_4 += 1 + VAR_0;
    } else {
        VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, sizeof(VAR_5));
    }

    FUNC_0((VAR_1, "%s", VAR_5));
    return VAR_4;
}
