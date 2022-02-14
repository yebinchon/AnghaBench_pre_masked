
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar_device {int dev; struct wps_registrar_device* next; } ;


 int FUNC_0 (struct wps_registrar_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct wps_registrar_device *VAR_0)
{
 struct wps_registrar_device *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_1(&VAR_1->dev);
  FUNC_0(VAR_1);
 }
}
