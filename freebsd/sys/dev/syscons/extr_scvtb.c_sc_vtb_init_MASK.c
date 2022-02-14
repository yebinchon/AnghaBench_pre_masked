
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vm_offset_t ;
typedef int u_int16_t ;
struct TYPE_4__ {int vtb_type; int vtb_cols; int vtb_rows; int vtb_size; scalar_t__ vtb_buffer; scalar_t__ vtb_flags; scalar_t__ vtb_tail; } ;
typedef TYPE_1__ sc_vtb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 scalar_t__ VAR_4 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

void
FUNC_3(sc_vtb_t *VAR_5, int VAR_6, int VAR_7, int VAR_8, void *VAR_9, int VAR_10)
{
 VAR_5->vtb_flags = 0;
 VAR_5->vtb_type = VAR_6;
 VAR_5->vtb_cols = VAR_7;
 VAR_5->vtb_rows = VAR_8;
 VAR_5->vtb_size = VAR_7*VAR_8;
 VAR_5->vtb_buffer = 0;
 VAR_5->vtb_tail = 0;

 switch (VAR_6) {
 case 129:
 case 128:
  if ((VAR_9 == ((void*)0)) && (VAR_7*VAR_8 != 0)) {
   VAR_5->vtb_buffer =
    (vm_offset_t)FUNC_1(VAR_7*VAR_8*sizeof(u_int16_t),
          VAR_0,
          (VAR_10) ? VAR_2 : VAR_1);
   if (VAR_5->vtb_buffer != 0) {
    FUNC_0((void *)FUNC_2(VAR_5, 0),
          VAR_7*VAR_8*sizeof(u_int16_t));
    VAR_5->vtb_flags |= VAR_3;
   }
  } else {
   VAR_5->vtb_buffer = (vm_offset_t)VAR_9;
  }
  VAR_5->vtb_flags |= VAR_4;
  break;

 case 130:
  VAR_5->vtb_buffer = (vm_offset_t)VAR_9;
  VAR_5->vtb_flags |= VAR_4;
  break;

 default:
  break;
 }
}
