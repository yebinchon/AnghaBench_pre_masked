
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;
typedef int addr ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 char* FUNC_3 (int *,int const*) ;
 char* FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int**,int const*,int) ;
 int FUNC_6 (int**,int ,int) ;
 int FUNC_7 (char*,int,char*,char*,char*,int,int,char*) ;

__attribute__((used)) static int
FUNC_8(netdissect_options *VAR_0,
                               const u_char *VAR_1, char *VAR_2, u_int VAR_3)
{
        uint8_t VAR_4[19];
 u_int VAR_5;

 FUNC_1(VAR_1[0]);
 VAR_5 = VAR_1[0];

 if ((24+64) > VAR_5)
  return -1;

        VAR_5-=(24+64);

 if (152 < VAR_5)
  return -1;

 FUNC_6(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(VAR_1[12], (VAR_5 + 7) / 8);
 FUNC_5(&VAR_4, &VAR_1[12], (VAR_5 + 7) / 8);
 if (VAR_5 % 8) {
  VAR_4[(VAR_5 + 7) / 8 - 1] &=
   ((0xff00 >> (VAR_5 % 8)) & 0xff);
 }

 FUNC_7(VAR_2, VAR_3, "RD: %s, %s/%d, label:%u %s",
                 FUNC_3(VAR_0, VAR_1+4),
                 FUNC_4(VAR_0, VAR_4,(VAR_5 + 7) / 8),
                 VAR_5,
                 FUNC_0(VAR_1+1)>>4,
                 ((VAR_1[3]&1)==0) ? "(BOGUS: Bottom of Stack NOT set!)" : "(bottom)" );

 return 12 + (VAR_5 + 7) / 8;

trunc:
 return -2;
}
