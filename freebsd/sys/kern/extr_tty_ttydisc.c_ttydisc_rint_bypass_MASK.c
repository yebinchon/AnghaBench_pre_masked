
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_flags; int t_inq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,size_t) ;
 int VAR_2 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct tty*,int ) ;
 size_t FUNC_5 (struct tty*,void const*,size_t) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (int *,void const*,size_t,int ) ;

size_t
FUNC_8(struct tty *VAR_4, const void *VAR_5, size_t VAR_6)
{
 size_t VAR_7;

 FUNC_3(VAR_4, VAR_0);

 FUNC_0(VAR_4->t_flags & VAR_1);

 FUNC_1(&VAR_3, VAR_6);

 if (FUNC_4(VAR_4, VAR_2))
  return FUNC_5(VAR_4, VAR_5, VAR_6);

 VAR_7 = FUNC_7(&VAR_4->t_inq, VAR_5, VAR_6, 0);
 FUNC_6(&VAR_4->t_inq);
 if (VAR_7 < VAR_6)
  FUNC_2(VAR_4);

 return (VAR_7);
}
