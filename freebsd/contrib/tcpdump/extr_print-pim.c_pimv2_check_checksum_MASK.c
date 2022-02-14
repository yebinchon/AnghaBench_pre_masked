
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
struct cksum_vec {scalar_t__ len; int const* ptr; } ;
typedef int netdissect_options ;
typedef enum checksum_status { ____Placeholder_checksum_status } checksum_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (int const,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct cksum_vec*,int) ;
 scalar_t__ FUNC_3 (int *,struct ip6_hdr const*,int const*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static enum checksum_status
FUNC_4(netdissect_options *VAR_4, const u_char *VAR_5,
       const u_char *VAR_6, u_int VAR_7)
{
 const struct ip *VAR_8;
 u_int VAR_9;

 if (!FUNC_1(VAR_5[0], VAR_7)) {

  return (VAR_3);
 }
 VAR_8 = (const struct ip *)VAR_6;
 if (FUNC_0(VAR_8) == 4) {
  struct cksum_vec VAR_10[1];

  VAR_10[0].ptr = VAR_5;
  VAR_10[0].len = VAR_7;
  VAR_9 = FUNC_2(VAR_10, 1);
  return (VAR_9 ? VAR_1 : VAR_0);
 } else if (FUNC_0(VAR_8) == 6) {
  const struct ip6_hdr *VAR_11;

  VAR_11 = (const struct ip6_hdr *)VAR_6;
  VAR_9 = FUNC_3(VAR_4, VAR_11, VAR_5, VAR_7, VAR_7, VAR_2);
  return (VAR_9 ? VAR_1 : VAR_0);
 } else {
  return (VAR_3);
 }
}
