
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int widget_cap; } ;
struct hdaa_widget {TYPE_1__ param; } ;
struct hdaa_devinfo {int dev; } ;
struct hdaa_chan {int flags; scalar_t__ dir; int* io; int sid; struct hdaa_devinfo* devinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 struct hdaa_widget* FUNC_7 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_8(struct hdaa_chan *VAR_2)
{
 struct hdaa_devinfo *VAR_3 = VAR_2->devinfo;
 struct hdaa_widget *VAR_4;
 int VAR_5;

 if ((VAR_2->flags & VAR_0) == 0)
  return;
 VAR_2->flags &= ~VAR_0;
 FUNC_1(FUNC_5(VAR_3->dev), VAR_3->dev,
     VAR_2->dir == VAR_1 ? 1 : 0, VAR_2->sid);
 for (VAR_5 = 0; VAR_2->io[VAR_5] != -1; VAR_5++) {
  VAR_4 = FUNC_7(VAR_2->devinfo, VAR_2->io[VAR_5]);
  if (VAR_4 == ((void*)0))
   continue;
  if (FUNC_4(VAR_4->param.widget_cap)) {
   FUNC_6(VAR_3->dev,
       FUNC_3(0, VAR_2->io[VAR_5], 0));
  }
  FUNC_6(VAR_3->dev,
      FUNC_2(0, VAR_2->io[VAR_5],
      0));
 }
 FUNC_0(FUNC_5(VAR_3->dev), VAR_3->dev,
     VAR_2->dir == VAR_1 ? 1 : 0, VAR_2->sid);
}
