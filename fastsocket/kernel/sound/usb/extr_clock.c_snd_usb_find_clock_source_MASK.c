
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_interface {int extralen; int extra; } ;
struct uac_clock_source_descriptor {int bClockID; } ;


 int VAR_0 ;
 struct uac_clock_source_descriptor* FUNC_0 (int ,int ,struct uac_clock_source_descriptor*,int ) ;

__attribute__((used)) static struct uac_clock_source_descriptor *
 FUNC_1(struct usb_host_interface *VAR_1,
      int VAR_2)
{
 struct uac_clock_source_descriptor *VAR_3 = ((void*)0);

 while ((VAR_3 = FUNC_0(VAR_1->extra,
          VAR_1->extralen,
          VAR_3, VAR_0))) {
  if (VAR_3->bClockID == VAR_2)
   return VAR_3;
 }

 return ((void*)0);
}
