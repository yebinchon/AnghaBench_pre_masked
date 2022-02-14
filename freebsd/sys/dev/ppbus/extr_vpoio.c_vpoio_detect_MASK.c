
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; int vpo_mode_found; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct vpoio_data*) ;
 int FUNC_7 (struct vpoio_data*) ;

__attribute__((used)) static int
FUNC_8(struct vpoio_data *VAR_13)
{
 device_t VAR_14 = FUNC_0(VAR_13->vpo_dev);
 int VAR_15, VAR_16;


 if ((VAR_15 = FUNC_4(VAR_14, VAR_13->vpo_dev, VAR_0)))
  return (VAR_15);


 FUNC_2(VAR_14, VAR_13->vpo_dev, VAR_12, &VAR_16);


 if (FUNC_5(VAR_14, VAR_1) != -1) {


  FUNC_2(VAR_14, VAR_13->vpo_dev, VAR_10, &VAR_16);
 }



 if (!FUNC_6(VAR_13)) {







  if (FUNC_5(VAR_14, VAR_3) != -1) {
   VAR_13->vpo_mode_found = VAR_7;
  } else {
   if (FUNC_5(VAR_14, VAR_2) == -1)
    goto error;

   VAR_13->vpo_mode_found = VAR_6;
  }


  FUNC_2(VAR_14, VAR_13->vpo_dev, VAR_11, &VAR_16);
  if (!FUNC_6(VAR_13)) {
   VAR_13->vpo_mode_found = VAR_8;
   if (VAR_9)
    FUNC_1(VAR_13->vpo_dev,
        "can't connect to the drive\n");


   FUNC_2(VAR_14, VAR_13->vpo_dev, VAR_12,
     &VAR_16);
   goto error;
  }
 } else {
  VAR_13->vpo_mode_found = VAR_5;
 }


 FUNC_7(VAR_13);

 FUNC_2(VAR_14, VAR_13->vpo_dev, VAR_12, &VAR_16);



 if (FUNC_6(VAR_13)) {
  if (VAR_9)
   FUNC_1(VAR_13->vpo_dev,
       "can't disconnect from the drive\n");
  goto error;
 }

 FUNC_3(VAR_14, VAR_13->vpo_dev);
 return (0);

error:
 FUNC_3(VAR_14, VAR_13->vpo_dev);
 return (VAR_4);
}
