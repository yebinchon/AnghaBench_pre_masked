
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_mtc {int ctc; } ;
struct pt_config {int const* end; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct pt_packet_mtc *VAR_4, const uint8_t *VAR_5,
      const struct pt_config *VAR_6)
{
 if (!VAR_4 || !VAR_5 || !VAR_6)
  return -VAR_2;

 if (VAR_6->end < VAR_5 + VAR_3)
  return -VAR_1;

 VAR_4->ctc = VAR_5[VAR_0];

 return VAR_3;
}
