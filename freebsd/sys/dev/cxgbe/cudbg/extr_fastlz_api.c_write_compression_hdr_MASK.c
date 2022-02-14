
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_buffer {unsigned long size; int offset; scalar_t__ data; } ;


 int FUNC_0 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (char*) ;
 unsigned long FUNC_3 (unsigned long,...) ;
 int FUNC_4 (struct cudbg_buffer*,int,int ,int,unsigned long,int ) ;
 int FUNC_5 (struct cudbg_buffer*) ;
 int FUNC_6 (scalar_t__,unsigned long,int *,...) ;

int FUNC_7(struct cudbg_buffer *VAR_0,
     struct cudbg_buffer *VAR_1)
{
 struct cudbg_buffer VAR_2;
 unsigned long VAR_3 = VAR_0->size;
 unsigned char *VAR_4;
 unsigned long VAR_5;
 int VAR_6;
 char *VAR_7 = "abc";


 VAR_6 = FUNC_0(VAR_1, 10, &VAR_2);

 if (VAR_6)
  goto err;

 VAR_4 = (unsigned char *)VAR_2.data;

 VAR_6 = FUNC_5(VAR_1);

 if (VAR_6)
  goto err1;


 VAR_4[0] = VAR_3 & 255;
 VAR_4[1] = (VAR_3 >> 8) & 255;
 VAR_4[2] = (VAR_3 >> 16) & 255;
 VAR_4[3] = (VAR_3 >> 24) & 255;
 VAR_4[4] = 0;
 VAR_4[5] = 0;
 VAR_4[6] = 0;
 VAR_4[7] = 0;
 VAR_4[8] = (FUNC_2(VAR_7)+1) & 255;
 VAR_4[9] = (unsigned char)((FUNC_2(VAR_7)+1) >> 8);
 VAR_5 = 1L;
 VAR_5 = FUNC_3(VAR_5, VAR_4, 10);
 VAR_5 = FUNC_3(VAR_5, VAR_7,
      (int)FUNC_2(VAR_7)+1);

 VAR_6 = FUNC_4(VAR_1, 1, 0,
    10+(unsigned long)FUNC_2(VAR_7)+1,
    VAR_5, 0);

 if (VAR_6)
  goto err1;

 VAR_6 = FUNC_6(VAR_1->data, VAR_1->size,
     &(VAR_1->offset), VAR_4, 10);

 if (VAR_6)
  goto err1;

 VAR_6 = FUNC_6(VAR_1->data, VAR_1->size,
      &(VAR_1->offset), VAR_7,
      (u32)FUNC_2(VAR_7)+1);

 if (VAR_6)
  goto err1;

err1:
 FUNC_1(&VAR_2, VAR_1);
err:
 return VAR_6;
}
