
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int const VAR_0 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(netdissect_options *VAR_1,
                           const u_char *VAR_2, u_int *VAR_3,
                           u_int *VAR_4, uint8_t *VAR_5, u_int VAR_6)
{
 if (!FUNC_0(VAR_2[0]) || VAR_6 < 1)
  return -1;
 if ((VAR_2[0] & VAR_0))
  return 0;

 if (!FUNC_0(VAR_2[1]) || VAR_6 < 2)
  return -1;
 *VAR_4 = 2;
 *VAR_3 = ((VAR_2[0] & 0xFC) << 2) | ((VAR_2[1] & 0xF0) >> 4);

        VAR_5[0] = VAR_2[0] & 0x02;
        VAR_5[1] = VAR_2[1] & 0x0c;
        VAR_5[2] = 0;
        VAR_5[3] = 0;

 if (VAR_2[1] & VAR_0)
  return 1;

 VAR_2 += 2;
 VAR_6 -= 2;
 if (!FUNC_0(VAR_2[0]) || VAR_6 < 1)
  return -1;
 (*VAR_4)++;
 if ((VAR_2[0] & VAR_0) == 0) {
  *VAR_3 = (*VAR_3 << 7) | (VAR_2[0] >> 1);
  (*VAR_4)++;
  VAR_2++;
  VAR_6--;
 }

 if (!FUNC_0(VAR_2[0]) || VAR_6 < 1)
  return -1;
 if ((VAR_2[0] & VAR_0) == 0)
  return 0;

        VAR_5[3] = VAR_2[0] & 0x02;

        *VAR_3 = (*VAR_3 << 6) | (VAR_2[0] >> 2);

 return 1;
}
