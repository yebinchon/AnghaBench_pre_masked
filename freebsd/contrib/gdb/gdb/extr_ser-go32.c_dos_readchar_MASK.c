
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {size_t fd; } ;
struct dos_ttystate {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dos_ttystate*) ;
 struct dos_ttystate* VAR_2 ;
 long FUNC_1 () ;

__attribute__((used)) static int
FUNC_2 (struct serial *VAR_3, int VAR_4)
{
  struct dos_ttystate *VAR_5 = &VAR_2[VAR_3->fd];
  long VAR_6;
  int VAR_7;

  VAR_6 = FUNC_1 () + (VAR_4 * VAR_0);
  while ((VAR_7 = FUNC_0 (VAR_5)) < 0)
    {
      if (VAR_4 >= 0 && (FUNC_1 () - VAR_6) >= 0)
 return VAR_1;
    }

  return VAR_7;
}
