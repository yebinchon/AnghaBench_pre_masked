
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint8_t ;
typedef unsigned long long uint64_t ;
struct pt_packet_tnt {unsigned long long payload; unsigned long long bit_size; } ;


 unsigned long long FUNC_0 (unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pt_packet_tnt *VAR_2, uint64_t VAR_3)
{
 uint8_t VAR_4;

 if (!VAR_2)
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return -VAR_0;


 VAR_3 &= ~(1ull << VAR_4);

 VAR_2->payload = VAR_3;
 VAR_2->bit_size = VAR_4;

 return 0;
}
