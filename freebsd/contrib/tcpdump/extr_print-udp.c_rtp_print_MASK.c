
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct udphdr {int uh_ulen; } ;
struct TYPE_4__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_1, const void *VAR_2, u_int VAR_3,
          register const struct udphdr *VAR_4)
{

 const u_int *VAR_5 = (const u_int *)VAR_2;
 u_int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11, VAR_12;
 const char * VAR_13;

 FUNC_4(&((const u_int *)VAR_2)[0]);
 VAR_11 = FUNC_1(&((const u_int *)VAR_2)[0]);
 FUNC_4(&((const u_int *)VAR_2)[1]);
 VAR_12 = FUNC_1(&((const u_int *)VAR_2)[1]);
 FUNC_3(&VAR_4->uh_ulen);
 VAR_10 = FUNC_0(&VAR_4->uh_ulen) - sizeof(*VAR_4) - 8;
 VAR_5 += 2;
 VAR_3 >>= 2;
 VAR_3 -= 2;
 VAR_6 = 0;
 VAR_7 = 0;
 if ((VAR_11 >> 30) == 1) {

  VAR_6 = VAR_11 & 0x800000;
  VAR_8 = (VAR_11 >> 16) & 0x3f;
  VAR_9 = VAR_11 & 0x400000;
  VAR_13 = "rtpv1";
 } else {

  VAR_7 = VAR_11 & 0x10000000;
  VAR_8 = (VAR_11 >> 16) & 0x7f;
  VAR_9 = VAR_11 & 0x800000;
  VAR_10 -= 4;
  VAR_13 = "rtp";
  VAR_5 += 1;
  VAR_3 -= 1;
 }
 FUNC_2((VAR_1, "udp/%s %d c%d %s%s %d %u",
  VAR_13,
  VAR_10,
  VAR_8,
  (VAR_6 || VAR_7)? "+" : "",
  VAR_9? "*" : "",
  VAR_11 & 0xffff,
  VAR_12));
 if (VAR_1->ndo_vflag) {
  FUNC_4(&((const u_int *)VAR_2)[2]);
  FUNC_2((VAR_1, " %u", FUNC_1(&((const u_int *)VAR_2)[2])));
  if (VAR_6) {
   u_int VAR_14, VAR_15;
   do {
    FUNC_4(VAR_5);
    VAR_14 = FUNC_1(VAR_5);
    VAR_15 = (VAR_14 >> 16) & 0xff;
    if (VAR_15 == 0 || VAR_15 > VAR_3) {
     FUNC_2((VAR_1, " !opt"));
     return;
    }
    VAR_5 += VAR_15;
    VAR_3 -= VAR_15;
   } while ((int)VAR_14 >= 0);
  }
  if (VAR_7) {
   u_int VAR_16, VAR_17;
   FUNC_4(VAR_5);
   VAR_16 = FUNC_1(VAR_5);
   VAR_17 = (VAR_16 & 0xffff) + 1;
   if (VAR_17 > VAR_3) {
    FUNC_2((VAR_1, " !ext"));
    return;
   }
   VAR_5 += VAR_17;
  }
  FUNC_4(VAR_5);
  if (VAR_8 == 0x1f)
   FUNC_2((VAR_1, " 0x%04x", FUNC_1(VAR_5) >> 16));
 }

trunc:
 FUNC_2((VAR_1, "%s", VAR_0));
}
