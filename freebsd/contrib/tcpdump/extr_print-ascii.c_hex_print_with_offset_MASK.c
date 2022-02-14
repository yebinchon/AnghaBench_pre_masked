
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(netdissect_options *VAR_1,
                      const char *VAR_2, const u_char *VAR_3, u_int VAR_4,
        u_int VAR_5)
{
 u_int VAR_6;
 register u_int VAR_7, VAR_8;
 register int VAR_9;

 VAR_6 = (VAR_1->ndo_snapend >= VAR_3) ? VAR_1->ndo_snapend - VAR_3 : 0;
 if (VAR_4 > VAR_6)
  VAR_4 = VAR_6;
 VAR_9 = (u_int) VAR_4 / sizeof(u_short);
 VAR_7 = 0;
 while (--VAR_9 >= 0) {
  if ((VAR_7++ % 8) == 0) {
   FUNC_0((VAR_1,"%s0x%04x: ", VAR_2, VAR_5));
   VAR_5 += VAR_0;
  }
  VAR_8 = *VAR_3++;
  FUNC_0((VAR_1," %02x%02x", VAR_8, *VAR_3++));
 }
 if (VAR_4 & 1) {
  if ((VAR_7 % 8) == 0)
   FUNC_0((VAR_1,"%s0x%04x: ", VAR_2, VAR_5));
  FUNC_0((VAR_1," %02x", *VAR_3));
 }
}
