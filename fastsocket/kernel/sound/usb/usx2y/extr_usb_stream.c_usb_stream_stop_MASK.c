
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_stream_kernel {TYPE_1__* s; int * outurb; int * inurb; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

void FUNC_2(struct usb_stream_kernel *VAR_2)
{
 int VAR_3;
 if (!VAR_2->s)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_1(VAR_2->inurb[VAR_3]);
  FUNC_1(VAR_2->outurb[VAR_3]);
 }
 VAR_2->s->state = VAR_1;
 FUNC_0(400);
}
