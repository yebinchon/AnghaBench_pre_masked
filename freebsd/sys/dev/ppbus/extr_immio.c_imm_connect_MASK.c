
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
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char,char,char) ;
 int FUNC_3 (int ,int,int ,int,...) ;
 int FUNC_4 (int ,int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct vpoio_data *VAR_8, int VAR_9, int *VAR_10, int VAR_11)
{
 VAR_4;

 device_t VAR_12 = FUNC_1(VAR_8->vpo_dev);
 char VAR_13, VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;


 if (VAR_10)
  *VAR_10 = 0;

 if (VAR_11)
  if ((VAR_16 = FUNC_5(VAR_12, VAR_8->vpo_dev, VAR_9)))
   return (VAR_16);

 FUNC_3(VAR_7, 3, VAR_1, (void *)&VAR_13,
   VAR_2, (void *)&VAR_14, VAR_3, (void *)&VAR_15);


 FUNC_3(VAR_7, 1, VAR_0, 0xe0);
 FUNC_4(VAR_12, VAR_8->vpo_dev, VAR_7, &VAR_17);


 FUNC_3(VAR_7, 1, VAR_0, 0x30);
 FUNC_4(VAR_12, VAR_8->vpo_dev, VAR_7, &VAR_17);

 if (FUNC_0(VAR_12))
  FUNC_3(VAR_7, 1, VAR_0, 0x28);
 else
  FUNC_3(VAR_7, 1, VAR_0, 0xe0);

 FUNC_4(VAR_12, VAR_8->vpo_dev, VAR_7, &VAR_17);

 if ((VAR_13 != (char)0xb8 || VAR_14 != (char)0x18 || VAR_15 != (char)0x30)) {
  if (VAR_6)
   FUNC_2(VAR_8->vpo_dev,
       "(connect) s1=0x%x s2=0x%x, s3=0x%x\n",
       VAR_13 & 0xff, VAR_14 & 0xff, VAR_15 & 0xff);
  if (VAR_10)
   *VAR_10 = VAR_5;
 }

 return (0);
}
