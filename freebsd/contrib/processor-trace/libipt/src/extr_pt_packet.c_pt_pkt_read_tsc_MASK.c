
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_tsc {int tsc; } ;
struct pt_config {int const* end; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct pt_packet_tsc *VAR_5, const uint8_t *VAR_6,
      const struct pt_config *VAR_7)
{
 if (!VAR_5 || !VAR_6 || !VAR_7)
  return -VAR_3;

 if (VAR_7->end < VAR_6 + VAR_4)
  return -VAR_2;

 VAR_5->tsc = FUNC_0(VAR_6 + VAR_0, VAR_1);

 return VAR_4;
}
