
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; scalar_t__ ossdev; scalar_t__ bindas; } ;
struct hdaa_pcm_devinfo {scalar_t__ recas; int dev; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int startnode; int endnode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdaa_pcm_devinfo*,int,int ) ;
 struct hdaa_widget* FUNC_2 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_pcm_devinfo *VAR_1)
{
 struct hdaa_devinfo *VAR_2 = VAR_1->devinfo;
 struct hdaa_widget *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_2->startnode; VAR_4 < VAR_2->endnode; VAR_4++) {
  VAR_3 = FUNC_2(VAR_2, VAR_4);
  if (VAR_3 == ((void*)0) || VAR_3->enable == 0)
   continue;
  if (VAR_3->ossdev != VAR_0)
   continue;
  if (VAR_3->bindas != VAR_1->recas)
   continue;
  if (VAR_5 == 0) {
   VAR_5 = 1;
   FUNC_0(VAR_1->dev, "Input Mix:\n");
  }
  FUNC_0(VAR_1->dev, "\n");
  FUNC_1(VAR_1, VAR_4, 0);
 }
 if (VAR_5)
  FUNC_0(VAR_1->dev, "\n");
}
