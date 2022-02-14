
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
struct std_mono_table {int tlv_callback; int * name; int val_type; int cmask; int control; int unitid; } ;


 int FUNC_0 (struct usb_mixer_interface*,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct usb_mixer_interface *VAR_0,
    struct std_mono_table *VAR_1)
{
 int VAR_2;

 while (VAR_1->name != ((void*)0)) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->unitid, VAR_1->control,
    VAR_1->cmask, VAR_1->val_type, VAR_1->name, VAR_1->tlv_callback);
  if (VAR_2 < 0)
   return VAR_2;
  VAR_1++;
 }

 return 0;
}
