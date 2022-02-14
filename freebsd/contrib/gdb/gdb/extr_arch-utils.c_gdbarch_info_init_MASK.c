
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_info {int osabi; int byte_order; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gdbarch_info*,int ,int) ;

void
FUNC_1 (struct gdbarch_info *VAR_2)
{
  FUNC_0 (VAR_2, 0, sizeof (struct gdbarch_info));
  VAR_2->byte_order = VAR_0;
  VAR_2->osabi = VAR_1;
}
