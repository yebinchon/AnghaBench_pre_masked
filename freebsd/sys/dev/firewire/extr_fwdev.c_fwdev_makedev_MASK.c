
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firewire_softc {struct cdev* dev; TYPE_1__* fc; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct cdev*,struct cdev*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 void* FUNC_3 (int *,int ,int ,int ,int,char*,int,int ) ;
 int FUNC_4 (struct cdev*,char*,int) ;

int
FUNC_5(struct firewire_softc *VAR_4)
{
 int VAR_5 = 0;

 struct cdev *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4->fc->bdev);
 VAR_4->dev = FUNC_3(&VAR_3, FUNC_0(0, VAR_7, 0),
     VAR_2, VAR_1, 0660, "fw%d.%d", VAR_7, 0);
 VAR_6 = FUNC_3(&VAR_3, FUNC_0(VAR_0, VAR_7, 0),
     VAR_2, VAR_1, 0660, "fwmem%d.%d", VAR_7, 0);
 FUNC_1(VAR_4->dev, VAR_6);
 FUNC_4(VAR_4->dev, "fw%d", VAR_7);
 FUNC_4(VAR_6, "fwmem%d", VAR_7);

 return (VAR_5);
}
