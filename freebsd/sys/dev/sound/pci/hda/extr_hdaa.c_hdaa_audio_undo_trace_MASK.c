
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; int bindas; int bindseqmask; int selconn; } ;
struct hdaa_devinfo {int startnode; int endnode; } ;


 struct hdaa_widget* FUNC_0 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_1(struct hdaa_devinfo *VAR_0, int VAR_1, int VAR_2)
{
 struct hdaa_widget *VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_0->startnode; VAR_4 < VAR_0->endnode; VAR_4++) {
  VAR_3 = FUNC_0(VAR_0, VAR_4);
  if (VAR_3 == ((void*)0) || VAR_3->enable == 0)
   continue;
  if (VAR_3->bindas == VAR_1) {
   if (VAR_2 >= 0) {
    VAR_3->bindseqmask &= ~(1 << VAR_2);
    if (VAR_3->bindseqmask == 0) {
     VAR_3->bindas = -1;
     VAR_3->selconn = -1;
    }
   } else {
    VAR_3->bindas = -1;
    VAR_3->bindseqmask = 0;
    VAR_3->selconn = -1;
   }
  }
 }
}
