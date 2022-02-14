
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(netdissect_options *VAR_0,
     const u_char * VAR_1, int VAR_2)
{
 if (VAR_2 % 5)
  goto trunc;

 FUNC_0((VAR_0, " IPv4 Prefixes (%d):", VAR_2 / 5));

 while (VAR_2 > 0) {
  FUNC_0((VAR_0, " %u.%u.%u.%u/%u", VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4]));
  VAR_2 -= 5;
  VAR_1 += 5;
 }

 return 0;

trunc:
 return -1;
}
