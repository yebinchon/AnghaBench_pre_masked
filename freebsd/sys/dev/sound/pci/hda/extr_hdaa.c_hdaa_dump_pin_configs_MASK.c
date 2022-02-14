
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
struct TYPE_4__ {TYPE_1__ pin; } ;
struct hdaa_widget {scalar_t__ type; TYPE_2__ wclass; } ;
struct hdaa_devinfo {int startnode; int endnode; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdaa_widget*,int ) ;
 struct hdaa_widget* FUNC_2 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_devinfo *VAR_1)
{
 struct hdaa_widget *VAR_2;
 int VAR_3;

 FUNC_0(VAR_1->dev, "nid   0x    as seq "
     "device       conn  jack    loc        color   misc\n");
 for (VAR_3 = VAR_1->startnode; VAR_3 < VAR_1->endnode; VAR_3++) {
  VAR_2 = FUNC_2(VAR_1, VAR_3);
  if (VAR_2 == ((void*)0))
   continue;
  if (VAR_2->type != VAR_0)
   continue;
  FUNC_1(VAR_2, VAR_2->wclass.pin.config);
 }
}
