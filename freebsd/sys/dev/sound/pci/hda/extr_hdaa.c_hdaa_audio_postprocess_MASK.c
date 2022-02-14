
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {int dummy; } ;
struct hdaa_devinfo {int startnode; int endnode; } ;


 struct hdaa_widget* FUNC_0 (struct hdaa_devinfo*,int) ;
 int FUNC_1 (struct hdaa_widget*) ;

__attribute__((used)) static void
FUNC_2(struct hdaa_devinfo *VAR_0)
{
 struct hdaa_widget *VAR_1;
 int VAR_2;

 for (VAR_2 = VAR_0->startnode; VAR_2 < VAR_0->endnode; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, VAR_2);
  if (VAR_1 == ((void*)0))
   continue;
  FUNC_1(VAR_1);
 }
}
