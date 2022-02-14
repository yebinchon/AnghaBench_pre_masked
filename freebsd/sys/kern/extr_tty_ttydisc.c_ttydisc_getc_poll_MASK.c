
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_flags; int t_outq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty*,int ) ;
 size_t FUNC_1 (struct tty*) ;
 scalar_t__ FUNC_2 (struct tty*,int ) ;
 size_t FUNC_3 (int *) ;

size_t
FUNC_4(struct tty *VAR_3)
{

 FUNC_0(VAR_3, VAR_0);

 if (VAR_3->t_flags & VAR_1)
  return (0);

 if (FUNC_2(VAR_3, VAR_2))
  return FUNC_1(VAR_3);

 return FUNC_3(&VAR_3->t_outq);
}
