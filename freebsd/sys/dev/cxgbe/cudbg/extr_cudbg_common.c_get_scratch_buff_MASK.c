
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cudbg_buffer {scalar_t__ size; int offset; char* data; } ;


 int VAR_0 ;

int FUNC_0(struct cudbg_buffer *VAR_1, u32 VAR_2,
       struct cudbg_buffer *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_1->size - VAR_2;

 if (VAR_1->offset > (int)VAR_4 || VAR_1->size < VAR_2) {
  VAR_5 = VAR_0;
  goto err;
 } else {
  VAR_3->data = (char *)VAR_1->data + VAR_4;
  VAR_3->offset = 0;
  VAR_3->size = VAR_2;
  VAR_1->size -= VAR_2;
 }

err:
 return VAR_5;
}
