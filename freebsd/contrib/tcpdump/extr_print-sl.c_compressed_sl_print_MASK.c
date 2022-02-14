
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct tcphdr {int dummy; } ;
struct ip {int dummy; } ;
typedef int netdissect_options ;
typedef int int32_t ;


 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ FUNC_2 (struct tcphdr const*) ;
 size_t VAR_7 ;
 int** VAR_8 ;
 int * FUNC_3 (int *,char*,int const*) ;
 int * FUNC_4 (int *,int const*) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_9,
                    const u_char *VAR_10, const struct ip *VAR_11,
                    u_int VAR_12, int VAR_13)
{
 register const u_char *VAR_14 = VAR_10;
 register u_int VAR_15, VAR_16;

 VAR_15 = *VAR_14++;
 if (VAR_15 & VAR_1) {
  VAR_7 = *VAR_14++;
  FUNC_1((VAR_9, "ctcp %d", VAR_7));
 } else
  FUNC_1((VAR_9, "ctcp *"));


 VAR_14 += 2;

 switch (VAR_15 & VAR_6) {
 case 128:
  FUNC_1((VAR_9, " *SA+%d", VAR_8[VAR_13][VAR_7]));
  break;

 case 129:
  FUNC_1((VAR_9, " *S+%d", VAR_8[VAR_13][VAR_7]));
  break;

 default:
  if (VAR_15 & VAR_4)
   VAR_14 = FUNC_3(VAR_9, "U=", VAR_14);
  if (VAR_15 & VAR_5)
   VAR_14 = FUNC_4(VAR_9, VAR_14);
  if (VAR_15 & VAR_0)
   VAR_14 = FUNC_3(VAR_9, "A+", VAR_14);
  if (VAR_15 & VAR_3)
   VAR_14 = FUNC_3(VAR_9, "S+", VAR_14);
  break;
 }
 if (VAR_15 & VAR_2)
  VAR_14 = FUNC_3(VAR_9, "I+", VAR_14);






 VAR_16 = FUNC_0(VAR_11);
 VAR_16 += FUNC_2((const struct tcphdr *)&((const int32_t *)VAR_11)[VAR_16]);
 VAR_8[VAR_13][VAR_7] = VAR_12 - (VAR_16 << 2);
 FUNC_1((VAR_9, " %d (%ld)", VAR_8[VAR_13][VAR_7], (long)(VAR_14 - VAR_10)));
}
