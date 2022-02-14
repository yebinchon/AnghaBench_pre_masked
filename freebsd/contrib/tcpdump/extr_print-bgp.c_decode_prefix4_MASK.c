
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct in_addr {int dummy; } ;
typedef int netdissect_options ;
typedef int addr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 char* FUNC_3 (int *,struct in_addr*) ;
 int FUNC_4 (struct in_addr*,int const*,int) ;
 int FUNC_5 (struct in_addr*,int ,int) ;
 int FUNC_6 (char*,int,char*,char*,int) ;

int
FUNC_7(netdissect_options *VAR_0,
               const u_char *VAR_1, u_int VAR_2, char *VAR_3, u_int VAR_4)
{
 struct in_addr VAR_5;
 u_int VAR_6, VAR_7;

 FUNC_1(VAR_1[0]);
 FUNC_0(1);
 VAR_6 = VAR_1[0];
 if (32 < VAR_6)
  return -1;
 VAR_2 -= 1;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_7 = (VAR_6 + 7) / 8;
 FUNC_2(VAR_1[1], VAR_7);
 FUNC_0(VAR_7);
 FUNC_4(&VAR_5, &VAR_1[1], VAR_7);
 if (VAR_6 % 8) {
  ((u_char *)&VAR_5)[VAR_7 - 1] &=
   ((0xff00 >> (VAR_6 % 8)) & 0xff);
 }
 FUNC_6(VAR_3, VAR_4, "%s/%d", FUNC_3(VAR_0, &VAR_5), VAR_6);
 return 1 + VAR_7;

trunc:
 return -2;

badtlv:
 return -3;
}
