
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ua101 {int mutex; struct usb_interface** intf; int playback; int capture; } ;


 unsigned int FUNC_0 (struct usb_interface**) ;
 int FUNC_1 (struct ua101*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct ua101 *VAR_1,
           struct usb_interface *VAR_2)
{
 unsigned int VAR_3;
 struct usb_interface *VAR_4;

 FUNC_3(&VAR_1->mutex);
 FUNC_2(&VAR_1->capture);
 FUNC_2(&VAR_1->playback);
 FUNC_4(&VAR_1->mutex);
 FUNC_1(VAR_1, &VAR_1->capture);
 FUNC_1(VAR_1, &VAR_1->playback);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->intf); ++VAR_3) {
  FUNC_3(&VAR_1->mutex);
  VAR_4 = VAR_1->intf[VAR_3];
  VAR_1->intf[VAR_3] = ((void*)0);
  FUNC_4(&VAR_1->mutex);
  if (VAR_4) {
   FUNC_6(VAR_4, ((void*)0));
   if (VAR_4 != VAR_2)
    FUNC_5(&VAR_0,
            VAR_4);
  }
 }
}
