
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_buffer {scalar_t__ size; scalar_t__ offset; int * data; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;

void FUNC_1(struct cudbg_buffer *VAR_0,
     struct cudbg_buffer *VAR_1)
{
 VAR_1->size += VAR_0->size;



 FUNC_0(VAR_0->data, 0, VAR_0->size);
 VAR_0->data = ((void*)0);
 VAR_0->offset = 0;
 VAR_0->size = 0;
}
