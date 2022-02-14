
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef void* u_int ;
typedef void* u_char ;
struct ip {int ip_dst; int ip_src; } ;
struct cksum_vec {int len; int const* ptr; } ;
typedef int ph ;
typedef int netdissect_options ;


 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct cksum_vec*,int) ;
 int FUNC_4 (int *,struct ip const*) ;

int
FUNC_5(netdissect_options *VAR_0,
                 const struct ip *VAR_1, const uint8_t *VAR_2,
                 u_int VAR_3, u_int VAR_4, u_int VAR_5)
{
 struct phdr {
  uint32_t src;
  uint32_t dst;
  u_char mbz;
  u_char proto;
  uint16_t len;
 } VAR_6;
 struct cksum_vec VAR_7[2];


 VAR_6.len = FUNC_2((uint16_t)VAR_3);
 VAR_6.mbz = 0;
 VAR_6.proto = VAR_5;
 FUNC_1(&VAR_6.src, &VAR_1->ip_src, sizeof(uint32_t));
 if (FUNC_0(VAR_1) == 5)
  FUNC_1(&VAR_6.dst, &VAR_1->ip_dst, sizeof(uint32_t));
 else
  VAR_6.dst = FUNC_4(VAR_0, VAR_1);

 VAR_7[0].ptr = (const uint8_t *)(void *)&VAR_6;
 VAR_7[0].len = sizeof(VAR_6);
 VAR_7[1].ptr = VAR_2;
 VAR_7[1].len = VAR_4;
 return (FUNC_3(VAR_7, 2));
}
