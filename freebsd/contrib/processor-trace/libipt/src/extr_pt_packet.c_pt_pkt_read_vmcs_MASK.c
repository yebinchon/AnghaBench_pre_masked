
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct pt_packet_vmcs {int base; } ;
struct pt_config {int const* end; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_1(struct pt_packet_vmcs *VAR_6, const uint8_t *VAR_7,
       const struct pt_config *VAR_8)
{
 uint64_t VAR_9;

 if (!VAR_6 || !VAR_7 || !VAR_8)
  return -VAR_4;

 if (VAR_8->end < VAR_7 + VAR_5)
  return -VAR_3;

 VAR_9 = FUNC_0(VAR_7 + VAR_0, VAR_2);

 VAR_6->base = VAR_9 << VAR_1;

 return VAR_5;
}
