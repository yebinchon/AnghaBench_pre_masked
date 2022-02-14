
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {size_t fd; } ;
struct dos_ttystate {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (struct dos_ttystate volatile*,int ) ;
 int FUNC_1 (struct dos_ttystate volatile*,int ,unsigned char) ;
 struct dos_ttystate* VAR_3 ;
 long FUNC_2 () ;

__attribute__((used)) static int
FUNC_3 (struct serial *VAR_4)
{
  volatile struct dos_ttystate *VAR_5 = &VAR_3[VAR_4->fd];
  unsigned char VAR_6;
  long VAR_7;

  VAR_6 = FUNC_0 (VAR_5, VAR_2);
  FUNC_1 (VAR_5, VAR_2, VAR_6 | VAR_0);


  VAR_7 = FUNC_2 () + VAR_1 / 4;
  while ((FUNC_2 () - VAR_7) < 0)
    continue;

  FUNC_1 (VAR_5, VAR_2, VAR_6);
  return 0;
}
