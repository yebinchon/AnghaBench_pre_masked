
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_info {int flags; void* devinfo; int dev; int methods; int name; int lock; } ;
typedef int kobj_class_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct ac97_info* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int ,char*,int*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int,char*,char*) ;

struct ac97_info *
FUNC_10(device_t VAR_5, void *VAR_6, kobj_class_t VAR_7)
{
 struct ac97_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1, VAR_2 | VAR_3);
 FUNC_9(VAR_8->name, sizeof(VAR_8->name), "%s:ac97",
     FUNC_1(VAR_5));
 VAR_8->lock = FUNC_8(VAR_8->name, "ac97 codec");
 VAR_8->methods = FUNC_3(VAR_7, VAR_1, VAR_2 | VAR_3);
 VAR_8->dev = VAR_5;
 VAR_8->devinfo = VAR_6;
 VAR_8->flags = 0;

 if (FUNC_7(FUNC_0(VAR_5), FUNC_2(VAR_5),
     "eapdinv", &VAR_9) == 0 && VAR_9 != 0)
  VAR_8->flags |= VAR_0;

 if (FUNC_7(FUNC_0(VAR_5), FUNC_2(VAR_5),
     "softpcmvol", &VAR_9) == 0 && VAR_9 != 0)
  FUNC_6(VAR_5, FUNC_5(VAR_5) | VAR_4);

 return VAR_8;
}
