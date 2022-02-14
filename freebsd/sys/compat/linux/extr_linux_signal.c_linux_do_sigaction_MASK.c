
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigaction {int dummy; } ;
typedef int l_sigaction_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sigaction*,int *) ;
 int FUNC_2 (struct thread*,int,struct sigaction*,struct sigaction*,int ) ;
 int FUNC_3 (int *,struct sigaction*) ;
 int FUNC_4 (int) ;

int
FUNC_5(struct thread *VAR_1, int VAR_2, l_sigaction_t *VAR_3,
     l_sigaction_t *VAR_4)
{
 struct sigaction VAR_5, VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 if (!FUNC_0(VAR_2))
  return (VAR_0);

 VAR_8 = (VAR_4 != ((void*)0)) ? &VAR_6 : ((void*)0);
 if (VAR_3 != ((void*)0)) {
  VAR_7 = &VAR_5;
  FUNC_3(VAR_3, VAR_7);
 } else
  VAR_7 = ((void*)0);
 VAR_10 = FUNC_4(VAR_2);

 VAR_9 = FUNC_2(VAR_1, VAR_10, VAR_7, VAR_8, 0);
 if (VAR_9)
  return (VAR_9);

 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_8, VAR_4);

 return (0);
}
