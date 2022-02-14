
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {size_t fd; } ;
struct dos_ttystate {int dummy; } ;


 unsigned char VAR_0 ;



 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned char FUNC_2 (struct dos_ttystate*,int ) ;
 int FUNC_3 (struct dos_ttystate*,int ,unsigned char) ;
 struct dos_ttystate* VAR_2 ;

__attribute__((used)) static int
FUNC_4 (struct serial *VAR_3, int VAR_4)
{
  struct dos_ttystate *VAR_5 = &VAR_2[VAR_3->fd];
  unsigned char VAR_6;

  FUNC_0 ();
  VAR_6 = FUNC_2 (VAR_5, VAR_1);

  switch (VAR_4)
    {
    case 129:
      FUNC_3 (VAR_5, VAR_1, VAR_6 & ~VAR_0);
      break;
    case 130:
    case 128:
      FUNC_3 (VAR_5, VAR_1, VAR_6 | VAR_0);
      break;
    default:
      FUNC_1 ();
      return 1;
    }
  FUNC_1 ();

  return 0;
}
