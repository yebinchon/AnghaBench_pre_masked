
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (TYPE_1__*,int const*) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0,
            register const u_char *VAR_1, register const u_char *VAR_2,
            register u_int VAR_3)
{
 register uint32_t VAR_4;

 FUNC_1(VAR_1[0], 4);
 if ((VAR_3 < 4) || ((VAR_1 + 4) > VAR_2)) {

  FUNC_0((VAR_0, " [|}"));
  return (0);
 }
 VAR_4 = (VAR_1[0] << 24) | (VAR_1[1] << 16) | (VAR_1[2] << 8) | VAR_1[3];
 VAR_1 += 4;
 VAR_3 -= 4;
 FUNC_0((VAR_0, VAR_0->ndo_vflag > 1 ? "\n\t" : " "));
 FUNC_0((VAR_0, "genid %u", VAR_4));
 if (VAR_0->ndo_vflag < 2)
  return (0);

 while ((VAR_3 > 0) && (VAR_1 < VAR_2)) {
  FUNC_1(VAR_1[0], 4);
  FUNC_0((VAR_0, "\n\tneighbor %s", FUNC_2(VAR_0, VAR_1)));
  VAR_1 += 4; VAR_3 -= 4;
 }
 return (0);
trunc:
 return (-1);
}
