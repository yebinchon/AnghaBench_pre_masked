
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;
typedef int addr ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const,int) ;
 char* FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int**,int const*,int) ;
 int FUNC_4 (int**,int ,int) ;
 int FUNC_5 (char*,int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_0,
                   const u_char *VAR_1, char *VAR_2, u_int VAR_3)
{
        uint8_t VAR_4[19];
 u_int VAR_5;

 FUNC_0(VAR_1[0]);
 VAR_5 = VAR_1[0];

 if (152 < VAR_5)
  return -1;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(VAR_1[4], (VAR_5 + 7) / 8);
 FUNC_3(&VAR_4, &VAR_1[4], (VAR_5 + 7) / 8);
 if (VAR_5 % 8) {
  VAR_4[(VAR_5 + 7) / 8 - 1] &=
   ((0xff00 >> (VAR_5 % 8)) & 0xff);
 }
 FUNC_5(VAR_2, VAR_3, "%s/%d",
                 FUNC_2(VAR_0, VAR_4,(VAR_5 + 7) / 8),
                 VAR_5);

 return 1 + (VAR_5 + 7) / 8;

trunc:
 return -2;
}
