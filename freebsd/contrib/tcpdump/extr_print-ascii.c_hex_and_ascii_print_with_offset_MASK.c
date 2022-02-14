
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
typedef int hexstuff ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,char*,int,...) ;

void
FUNC_3(netdissect_options *VAR_5, register const char *VAR_6,
    register const u_char *VAR_7, register u_int VAR_8, register u_int VAR_9)
{
 u_int VAR_10;
 register u_int VAR_11;
 register int VAR_12, VAR_13;
 register int VAR_14;
 char VAR_15[VAR_4*VAR_3+1], *VAR_16;
 char VAR_17[VAR_0+1], *VAR_18;

 VAR_10 = (VAR_5->ndo_snapend >= VAR_7) ? VAR_5->ndo_snapend - VAR_7 : 0;
 if (VAR_8 > VAR_10)
  VAR_8 = VAR_10;
 VAR_14 = VAR_8 / sizeof(u_short);
 VAR_11 = 0;
 VAR_16 = VAR_15; VAR_18 = VAR_17;
 while (--VAR_14 >= 0) {
  VAR_12 = *VAR_7++;
  VAR_13 = *VAR_7++;
  (void)FUNC_2(VAR_16, sizeof(VAR_15) - (VAR_16 - VAR_15),
      " %02x%02x", VAR_12, VAR_13);
  VAR_16 += VAR_3;
  *(VAR_18++) = (FUNC_0(VAR_12) ? VAR_12 : '.');
  *(VAR_18++) = (FUNC_0(VAR_13) ? VAR_13 : '.');
  VAR_11++;
  if (VAR_11 >= VAR_4) {
   *VAR_16 = *VAR_18 = '\0';
   FUNC_1((VAR_5, "%s0x%04x: %-*s  %s",
       VAR_6, VAR_9, VAR_2,
       VAR_15, VAR_17));
   VAR_11 = 0; VAR_16 = VAR_15; VAR_18 = VAR_17;
   VAR_9 += VAR_1;
  }
 }
 if (VAR_8 & 1) {
  VAR_12 = *VAR_7++;
  (void)FUNC_2(VAR_16, sizeof(VAR_15) - (VAR_16 - VAR_15),
      " %02x", VAR_12);
  VAR_16 += 3;
  *(VAR_18++) = (FUNC_0(VAR_12) ? VAR_12 : '.');
  ++VAR_11;
 }
 if (VAR_11 > 0) {
  *VAR_16 = *VAR_18 = '\0';
  FUNC_1((VAR_5, "%s0x%04x: %-*s  %s",
       VAR_6, VAR_9, VAR_2,
       VAR_15, VAR_17));
 }
}
