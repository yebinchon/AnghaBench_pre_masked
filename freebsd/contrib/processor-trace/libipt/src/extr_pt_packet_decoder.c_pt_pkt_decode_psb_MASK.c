
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_decoder {int config; int pos; } ;
struct pt_packet {int size; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;

int FUNC_1(struct pt_packet_decoder *VAR_2,
        struct pt_packet *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_2->pos, &VAR_2->config);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->type = VAR_0;
 VAR_3->size = (uint8_t) VAR_4;

 return VAR_4;
}
