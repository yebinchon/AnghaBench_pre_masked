
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_flags; int t_outq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tty*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,void*,size_t) ;
 size_t FUNC_4 (struct tty*,void*,size_t) ;
 scalar_t__ FUNC_5 (struct tty*,int ) ;
 size_t FUNC_6 (int *,void*,size_t) ;

size_t
FUNC_7(struct tty *VAR_5, void *VAR_6, size_t VAR_7)
{

 FUNC_1(VAR_5, VAR_0);

 if (VAR_5->t_flags & VAR_1)
  return (0);

 if (FUNC_5(VAR_5, VAR_3))
  return FUNC_4(VAR_5, VAR_6, VAR_7);

 VAR_7 = FUNC_6(&VAR_5->t_outq, VAR_6, VAR_7);

 if (FUNC_5(VAR_5, VAR_2))
  FUNC_3(VAR_5, VAR_6, VAR_7);

 FUNC_2(VAR_5);
 FUNC_0(&VAR_4, VAR_7);

 return (VAR_7);
}
