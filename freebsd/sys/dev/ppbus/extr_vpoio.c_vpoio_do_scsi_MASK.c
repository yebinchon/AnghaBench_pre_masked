
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct vpoio_data*,int) ;
 int FUNC_4 (struct vpoio_data*) ;
 int FUNC_5 (struct vpoio_data*) ;
 int FUNC_6 (struct vpoio_data*,char*,int) ;
 int FUNC_7 (struct vpoio_data*,char*,int) ;
 int FUNC_8 (struct vpoio_data*,int,int) ;
 char FUNC_9 (struct vpoio_data*,int ) ;

int
FUNC_10(struct vpoio_data *VAR_15, int VAR_16, int VAR_17, char *VAR_18,
  int VAR_19, char *VAR_20, int VAR_21, int *VAR_22, int *VAR_23,
  int *VAR_24)
{
 device_t VAR_25 = FUNC_1(VAR_15->vpo_dev);
 char VAR_26;
 char VAR_27, VAR_28 = 0;
 int VAR_29, VAR_30 = 0;
 int VAR_31;
 if ((VAR_30 = FUNC_3(VAR_15, VAR_5|VAR_4)))
  return (VAR_30);

 if (!FUNC_5(VAR_15)) {
  *VAR_24 = VAR_7;
  goto error;
 }

 if ((*VAR_24 = FUNC_8(VAR_15,VAR_16,VAR_17)))
  goto error;






 FUNC_2(VAR_25, VAR_0 | VAR_3 | VAR_1 | VAR_2);

 for (VAR_31 = 0; VAR_31 < VAR_19; VAR_31++) {
  if (FUNC_9(VAR_15, VAR_12) != (char)0xe0) {
   *VAR_24 = VAR_6;
   goto error;
  }
  if (FUNC_7(VAR_15, &VAR_18[VAR_31], 1)) {
   *VAR_24 = VAR_10;
   goto error;
  }
 }





 *VAR_23 = 0;
 for (;;) {

  if (!(VAR_26 = FUNC_9(VAR_15, VAR_13))) {
   *VAR_24 = VAR_11;
   goto error;
  }


  if (VAR_26 == (char)0xf0)
   break;

  if (*VAR_23 >= VAR_21) {
   *VAR_24 = VAR_8;
   goto error;
  }




  if (FUNC_0(VAR_25) || VAR_26 == (char)0xc0)
   VAR_29 = (((VAR_21 - *VAR_23) >= VAR_14)) ?
    VAR_14 : 1;
  else
   VAR_29 = 1;


  if (VAR_26 == (char)0xc0)
   VAR_30 = FUNC_7(VAR_15, &VAR_20[*VAR_23], VAR_29);
  else
   VAR_30 = FUNC_6(VAR_15, &VAR_20[*VAR_23], VAR_29);

  if (VAR_30) {
   *VAR_24 = VAR_30;
   goto error;
  }

  *VAR_23 += VAR_29;
 }

 if (FUNC_6(VAR_15, &VAR_27, 1)) {
  *VAR_24 = VAR_9;
  goto error;
 }


 if (FUNC_9(VAR_15, VAR_12) == (char)0xf0)
  if (FUNC_6(VAR_15, &VAR_28, 1)) {
   *VAR_24 = VAR_9 + 2;
   goto error;
  }

 *VAR_22 = ((int) VAR_28 << 8) | ((int) VAR_27 & 0xff);

error:

 FUNC_4(VAR_15);
 return (0);
}
