
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint32_t ;
struct pt_packet_mwait {void* ext; void* hints; } ;
struct pt_config {int const* end; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_1(struct pt_packet_mwait *VAR_6, const uint8_t *VAR_7,
        const struct pt_config *VAR_8)
{
 if (!VAR_6 || !VAR_7 || !VAR_8)
  return -VAR_4;

 if (VAR_8->end < VAR_7 + VAR_5)
  return -VAR_3;

 VAR_6->hints = (uint32_t) FUNC_0(VAR_7 + VAR_0,
           VAR_2);
 VAR_6->ext = (uint32_t) FUNC_0(VAR_7 + VAR_0 +
         VAR_2,
         VAR_1);
 return VAR_5;
}
