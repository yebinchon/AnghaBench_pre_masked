
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int pnp_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(pnp_id *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0, VAR_7 = 0x6a;
 u_char *VAR_8 = (u_char *)VAR_3;

 FUNC_1(VAR_8, sizeof(char) * 9);
 FUNC_3(VAR_1, VAR_0);
 for (VAR_4 = 0; VAR_4 < 72; VAR_4++) {
  VAR_5 = FUNC_2((VAR_2 << 2) | 0x3) == 0x55;
  FUNC_0(250);


  VAR_5 = (FUNC_2((VAR_2 << 2) | 0x3) == 0xaa) && VAR_5;
  FUNC_0(250);

  VAR_6 = VAR_6 || VAR_5;
  if (VAR_4 < 64)
   VAR_7 = (VAR_7 >> 1) |
     (((VAR_7 ^ (VAR_7 >> 1) ^ VAR_5) << 7) & 0xff);
  VAR_8[VAR_4 / 8] = (VAR_8[VAR_4 / 8] >> 1) | (VAR_5 ? 0x80 : 0);
 }

 VAR_6 = VAR_6 && (VAR_8[8] == VAR_7);

 return (VAR_6);
}
