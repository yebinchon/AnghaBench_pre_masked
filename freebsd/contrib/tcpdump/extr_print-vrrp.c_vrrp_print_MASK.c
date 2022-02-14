
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct ip {int dummy; } ;
struct cksum_vec {int const* ptr; int len; } ;
struct TYPE_7__ {int ndo_snapend; scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int const*,int,int ) ;
 scalar_t__ FUNC_5 (struct cksum_vec*,int) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (TYPE_1__*,struct ip const*,int const*,int ,int ,int ) ;
 char* FUNC_8 (int ,char*,int) ;
 int VAR_5 ;

void
FUNC_9(netdissect_options *VAR_6,
           register const u_char *VAR_7, register u_int VAR_8,
           register const u_char *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = VAR_1;
 const char *VAR_14;

 FUNC_2(VAR_7[0]);
 VAR_11 = (VAR_7[0] & 0xf0) >> 4;
 VAR_12 = VAR_7[0] & 0x0f;
 VAR_14 = FUNC_8(VAR_5, "unknown type (%u)", VAR_12);
 FUNC_1((VAR_6, "VRRPv%u, %s", VAR_11, VAR_14));
 if (VAR_10 != 255)
  FUNC_1((VAR_6, ", (ttl %u)", VAR_10));
 if (VAR_11 < 2 || VAR_11 > 3 || VAR_12 != VAR_3)
  return;
 FUNC_2(VAR_7[2]);
 FUNC_1((VAR_6, ", vrid %u, prio %u", VAR_7[1], VAR_7[2]));
 FUNC_2(VAR_7[5]);

 if (VAR_11 == 2) {
  VAR_13 = VAR_7[4];
  FUNC_1((VAR_6, ", authtype %s", FUNC_8(VAR_4, ((void*)0), VAR_13)));
  FUNC_1((VAR_6, ", intvl %us, length %u", VAR_7[5], VAR_8));
 } else {
  uint16_t VAR_15 = (VAR_7[4] & 0x0f) << 8 | VAR_7[5];
  FUNC_1((VAR_6, ", intvl %ucs, length %u", VAR_15, VAR_8));
 }

 if (VAR_6->ndo_vflag) {
  int VAR_16 = VAR_7[3];
  int VAR_17;
  char VAR_18;

  if (VAR_11 == 2 && FUNC_3(VAR_7[0], VAR_8)) {
   struct cksum_vec VAR_19[1];

   VAR_19[0].ptr = VAR_7;
   VAR_19[0].len = VAR_8;
   if (FUNC_5(VAR_19, 1))
    FUNC_1((VAR_6, ", (bad vrrp cksum %x)",
     FUNC_0(&VAR_7[6])));
  }

  if (VAR_11 == 3 && FUNC_3(VAR_7[0], VAR_8)) {
   uint16_t VAR_20 = FUNC_7(VAR_6, (const struct ip *)VAR_9, VAR_7,
    VAR_8, VAR_8, VAR_0);
   if (VAR_20)
    FUNC_1((VAR_6, ", (bad vrrp cksum %x)",
     FUNC_0(&VAR_7[6])));
  }

  FUNC_1((VAR_6, ", addrs"));
  if (VAR_16 > 1)
   FUNC_1((VAR_6, "(%d)", VAR_16));
  FUNC_1((VAR_6, ":"));
  VAR_18 = ' ';
  VAR_7 += 8;
  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   FUNC_2(VAR_7[3]);
   FUNC_1((VAR_6, "%c%s", VAR_18, FUNC_6(VAR_6, VAR_7)));
   VAR_18 = ',';
   VAR_7 += 4;
  }
  if (VAR_11 == 2 && VAR_13 == VAR_2) {
   FUNC_2(VAR_7[7]);
   FUNC_1((VAR_6, " auth \""));
   if (FUNC_4(VAR_6, VAR_7, 8, VAR_6->ndo_snapend)) {
    FUNC_1((VAR_6, "\""));
    goto trunc;
   }
   FUNC_1((VAR_6, "\""));
  }
 }
 return;
trunc:
 FUNC_1((VAR_6, "[|vrrp]"));
}
