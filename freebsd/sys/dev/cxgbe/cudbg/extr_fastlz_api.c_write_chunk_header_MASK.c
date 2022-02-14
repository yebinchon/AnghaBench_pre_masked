
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_buffer {int offset; int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,unsigned char*,int) ;

int FUNC_1(struct cudbg_buffer *VAR_1, int VAR_2, int VAR_3,
         unsigned long VAR_4, unsigned long VAR_5,
         unsigned long VAR_6)
{
 unsigned char VAR_7[VAR_0];
 int VAR_8 = 0;

 VAR_7[0] = VAR_2 & 255;
 VAR_7[1] = (unsigned char)(VAR_2 >> 8);
 VAR_7[2] = VAR_3 & 255;
 VAR_7[3] = (unsigned char)(VAR_3 >> 8);
 VAR_7[4] = VAR_4 & 255;
 VAR_7[5] = (VAR_4 >> 8) & 255;
 VAR_7[6] = (VAR_4 >> 16) & 255;
 VAR_7[7] = (VAR_4 >> 24) & 255;
 VAR_7[8] = VAR_5 & 255;
 VAR_7[9] = (VAR_5 >> 8) & 255;
 VAR_7[10] = (VAR_5 >> 16) & 255;
 VAR_7[11] = (VAR_5 >> 24) & 255;
 VAR_7[12] = VAR_6 & 255;
 VAR_7[13] = (VAR_6 >> 8) & 255;
 VAR_7[14] = (VAR_6 >> 16) & 255;
 VAR_7[15] = (VAR_6 >> 24) & 255;

 VAR_8 = FUNC_0(VAR_1->data, VAR_1->size, &VAR_1->offset,
     VAR_7, 16);

 return VAR_8;
}
