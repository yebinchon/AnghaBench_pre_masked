
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
typedef int bfd ;


 int FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (char*) ;
 struct gdbarch* FUNC_2 (int *) ;

void
FUNC_3 (bfd *VAR_0)
{
  struct gdbarch *VAR_1;

  VAR_1 = FUNC_2 (VAR_0);
  if (VAR_1 == ((void*)0))
    FUNC_1 ("Architecture of file not recognized.\n");
  FUNC_0 (VAR_1);
}
