
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cudbg_buffer {int size; scalar_t__ offset; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (unsigned char*,unsigned long,unsigned char*,unsigned long) ;
 int FUNC_1 (struct cudbg_buffer*,unsigned long,struct cudbg_buffer*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int FUNC_3 (struct cudbg_buffer*,int*,int*,unsigned long*,unsigned long*,unsigned long*) ;
 unsigned long FUNC_4 (scalar_t__,scalar_t__,scalar_t__*,unsigned char*,unsigned long) ;
 int FUNC_5 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 unsigned long FUNC_6 (long,unsigned char*,unsigned long) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__*,unsigned char*,unsigned long) ;

int FUNC_8(struct cudbg_buffer *VAR_5,
        struct cudbg_buffer *VAR_6)
{
 struct cudbg_buffer VAR_7;
 struct cudbg_buffer VAR_8;
 unsigned char *VAR_9;
 unsigned char *VAR_10;
 unsigned char VAR_11[VAR_1];
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16 = 0;
 unsigned long VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;
 u32 VAR_20 = 0;
 int VAR_21, VAR_22, VAR_23;

 if (VAR_6->size < 2 * VAR_0)
  return VAR_4;

 VAR_23 = FUNC_1(VAR_6, VAR_0,
         &VAR_7);

 if (VAR_23)
  goto err_cbuff;

 VAR_23 = FUNC_1(VAR_6, VAR_0,
         &VAR_8);
 if (VAR_23)
  goto err_dcbuff;

 VAR_9 = (unsigned char *)VAR_7.data;
 VAR_10 = (unsigned char *)VAR_8.data;



 for (;;) {
  if (VAR_5->offset > VAR_5->size)
   break;

  VAR_23 = FUNC_3(VAR_5, &VAR_21, &VAR_22,
     &VAR_12, &VAR_13,
     &VAR_14);
  if (VAR_23 != 0)
   break;


  if ((VAR_21 == 1) && (VAR_12 > 10) &&
      (VAR_12 < VAR_0)) {

   VAR_19 = FUNC_4(VAR_5->data, VAR_5->size,
         &VAR_5->offset, VAR_11,
         VAR_12);

   if (VAR_19 == 0)
    return 0;

   VAR_15 = FUNC_6(1L, VAR_11, VAR_12);
   if (VAR_15 != VAR_13)
    return VAR_2;

   VAR_20 = (u32)FUNC_2(VAR_11);

   if (VAR_6->size < VAR_20) {

    VAR_6->size = 2 * VAR_0 +
      VAR_20;
    VAR_5->offset -= VAR_12 + 16;
    return VAR_4;
   }
   VAR_16 = 0;

  }

  if (VAR_12 > VAR_0) {

   FUNC_5(&VAR_8, VAR_6);
   FUNC_5(&VAR_7, VAR_6);


   VAR_23 = FUNC_1(VAR_6, VAR_12,
           &VAR_7);
   if (VAR_23)
    goto err_cbuff;

   VAR_23 = FUNC_1(VAR_6, VAR_12,
           &VAR_8);
   if (VAR_23)
    goto err_dcbuff;

   VAR_9 = (unsigned char *)VAR_7.data;
   VAR_10 = (unsigned char *)VAR_8.data;
  }

  if ((VAR_21 == 17) && VAR_20) {

   switch (VAR_22) {

   case 0:
    VAR_16 += VAR_12;
    VAR_18 = VAR_12;
    VAR_15 = 1L;
    for (;;) {

     VAR_17 = (VAR_0 < VAR_18) ?
         VAR_0 : VAR_18;
     VAR_19 =
     FUNC_4(VAR_5->data,
            VAR_5->size,
            &VAR_5->offset, VAR_11,
            VAR_17);

     if (VAR_19 == 0)
      return 0;

     FUNC_7(VAR_6->data,
           VAR_6->size,
           &VAR_6->offset, VAR_11,
           VAR_19);
     VAR_15 = FUNC_6(VAR_15,
          VAR_11,
          VAR_19);
     VAR_18 -= VAR_19;



     if (VAR_15 != VAR_13)
      return
      VAR_2;
    }

    break;


   case 1:
    VAR_19 = FUNC_4(VAR_5->data,
          VAR_5->size,
          &VAR_5->offset,
          VAR_9,
          VAR_12);

    if (VAR_19 == 0)
     return 0;

    VAR_15 = FUNC_6(1L, VAR_9,
         VAR_12);
    VAR_16 += VAR_14;


    if (VAR_15 != VAR_13) {
     return VAR_2;
    } else {

     VAR_18 =
     FUNC_0(VAR_9,
         VAR_12,
         VAR_10,
         VAR_14);

     if (VAR_18 != VAR_14) {
      VAR_23 =
      VAR_3;
      goto err;
     } else {
      FUNC_7(VAR_6->data,
            VAR_6->size,
            &VAR_6->offset,
            VAR_10,
            VAR_14);
     }
    }
    break;

   default:
    break;
   }

  }

 }

err:
 FUNC_5(&VAR_8, VAR_6);
err_dcbuff:
 FUNC_5(&VAR_7, VAR_6);

err_cbuff:
 return VAR_23;
}
