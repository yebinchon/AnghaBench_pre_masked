
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {size_t fd; } ;
struct dos_ttystate {scalar_t__ refcnt; } ;
typedef int * serial_ttystate ;


 int FUNC_0 (int) ;
 struct dos_ttystate* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static serial_ttystate
FUNC_2 (struct serial *VAR_1)
{
  struct dos_ttystate *VAR_2 = &VAR_0[VAR_1->fd];
  struct dos_ttystate *VAR_3;


  if (VAR_2->refcnt <= 0)
    {






      if (VAR_1->fd >= 3 || !FUNC_0 (VAR_1->fd))
 return ((void*)0);
    }

  VAR_3 = (struct dos_ttystate *) FUNC_1 (sizeof *VAR_3);
  *VAR_3 = *VAR_2;
  return (serial_ttystate) VAR_3;
}
