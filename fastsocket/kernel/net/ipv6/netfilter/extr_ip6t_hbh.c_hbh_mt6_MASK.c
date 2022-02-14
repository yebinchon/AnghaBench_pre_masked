
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct ipv6_opt_hdr {int hdrlen; } ;
typedef struct ipv6_opt_hdr u8 ;
typedef int u16 ;
struct xt_match_param {int* hotdrop; TYPE_1__* match; struct ip6t_opts* matchinfo; } ;
struct sk_buff {unsigned int len; } ;
struct ip6t_opts {unsigned int hdrlen; int flags; int invflags; unsigned int optsnr; int* opts; } ;
typedef int _opttype ;
typedef int _optsh ;
typedef int _optlen ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff const*,unsigned int*,int ,int *,int *) ;
 unsigned int FUNC_1 (struct ipv6_opt_hdr const*) ;
 int FUNC_2 (char*,...) ;
 void* FUNC_3 (struct sk_buff const*,unsigned int,int,struct ipv6_opt_hdr*) ;

__attribute__((used)) static bool
FUNC_4(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 struct ipv6_opt_hdr VAR_6;
 const struct ipv6_opt_hdr *VAR_7;
 const struct ip6t_opts *VAR_8 = VAR_5->matchinfo;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 bool VAR_12 = 0;
 u8 VAR_13;
 u8 VAR_14;
 const u_int8_t *VAR_15 = ((void*)0);
 const u_int8_t *VAR_16 = ((void*)0);
 unsigned int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_0(VAR_4, &VAR_10, VAR_5->match->data, ((void*)0), ((void*)0));
 if (VAR_18 < 0) {
  if (VAR_18 != -VAR_0)
   *VAR_5->hotdrop = 1;
  return 0;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_10, sizeof(VAR_6), &VAR_6);
 if (VAR_7 == ((void*)0)) {
  *VAR_5->hotdrop = 1;
  return 0;
 }

 VAR_11 = FUNC_1(VAR_7);
 if (VAR_4->len - VAR_10 < VAR_11) {

  return 0;
 }

 FUNC_2("IPv6 OPTS LEN %u %u ", VAR_11, VAR_7->hdrlen);

 FUNC_2("len %02X %04X %02X ",
   VAR_8->hdrlen, VAR_11,
   (!(VAR_8->flags & VAR_2) ||
    ((VAR_8->hdrlen == VAR_11) ^
     !!(VAR_8->invflags & VAR_1))));

 VAR_12 = (VAR_7 != ((void*)0)) &&
       (!(VAR_8->flags & VAR_2) ||
        ((VAR_8->hdrlen == VAR_11) ^
  !!(VAR_8->invflags & VAR_1)));

 VAR_10 += 2;
 VAR_11 -= 2;
 if (!(VAR_8->flags & VAR_3)) {
  return VAR_12;
 } else {
  FUNC_2("Strict ");
  FUNC_2("#%d ", VAR_8->optsnr);
  for (VAR_9 = 0; VAR_9 < VAR_8->optsnr; VAR_9++) {

   if (VAR_11 < 1)
    break;
   VAR_15 = FUNC_3(VAR_4, VAR_10, sizeof(VAR_13),
      &VAR_13);
   if (VAR_15 == ((void*)0))
    break;


   if (*VAR_15 != (VAR_8->opts[VAR_9] & 0xFF00) >> 8) {
    FUNC_2("Tbad %02X %02X\n", *VAR_15,
      (VAR_8->opts[VAR_9] & 0xFF00) >> 8);
    return 0;
   } else {
    FUNC_2("Tok ");
   }

   if (*VAR_15) {
    u16 VAR_19;


    if (VAR_11 < 2)
     break;
    VAR_16 = FUNC_3(VAR_4, VAR_10 + 1,
       sizeof(VAR_14),
       &VAR_14);
    if (VAR_16 == ((void*)0))
     break;
    VAR_19 = VAR_8->opts[VAR_9] & 0x00FF;

    if (VAR_19 != 0x00FF && VAR_19 != *VAR_16) {
     FUNC_2("Lbad %02X %04X\n", *VAR_16,
       VAR_19);
     return 0;
    }
    FUNC_2("Lok ");
    VAR_17 = *VAR_16 + 2;
   } else {
    FUNC_2("Pad1\n");
    VAR_17 = 1;
   }


   FUNC_2("len%04X \n", VAR_17);

   if ((VAR_10 > VAR_4->len - VAR_17 || VAR_11 < VAR_17) &&
       VAR_9 < VAR_8->optsnr - 1) {
    FUNC_2("new pointer is too large! \n");
    break;
   }
   VAR_10 += VAR_17;
   VAR_11 -= VAR_17;
  }
  if (VAR_9 == VAR_8->optsnr)
   return VAR_12;
  else
   return 0;
 }

 return 0;
}
