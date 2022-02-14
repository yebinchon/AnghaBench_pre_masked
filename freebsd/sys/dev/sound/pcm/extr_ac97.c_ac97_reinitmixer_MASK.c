
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_info {scalar_t__ count; int flags; int extstat; int lock; int dev; int noext; int devinfo; int methods; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ac97_info*,int ) ;
 int FUNC_2 (struct ac97_info*) ;
 int FUNC_3 (struct ac97_info*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static unsigned
FUNC_7(struct ac97_info *VAR_5)
{
 FUNC_5(VAR_5->lock);
 VAR_5->count = FUNC_0(VAR_5->methods, VAR_5->devinfo);
 if (VAR_5->count == 0) {
  FUNC_4(VAR_5->dev, "ac97 codec init failed\n");
  FUNC_6(VAR_5->lock);
  return VAR_4;
 }

 FUNC_3(VAR_5, VAR_3, (VAR_5->flags & VAR_1)? 0x8000 : 0x0000);
 FUNC_2(VAR_5);
 FUNC_3(VAR_5, VAR_3, (VAR_5->flags & VAR_1)? 0x8000 : 0x0000);

 if (!VAR_5->noext) {
  FUNC_3(VAR_5, VAR_2, VAR_5->extstat);
  if ((FUNC_1(VAR_5, VAR_2) & VAR_0)
      != VAR_5->extstat)
   FUNC_4(VAR_5->dev, "ac97 codec failed to reset extended mode (%x, got %x)\n",
          VAR_5->extstat,
          FUNC_1(VAR_5, VAR_2) &
          VAR_0);
 }

 if ((FUNC_1(VAR_5, VAR_3) & 2) == 0)
  FUNC_4(VAR_5->dev, "ac97 codec reports dac not ready\n");
 FUNC_6(VAR_5->lock);
 return 0;
}
