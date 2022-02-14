
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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char,char,char) ;
 int FUNC_2 (int ,int,int ,void*,int ,void*,int ,void*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct vpoio_data *VAR_8, int *VAR_9, int VAR_10)
{
 VAR_4;

 device_t VAR_11 = FUNC_0(VAR_8->vpo_dev);
 char VAR_12, VAR_13, VAR_14;
 int VAR_15;


 if (VAR_9)
  *VAR_9 = 0;

 FUNC_2(VAR_7, 4, VAR_1, (void *)&VAR_12,
   VAR_2, (void *)&VAR_13, VAR_3, (void *)&VAR_14,
   VAR_0, 0x30);

 FUNC_3(VAR_11, VAR_8->vpo_dev, VAR_7, &VAR_15);

 if ((VAR_12 != (char)0xb8 || VAR_13 != (char)0x18 || VAR_14 != (char)0x38)) {
  if (VAR_6)
   FUNC_1(VAR_8->vpo_dev,
       "(disconnect) s1=0x%x s2=0x%x, s3=0x%x\n",
       VAR_12 & 0xff, VAR_13 & 0xff, VAR_14 & 0xff);
  if (VAR_9)
   *VAR_9 = VAR_5;
 }

 if (VAR_10)
  return (FUNC_4(VAR_11, VAR_8->vpo_dev));
 else
  return (0);
}
