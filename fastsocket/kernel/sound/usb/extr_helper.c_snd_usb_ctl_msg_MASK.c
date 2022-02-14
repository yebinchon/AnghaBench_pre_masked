
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (struct usb_device*,unsigned int,int ,int ,int ,int ,void*,int ) ;
 int FUNC_4 (struct usb_device*,unsigned int,int ,int ,int ,int ,void*,int ,int) ;

int FUNC_5(struct usb_device *VAR_2, unsigned int VAR_3, __u8 VAR_4,
      __u8 VAR_5, __u16 VAR_6, __u16 VAR_7, void *VAR_8,
      __u16 VAR_9)
{
 int VAR_10;
 void *VAR_11 = ((void*)0);

 if (VAR_9 > 0) {
  VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_1);
  if (!VAR_11)
   return -VAR_0;
 }
 VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_11, VAR_9, 1000);
 if (VAR_9 > 0) {
  FUNC_2(VAR_8, VAR_11, VAR_9);
  FUNC_0(VAR_11);
 }

 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8, VAR_9);

 return VAR_10;
}
