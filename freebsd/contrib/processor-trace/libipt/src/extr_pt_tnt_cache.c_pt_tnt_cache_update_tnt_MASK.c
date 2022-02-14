
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_tnt_cache {int index; int tnt; } ;
struct pt_packet_tnt {int bit_size; int payload; } ;
struct pt_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct pt_tnt_cache *VAR_3,
       const struct pt_packet_tnt *VAR_4,
       const struct pt_config *VAR_5)
{
 uint8_t VAR_6;

 (void) VAR_5;

 if (!VAR_3 || !VAR_4)
  return -VAR_2;

 if (VAR_3->index)
  return -VAR_0;

 VAR_6 = VAR_4->bit_size;
 if (!VAR_6)
  return -VAR_1;

 VAR_3->tnt = VAR_4->payload;
 VAR_3->index = 1ull << (VAR_6 - 1);

 return 0;
}
