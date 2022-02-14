
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_tnt {int dummy; } ;
struct pt_config {int dummy; } ;


 int const VAR_0 ;
 int FUNC_0 (struct pt_packet_tnt*,int const) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct pt_packet_tnt *VAR_3, const uint8_t *VAR_4,
        const struct pt_config *VAR_5)
{
 int VAR_6;

 (void) VAR_5;

 if (!VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3, VAR_4[0] >> VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_2;
}
