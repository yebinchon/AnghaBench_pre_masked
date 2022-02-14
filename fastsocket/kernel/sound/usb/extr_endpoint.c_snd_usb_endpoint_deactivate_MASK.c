
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_endpoint {scalar_t__ use_count; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct snd_usb_endpoint*,int,int) ;
 int FUNC_2 (struct snd_usb_endpoint*) ;

int FUNC_3(struct snd_usb_endpoint *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 FUNC_1(VAR_2, 1, 1);
 FUNC_2(VAR_2);

 if (VAR_2->use_count != 0)
  return 0;

 FUNC_0(VAR_1, &VAR_2->flags);

 return 0;
}
