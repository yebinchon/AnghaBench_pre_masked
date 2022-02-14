
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet_decoder {int dummy; } ;
struct pt_packet {int size; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct pt_packet_decoder *VAR_3,
    struct pt_packet *VAR_4)
{
 (void) VAR_3;

 if (!VAR_4)
  return -VAR_1;

 VAR_4->type = VAR_0;
 VAR_4->size = VAR_2;

 return VAR_2;
}
