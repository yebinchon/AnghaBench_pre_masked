
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdaa_widget {scalar_t__ enable; scalar_t__ type; } ;
struct hdaa_devinfo {scalar_t__ poll_ival; int ascnt; int poll_jack; TYPE_1__* as; } ;
struct TYPE_2__ {scalar_t__ hpredir; int * pins; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,void (*) (void*),struct hdaa_devinfo*) ;
 int FUNC_1 (struct hdaa_devinfo*) ;
 int FUNC_2 (struct hdaa_widget*) ;
 int FUNC_3 (struct hdaa_devinfo*) ;
 struct hdaa_widget* FUNC_4 (struct hdaa_devinfo*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct hdaa_devinfo *VAR_2 = VAR_1;
 struct hdaa_widget *VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);
 if (VAR_2->poll_ival == 0) {
  FUNC_3(VAR_2);
  return;
 }
 for (VAR_4 = 0; VAR_4 < VAR_2->ascnt; VAR_4++) {
  if (VAR_2->as[VAR_4].hpredir < 0)
   continue;
  VAR_3 = FUNC_4(VAR_2, VAR_2->as[VAR_4].pins[15]);
  if (VAR_3 == ((void*)0) || VAR_3->enable == 0 || VAR_3->type !=
      VAR_0)
   continue;
  FUNC_2(VAR_3);
 }
 FUNC_0(&VAR_2->poll_jack, VAR_2->poll_ival,
     FUNC_5, VAR_2);
 FUNC_3(VAR_2);
}
