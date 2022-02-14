
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cudbg_entity_hdr {int start_offset; int num_pad; int size; } ;
struct cudbg_buffer {int offset; scalar_t__ data; } ;


 int FUNC_0 (int*,int**,int) ;

__attribute__((used)) static void FUNC_1(struct cudbg_buffer *VAR_0,
   struct cudbg_entity_hdr *VAR_1)
{
 u8 VAR_2[4] = {0};
 u8 VAR_3, VAR_4;

 VAR_4 = (VAR_0->offset - VAR_1->start_offset) % 4;
 VAR_3 = 4 - VAR_4;
 if (VAR_4) {
  FUNC_0(((u8 *) VAR_0->data) + VAR_0->offset, &VAR_2,
         VAR_3);
  VAR_0->offset += VAR_3;
  VAR_1->num_pad = VAR_3;
 }

 VAR_1->size = VAR_0->offset - VAR_1->start_offset;
}
