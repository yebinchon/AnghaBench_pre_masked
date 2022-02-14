
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; scalar_t__ type; int unsol; int nid; } ;
struct hdaa_devinfo {int startnode; int endnode; int dev; int poll_jack; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct hdaa_widget* FUNC_5 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_6(struct hdaa_devinfo *VAR_1)
{
 struct hdaa_widget *VAR_2;
 int VAR_3;

 FUNC_2(&VAR_1->poll_jack);
 for (VAR_3 = VAR_1->startnode; VAR_3 < VAR_1->endnode; VAR_3++) {
  VAR_2 = FUNC_5(VAR_1, VAR_3);
  if (VAR_2 == ((void*)0) || VAR_2->enable == 0 || VAR_2->type !=
      VAR_0)
   continue;
  if (VAR_2->unsol < 0)
   continue;
  FUNC_4(VAR_1->dev,
      FUNC_1(0, VAR_2->nid, 0));
  FUNC_0(
      FUNC_3(VAR_1->dev), VAR_1->dev,
      VAR_2->unsol);
  VAR_2->unsol = -1;
 }
}
