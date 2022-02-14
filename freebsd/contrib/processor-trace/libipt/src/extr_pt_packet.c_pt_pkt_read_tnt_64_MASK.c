
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct pt_packet_tnt {int dummy; } ;
struct pt_config {int const* end; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_packet_tnt*,int ) ;
 int FUNC_1 (int const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct pt_packet_tnt *VAR_5, const uint8_t *VAR_6,
         const struct pt_config *VAR_7)
{
 uint64_t VAR_8;
 int VAR_9;

 if (!VAR_6 || !VAR_7)
  return -VAR_3;

 if (VAR_7->end < VAR_6 + VAR_4)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_6 + VAR_0, VAR_1);

 VAR_9 = FUNC_0(VAR_5, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 return VAR_4;
}
