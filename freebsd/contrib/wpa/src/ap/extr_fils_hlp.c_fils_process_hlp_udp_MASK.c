
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct udphdr {int uh_sum; int uh_ulen; int uh_dport; int uh_sport; } ;
struct sta_info {int dummy; } ;
struct iphdr {int dummy; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*,int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct hostapd_data *VAR_3,
    struct sta_info *VAR_4, const u8 *VAR_5,
    const u8 *VAR_6, size_t VAR_7)
{
 const struct iphdr *VAR_8;
 const struct udphdr *VAR_9;
 u16 VAR_10, VAR_11, VAR_12;

 if (VAR_7 < sizeof(*VAR_8) + sizeof(*VAR_9))
  return 0;
 VAR_8 = (const struct iphdr *) VAR_6;
 VAR_9 = (const struct udphdr *) (VAR_8 + 1);
 VAR_10 = FUNC_1(VAR_9->uh_sport);
 VAR_11 = FUNC_1(VAR_9->uh_dport);
 VAR_12 = FUNC_1(VAR_9->uh_ulen);
 FUNC_2(VAR_2,
     "FILS: HLP request UDP: sport=%u dport=%u ulen=%u sum=0x%x",
     VAR_10, VAR_11, VAR_12, FUNC_1(VAR_9->uh_sum));

 if (VAR_12 < sizeof(*VAR_9) || VAR_12 > VAR_7 - sizeof(*VAR_8))
  return 0;

 if (VAR_11 == VAR_1 && VAR_10 == VAR_0) {
  return FUNC_0(VAR_3, VAR_4, (const u8 *) (VAR_9 + 1),
          VAR_12 - sizeof(*VAR_9));
 }

 return 0;
}
