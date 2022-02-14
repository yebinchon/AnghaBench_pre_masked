
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_midi {scalar_t__ usb_id; } ;
struct port_info {scalar_t__ id; int port; } ;


 int FUNC_0 (struct port_info*) ;
 struct port_info* VAR_0 ;

__attribute__((used)) static struct port_info *FUNC_1(struct snd_usb_midi* VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  if (VAR_0[VAR_3].id == VAR_1->usb_id &&
      VAR_0[VAR_3].port == VAR_2)
   return &VAR_0[VAR_3];
 }
 return ((void*)0);
}
