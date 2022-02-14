
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty*,int ,void*,int,struct thread*) ;
 scalar_t__ FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*,int ) ;
 int FUNC_3 (struct tty*,int ,void*,struct thread*) ;

int
FUNC_4(struct tty *VAR_3, u_long VAR_4, void *VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8;

 FUNC_2(VAR_3, VAR_2);

 if (FUNC_1(VAR_3))
  return (VAR_1);

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_7);
 if (VAR_8 == VAR_0)
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 return (VAR_8);
}
