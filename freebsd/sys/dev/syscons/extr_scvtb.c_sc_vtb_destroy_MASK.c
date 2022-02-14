
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_3__ {int vtb_type; int vtb_flags; scalar_t__ vtb_buffer; scalar_t__ vtb_tail; scalar_t__ vtb_size; scalar_t__ vtb_rows; scalar_t__ vtb_cols; } ;
typedef TYPE_1__ sc_vtb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (void*,int ) ;

void
FUNC_1(sc_vtb_t *VAR_3)
{
 vm_offset_t VAR_4;

 VAR_3->vtb_cols = 0;
 VAR_3->vtb_rows = 0;
 VAR_3->vtb_size = 0;
 VAR_3->vtb_tail = 0;

 VAR_4 = VAR_3->vtb_buffer;
 VAR_3->vtb_buffer = 0;
 switch (VAR_3->vtb_type) {
 case 129:
 case 128:
  if ((VAR_3->vtb_flags & VAR_1) && (VAR_4 != 0))
   FUNC_0((void *)VAR_4, VAR_0);
  break;
 default:
  break;
 }
 VAR_3->vtb_flags = 0;
 VAR_3->vtb_type = VAR_2;
}
