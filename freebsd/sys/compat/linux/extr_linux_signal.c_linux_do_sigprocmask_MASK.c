
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__* td_retval; } ;
typedef int sigset_t ;
typedef int l_sigset_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct thread*,int,int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_4, int VAR_5, l_sigset_t *VAR_6,
       l_sigset_t *VAR_7)
{
 sigset_t VAR_8, VAR_9;
 sigset_t *VAR_10;
 int VAR_11;

 VAR_4->td_retval[0] = 0;

 switch (VAR_5) {
 case 130:
  VAR_5 = VAR_1;
  break;
 case 128:
  VAR_5 = VAR_3;
  break;
 case 129:
  VAR_5 = VAR_2;
  break;
 default:
  return (VAR_0);
 }
 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_6, &VAR_9);
  VAR_10 = &VAR_9;
 } else
  VAR_10 = ((void*)0);
 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_10, &VAR_8, 0);
 if (VAR_11 == 0 && VAR_7 != ((void*)0))
  FUNC_0(&VAR_8, VAR_7);

 return (VAR_11);
}
