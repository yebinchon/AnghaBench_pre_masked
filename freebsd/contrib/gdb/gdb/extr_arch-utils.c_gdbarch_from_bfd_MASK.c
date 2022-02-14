
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_info {int * abfd; } ;
struct gdbarch {int dummy; } ;
typedef int bfd ;


 struct gdbarch* VAR_0 ;
 struct gdbarch* FUNC_0 (struct gdbarch_info) ;
 int FUNC_1 (struct gdbarch_info*) ;

struct gdbarch *
FUNC_2 (bfd *VAR_1)
{
  struct gdbarch *VAR_2 = VAR_0;
  struct gdbarch *VAR_3;
  struct gdbarch_info VAR_4;

  FUNC_1 (&VAR_4);
  VAR_4.abfd = VAR_1;
  return FUNC_0 (VAR_4);
}
