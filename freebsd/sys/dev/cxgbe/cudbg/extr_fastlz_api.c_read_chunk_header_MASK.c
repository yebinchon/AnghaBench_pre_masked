
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_buffer {int offset; int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,int ,int *,unsigned char*,int) ;

int FUNC_3(struct cudbg_buffer *VAR_1, int *VAR_2, int *VAR_3,
        unsigned long *VAR_4, unsigned long *VAR_5,
        unsigned long *VAR_6)
{
 unsigned char VAR_7[VAR_0];
 int VAR_8 = FUNC_2(VAR_1->data, VAR_1->size,
       &VAR_1->offset, VAR_7, 16);
 if (VAR_8 == 0)
  return 0;

 *VAR_2 = FUNC_0(VAR_7) & 0xffff;
 *VAR_3 = FUNC_0(VAR_7+2) & 0xffff;
 *VAR_4 = FUNC_1(VAR_7+4) & 0xffffffff;
 *VAR_5 = FUNC_1(VAR_7+8) & 0xffffffff;
 *VAR_6 = FUNC_1(VAR_7+12) & 0xffffffff;
 return 0;
}
