
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vpoio_data*,int,int*,int) ;
 int FUNC_5 (struct vpoio_data*,int *,int) ;
 int FUNC_6 (struct vpoio_data*,char*,int) ;
 scalar_t__ FUNC_7 (struct vpoio_data*) ;
 int FUNC_8 (struct vpoio_data*,char*,int) ;
 int FUNC_9 (struct vpoio_data*,int,int) ;
 char FUNC_10 (struct vpoio_data*,int ) ;
 int FUNC_11 (int ,int ,int ,int *) ;
 int VAR_12 ;

int
FUNC_12(struct vpoio_data *VAR_13, int VAR_14, int VAR_15, char *VAR_16,
  int VAR_17, char *VAR_18, int VAR_19, int *VAR_20, int *VAR_21,
  int *VAR_22)
{
 device_t VAR_23 = FUNC_3(VAR_13->vpo_dev);
 char VAR_24;
 char VAR_25, VAR_26 = 0;
 int VAR_27, VAR_28 = 0, VAR_29 = 0;
 int VAR_30;
 int VAR_31 = 0;
 if ((VAR_28 = FUNC_4(VAR_13, VAR_1|VAR_0, &VAR_29, 1)))
  return (VAR_28);

 if (VAR_29) {
  *VAR_22 = VAR_3;
  goto error;
 }




 if ((*VAR_22 = FUNC_9(VAR_13,VAR_14,VAR_15)))
  goto error;




 for (VAR_30 = 0; VAR_30 < VAR_17; VAR_30+=2) {
  if (FUNC_10(VAR_13, VAR_9) != (char)0xa8) {
   *VAR_22 = VAR_2;
   goto error;
  }
  if (FUNC_8(VAR_13, &VAR_16[VAR_30], 2)) {
   *VAR_22 = VAR_7;
   goto error;
  }
 }

 if (!(VAR_24 = FUNC_10(VAR_13, VAR_10))) {
  *VAR_22 = VAR_8;
  goto error;
 }

 if ((VAR_24 & 0x30) == 0x10) {
  if (FUNC_7(VAR_13)) {
   *VAR_22 = VAR_5;
   goto error;
  } else
   VAR_31 = 1;
 }




 *VAR_21 = 0;
 for (;;) {

  if (!(VAR_24 = FUNC_10(VAR_13, VAR_10))) {
   *VAR_22 = VAR_8;
   goto error;
  }


  if (VAR_24 == (char)0xb8)
   break;

  if (*VAR_21 >= VAR_19) {
   *VAR_22 = VAR_4;
   goto error;
  }


  if (VAR_24 == (char)0x88) {
   VAR_27 = (((VAR_19 - *VAR_21) >= VAR_11)) ?
    VAR_11 : 2;

   VAR_28 = FUNC_8(VAR_13, &VAR_18[*VAR_21], VAR_27);
  } else {
   if (!FUNC_0(VAR_23))
    VAR_27 = 1;
   else
    VAR_27 = (((VAR_19 - *VAR_21) >= VAR_11)) ?
     VAR_11 : 1;

   VAR_28 = FUNC_6(VAR_13, &VAR_18[*VAR_21], VAR_27);
  }

  if (VAR_28) {
   *VAR_22 = VAR_28;
   goto error;
  }

  *VAR_21 += VAR_27;
 }

 if ((FUNC_1(VAR_23) ||
   FUNC_2(VAR_23)) && VAR_31)
  FUNC_11(VAR_23, VAR_13->vpo_dev, VAR_12, ((void*)0));




 if (FUNC_7(VAR_13)) {
  *VAR_22 = VAR_5;
  goto error;
 } else
  VAR_31 = 1;

 if (FUNC_6(VAR_13, &VAR_25, 1)) {
  *VAR_22 = VAR_6;
  goto error;
 }


 if (FUNC_10(VAR_13, VAR_9) == (char)0xb8)
  if (FUNC_6(VAR_13, &VAR_26, 1)) {
   *VAR_22 = VAR_6 + 2;
   goto error;
  }


 if (VAR_26 == (char) -1)
  VAR_26 = 0;

 *VAR_20 = ((int) VAR_26 << 8) | ((int) VAR_25 & 0xff);

error:
 if ((FUNC_1(VAR_23) ||
   FUNC_2(VAR_23)) && VAR_31)
  FUNC_11(VAR_23, VAR_13->vpo_dev, VAR_12, ((void*)0));


 FUNC_5(VAR_13, ((void*)0), 1);

 return (0);
}
