
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_hdr {int data_len; } ;
struct cudbg_entity_hdr {int size; int next_ext_offset; } ;
struct cudbg_buffer {int size; int offset; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, u32 *VAR_2,
       struct cudbg_buffer *VAR_3,
       struct cudbg_entity_hdr **VAR_4)
{
 struct cudbg_hdr *VAR_5 = (struct cudbg_hdr *)VAR_1;
 int VAR_6 = 0;
 u32 VAR_7 = VAR_5->data_len;
 *VAR_2 = 0;

 if (VAR_3->size - VAR_3->offset <=
   sizeof(struct cudbg_entity_hdr)) {
  VAR_6 = VAR_0;
  goto err;
 }

 *VAR_4 = (struct cudbg_entity_hdr *)
         ((char *)VAR_1 + VAR_5->data_len);


 while ((*VAR_4)->size) {

  VAR_7 += sizeof(struct cudbg_entity_hdr) +
         (*VAR_4)->size;

  *VAR_2 += (*VAR_4)->size +
         sizeof(struct cudbg_entity_hdr);

  if (VAR_3->size - VAR_3->offset + *VAR_2 <=
   sizeof(struct cudbg_entity_hdr)) {
   VAR_6 = VAR_0;
   goto err;
  }

  if (VAR_7 != (*VAR_4)->next_ext_offset) {
   VAR_7 -= sizeof(struct cudbg_entity_hdr) +
         (*VAR_4)->size;
   break;
  }

  (*VAR_4)->next_ext_offset = *VAR_2;

  *VAR_4 = (struct cudbg_entity_hdr *)
        ((char *)VAR_1 +
        VAR_7);
 }


 VAR_3->offset = VAR_7;
err:
 return VAR_6;
}
