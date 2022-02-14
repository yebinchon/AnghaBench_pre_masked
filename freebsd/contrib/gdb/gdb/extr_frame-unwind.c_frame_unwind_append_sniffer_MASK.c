
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_unwind_table {int dummy; } ;
typedef int frame_unwind_sniffer_ftype ;


 int FUNC_0 (struct frame_unwind_table*,int *) ;
 int VAR_0 ;
 struct frame_unwind_table* FUNC_1 (struct gdbarch*) ;
 struct frame_unwind_table* FUNC_2 (struct gdbarch*,int ) ;
 int FUNC_3 (struct gdbarch*,int ,struct frame_unwind_table*) ;

void
FUNC_4 (struct gdbarch *VAR_1,
        frame_unwind_sniffer_ftype *VAR_2)
{
  struct frame_unwind_table *VAR_3 =
    FUNC_2 (VAR_1, VAR_0);
  if (VAR_3 == ((void*)0))
    {


      VAR_3 = FUNC_1 (VAR_1);
      FUNC_3 (VAR_1, VAR_0, VAR_3);
    }
  FUNC_0 (VAR_3, VAR_2);
}
