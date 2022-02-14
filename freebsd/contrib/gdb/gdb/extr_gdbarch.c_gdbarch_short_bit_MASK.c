
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int short_bit; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2 (struct gdbarch *VAR_2)
{
  FUNC_1 (VAR_2 != ((void*)0));

  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_short_bit called\n");
  return VAR_2->short_bit;
}
