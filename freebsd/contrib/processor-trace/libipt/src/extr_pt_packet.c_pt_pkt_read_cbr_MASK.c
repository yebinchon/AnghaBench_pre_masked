
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_cbr {int ratio; } ;
struct pt_config {int const* end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct pt_packet_cbr *VAR_3, const uint8_t *VAR_4,
      const struct pt_config *VAR_5)
{
 if (!VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_1;

 if (VAR_5->end < VAR_4 + VAR_2)
  return -VAR_0;

 VAR_3->ratio = VAR_4[2];

 return VAR_2;
}
