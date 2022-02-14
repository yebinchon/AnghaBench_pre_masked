
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_hdr {int * reserved; } ;
struct cudbg_buffer {unsigned int size; unsigned char* data; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned char*,unsigned int,unsigned char*) ;
 int FUNC_1 (struct cudbg_buffer*,int ,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 unsigned long FUNC_3 (long,unsigned char*,unsigned int) ;
 int FUNC_4 (struct cudbg_buffer*,int,int,unsigned int,unsigned long,unsigned int) ;
 int FUNC_5 (unsigned char*,unsigned int,int *,unsigned char*,unsigned int) ;

int FUNC_6(struct cudbg_buffer *VAR_1, struct cudbg_buffer *VAR_2)
{
 struct cudbg_buffer VAR_3;
 struct cudbg_hdr *VAR_4;
 unsigned long VAR_5;
 unsigned char *VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9 = 2, VAR_10 = 0;
 int VAR_11 = 1;

 VAR_7 = VAR_1->size;
 VAR_10 = FUNC_1(VAR_2, VAR_0, &VAR_3);

 if (VAR_10)
  goto err;

 VAR_6 = (unsigned char *)VAR_3.data;

 if (VAR_7 < 32)
  VAR_11 = 0;

 VAR_4 = (struct cudbg_hdr *) VAR_2->data;

 switch (VAR_11) {
 case 1:
  VAR_8 = FUNC_0(VAR_9, VAR_1->data,
         VAR_7, VAR_6);

  VAR_5 = FUNC_3(1L, VAR_6, VAR_8);

  if ((VAR_8 > 62000) && (VAR_4->reserved[7] < (u32)
      VAR_8))
   VAR_4->reserved[7] = (u32) VAR_8;

  VAR_10 = FUNC_4(VAR_2, 17, 1, VAR_8, VAR_5,
     VAR_7);

  if (VAR_10)
   goto err_put_buff;

  VAR_10 = FUNC_5(VAR_2->data, VAR_2->size,
      &VAR_2->offset, VAR_6, VAR_8);

  if (VAR_10)
   goto err_put_buff;

  break;


 case 0:
 default:
  VAR_5 = FUNC_3(1L, VAR_1->data, VAR_7);

  VAR_10 = FUNC_4(VAR_2, 17, 0, VAR_7, VAR_5,
     VAR_7);

  if (VAR_10)
   goto err_put_buff;

  VAR_10 = FUNC_5(VAR_2->data, VAR_2->size,
      &VAR_2->offset, VAR_1->data,
      VAR_7);
  if (VAR_10)
   goto err_put_buff;

  break;
 }

err_put_buff:
 FUNC_2(&VAR_3, VAR_2);
err:
 return VAR_10;
}
