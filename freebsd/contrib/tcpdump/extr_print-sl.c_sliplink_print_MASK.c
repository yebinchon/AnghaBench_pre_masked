
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
typedef int u_char ;
struct tcphdr {int dummy; } ;
struct ip {size_t ip_p; } ;
struct TYPE_5__ {scalar_t__ ndo_nflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 size_t FUNC_0 (struct ip const*) ;
 int FUNC_1 (TYPE_1__*) ;


 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_2 (struct tcphdr const*) ;
 int const VAR_4 ;


 int FUNC_3 (TYPE_1__*,int const*,struct ip const*,size_t,int) ;
 size_t VAR_5 ;
 size_t** VAR_6 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_7,
               register const u_char *VAR_8, register const struct ip *VAR_9,
               register u_int VAR_10)
{
 int VAR_11;
 u_int VAR_12;

 VAR_11 = VAR_8[VAR_3];
 switch (VAR_11) {

 case 131:
  FUNC_1((VAR_7, "I "));
  break;

 case 130:
  FUNC_1((VAR_7, "O "));
  break;

 default:
  FUNC_1((VAR_7, "Invalid direction %d ", VAR_11));
  VAR_11 = -1;
  break;
 }
 if (VAR_7->ndo_nflag) {

  register int VAR_13;

  for (VAR_13 = VAR_2; VAR_13 < VAR_2 + VAR_0 - 1; ++VAR_13)
   FUNC_1((VAR_7, "%02x.", VAR_8[VAR_13]));
  FUNC_1((VAR_7, "%02x: ", VAR_8[VAR_2 + VAR_0 - 1]));
  return;
 }
 switch (VAR_8[VAR_2] & 0xf0) {

 case 129:
  FUNC_1((VAR_7, "ip %d: ", VAR_10 + VAR_1));
  break;

 case 128:





  VAR_5 = ((const struct ip *)&VAR_8[VAR_2])->ip_p;
  FUNC_1((VAR_7, "utcp %d: ", VAR_5));
  if (VAR_11 == -1) {

   return;
  }
  VAR_12 = FUNC_0(VAR_9);
  VAR_12 += FUNC_2((const struct tcphdr *)&((const int *)VAR_9)[VAR_12]);
  VAR_6[VAR_11][VAR_5] = VAR_10 - (VAR_12 << 2);
  break;

 default:
  if (VAR_11 == -1) {

   return;
  }
  if (VAR_8[VAR_2] & VAR_4) {
   FUNC_3(VAR_7, &VAR_8[VAR_2], VAR_9,
       VAR_10, VAR_11);
   FUNC_1((VAR_7, ": "));
  } else
   FUNC_1((VAR_7, "slip-%d!: ", VAR_8[VAR_2]));
 }
}
