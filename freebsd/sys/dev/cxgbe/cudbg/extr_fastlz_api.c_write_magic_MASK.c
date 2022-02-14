
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_buffer {int offset; int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int) ;

int FUNC_1(struct cudbg_buffer *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->data, VAR_1->size, &VAR_1->offset,
     VAR_0, 8);

 return VAR_2;
}
