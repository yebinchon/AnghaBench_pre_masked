
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int flags; scalar_t__ playcount; scalar_t__ reccount; int * clones; int status; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 int FUNC_3 (struct snddev_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snddev_info* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct snddev_info*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,char*,int ) ;

int
FUNC_11(device_t VAR_8, char *VAR_9)
{
 struct snddev_info *VAR_10 = FUNC_4(VAR_8);


 if (VAR_10->flags & VAR_2)
  return (VAR_0);

 FUNC_0(VAR_10);

 if (VAR_10->playcount == 0 || VAR_10->reccount == 0)
  VAR_10->flags |= VAR_3;

 if (VAR_10->playcount > 0 || VAR_10->reccount > 0)
  VAR_10->flags |= VAR_1;

 FUNC_7(VAR_10, VAR_5);

 FUNC_10(VAR_10->status, VAR_9, VAR_4);

 FUNC_1(VAR_10);


 if (VAR_10->clones != ((void*)0))
  (void)FUNC_9(VAR_10->clones);


 VAR_10->flags |= VAR_2;

 FUNC_2(VAR_10);

 FUNC_3(VAR_10);





 FUNC_8(VAR_8);

 if (VAR_7 < 0)
  VAR_7 = (VAR_6 < 0) ? 1 : 0;
 if (VAR_6 < 0 || VAR_7 > 1)
  VAR_6 = FUNC_5(VAR_8);
 else if (VAR_7 == 1)
  VAR_6 = FUNC_6(VAR_6);

 return (0);
}
