
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct vpoio_data*,int ,int*,int ) ;
 int FUNC_3 (struct vpoio_data*,int*,int) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_8(struct vpoio_data *VAR_11)
{
 device_t VAR_12 = FUNC_0(VAR_11->vpo_dev);
 int VAR_13;

 if ((VAR_13 = FUNC_6(VAR_12, VAR_11->vpo_dev, VAR_0)))
  return (VAR_13);


 FUNC_3(VAR_11, ((void*)0), 0);

 VAR_11->vpo_mode_found = VAR_8;
 VAR_13 = 1;


 if (FUNC_7(VAR_12, VAR_1) != -1) {
  FUNC_2(VAR_11, VAR_0, &VAR_13, 0);
 }


 if (VAR_13) {
  if (FUNC_7(VAR_12, VAR_3) != -1) {
   FUNC_2(VAR_11, VAR_0, &VAR_13, 0);
  }
  if (VAR_13) {
   if (FUNC_7(VAR_12, VAR_2) != -1) {
    FUNC_2(VAR_11, VAR_0, &VAR_13, 0);
    if (VAR_13)
     goto error;
    VAR_11->vpo_mode_found = VAR_6;
   } else {
    FUNC_1(VAR_11->vpo_dev,
        "NIBBLE mode unavailable!\n");
    goto error;
   }
  } else {
   VAR_11->vpo_mode_found = VAR_7;
  }
 } else {
  VAR_11->vpo_mode_found = VAR_5;
 }


 FUNC_4(VAR_12, VAR_11->vpo_dev, VAR_10, ((void*)0));


 FUNC_3(VAR_11, &VAR_13, 1);




 if (VAR_13) {
  if (VAR_9)
   FUNC_1(VAR_11->vpo_dev,
       "can't disconnect from the drive\n");
  goto error;
 }

 return (0);

error:
 FUNC_5(VAR_12, VAR_11->vpo_dev);
 return (VAR_4);
}
