
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {size_t fd; } ;
struct dos_ttystate {scalar_t__ fifo; scalar_t__ count; scalar_t__ first; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct dos_ttystate*,int ,int) ;
 struct dos_ttystate* VAR_4 ;

__attribute__((used)) static int
FUNC_3 (struct serial *VAR_5)
{
  struct dos_ttystate *VAR_6 = &VAR_4[VAR_5->fd];
  FUNC_0 ();
  VAR_6->first = VAR_6->count = 0;
  if (VAR_6->fifo)
    FUNC_2 (VAR_6, VAR_3, VAR_0 | VAR_1 | VAR_2);
  FUNC_1 ();
  return 0;
}
