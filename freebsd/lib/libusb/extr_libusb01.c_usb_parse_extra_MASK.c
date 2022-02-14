
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int * currextra; } ;
struct TYPE_6__ {TYPE_2__* currextra; } ;
struct usb_parse_state {scalar_t__ preparse; TYPE_1__ b; TYPE_3__ a; } ;
struct TYPE_5__ {int len; void* ptr; } ;


 int FUNC_0 (int *,void*,int) ;

__attribute__((used)) static void
FUNC_1(struct usb_parse_state *VAR_0, uint8_t **VAR_1, int *VAR_2)
{
 void *VAR_3;
 uint16_t VAR_4;

 VAR_3 = VAR_0->a.currextra->ptr;
 VAR_4 = VAR_0->a.currextra->len;

 if (VAR_0->preparse == 0) {
  FUNC_0(VAR_0->b.currextra, VAR_3, VAR_4);
  *VAR_1 = VAR_0->b.currextra;
  *VAR_2 = VAR_4;
 }
 VAR_0->b.currextra += VAR_4;
 return;
}
