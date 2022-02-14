
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long long uint64_t ;
struct pt_packet_ip {int ipc; unsigned long long ip; } ;
struct pt_config {int const* end; } ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (int const*,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(struct pt_packet_ip *VAR_4, const uint8_t *VAR_5,
     const struct pt_config *VAR_6)
{
 uint64_t VAR_7;
 uint8_t VAR_8;
 int VAR_9;

 if (!VAR_4 || !VAR_5 || !VAR_6)
  return -VAR_3;

 VAR_8 = (*VAR_5++ >> VAR_0) & VAR_1;

 VAR_7 = 0ull;
 VAR_9 = FUNC_0((enum pt_ip_compression) VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_6->end < VAR_5 + VAR_9)
  return -VAR_2;

 if (VAR_9)
  VAR_7 = FUNC_1(VAR_5, VAR_9);

 VAR_4->ipc = (enum pt_ip_compression) VAR_8;
 VAR_4->ip = VAR_7;

 return VAR_9 + 1;
}
