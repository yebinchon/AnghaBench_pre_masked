
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix86_frame {scalar_t__ to_allocate; scalar_t__ nregs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ix86_frame*) ;
 int VAR_3 ;

int
FUNC_1 (void)
{
  struct ix86_frame VAR_4;

  if (! VAR_3 || VAR_2)
    return 0;



  if (VAR_1
      && VAR_0 >= 32768)
    return 0;

  FUNC_0 (&VAR_4);
  return VAR_4.to_allocate == 0 && VAR_4.nregs == 0;
}
