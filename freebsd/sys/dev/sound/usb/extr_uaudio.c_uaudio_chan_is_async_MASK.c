
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct uaudio_chan {TYPE_2__* usb_alt; } ;
struct TYPE_4__ {TYPE_1__* p_ed1; } ;
struct TYPE_3__ {size_t bmAttributes; } ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct uaudio_chan *VAR_1, uint8_t VAR_2)
{
 uint8_t VAR_3 = VAR_1->usb_alt[VAR_2].p_ed1->bmAttributes;
 return (FUNC_0(VAR_3) == VAR_0);
}
