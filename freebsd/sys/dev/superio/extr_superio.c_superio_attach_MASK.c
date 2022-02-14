
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct siosc {TYPE_2__* chardev; TYPE_1__* known_devices; int devlist; int conf_lock; } ;
typedef int device_t ;
struct TYPE_4__ {struct siosc* si_drv1; } ;
struct TYPE_3__ {scalar_t__ type; int ldn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct siosc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 TYPE_2__* FUNC_7 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_8 (int *,int ,char*,int ) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5)
{
 struct siosc *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 FUNC_8(&VAR_6->conf_lock, FUNC_3(VAR_5), "superio", VAR_1);
 FUNC_0(&VAR_6->devlist);

 for (VAR_7 = 0; VAR_6->known_devices[VAR_7].type != VAR_2; VAR_7++) {
  FUNC_9(VAR_5, VAR_6->known_devices[VAR_7].type,
      VAR_6->known_devices[VAR_7].ldn);
 }

 FUNC_2(VAR_5);
 FUNC_1(VAR_5);

 VAR_6->chardev = FUNC_7(&VAR_4, FUNC_5(VAR_5),
     VAR_3, VAR_0, 0600, "superio%d", FUNC_5(VAR_5));
 if (VAR_6->chardev == ((void*)0))
  FUNC_6(VAR_5, "failed to create character device\n");
 else
  VAR_6->chardev->si_drv1 = VAR_6;
 return (0);
}
