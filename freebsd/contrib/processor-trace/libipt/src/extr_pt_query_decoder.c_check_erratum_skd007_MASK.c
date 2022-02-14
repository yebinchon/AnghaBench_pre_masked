
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ const* end; } ;
struct pt_query_decoder {scalar_t__* pos; TYPE_1__ config; } ;
struct pt_packet_cyc {scalar_t__ value; } ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pt_query_decoder *VAR_2,
    const struct pt_packet_cyc *VAR_3, int VAR_4)
{
 const uint8_t *VAR_5;
 uint16_t VAR_6;

 if (!VAR_2 || !VAR_3 || VAR_4 < 0)
  return -VAR_1;


 if (VAR_4 != 2)
  return 0;

 VAR_6 = (uint16_t) VAR_3->value;


 if ((VAR_6 & ~0x1f) != 0x20)
  return 0;


 VAR_5 = VAR_2->pos + VAR_4;
 if (VAR_2->config.end <= VAR_5)
  return 0;


 if (*VAR_5 != VAR_0)
  return 0;







 return 1;
}
