
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct module {int name; } ;


 int FUNC_0 (int ,char*,unsigned long,unsigned long const,void*) ;
 int FUNC_1 (void*,struct module*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned long VAR_1,
    struct module *VAR_2)
{
 unsigned int VAR_3;
 const unsigned long VAR_4 = sizeof(struct usb_device_id);

 FUNC_0(VAR_2->name, "usb", VAR_1, VAR_4, VAR_0);


 VAR_1 -= VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += VAR_4)
  FUNC_1(VAR_0 + VAR_3, VAR_2);
}
