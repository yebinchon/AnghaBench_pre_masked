
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_buffer {int offset; int size; int data; } ;


 size_t FUNC_0 (int ,int ,int *,unsigned char*,int) ;
 unsigned char* VAR_0 ;

int FUNC_1(struct cudbg_buffer *VAR_1)
{
 unsigned char VAR_2[8];
 size_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1->data, VAR_1->size,
       &VAR_1->offset, VAR_2, 8);

 if (VAR_3 < 8)
  return 0;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  if (VAR_2[VAR_4] != VAR_0[VAR_4])
   return 0;

 return -1;
}
