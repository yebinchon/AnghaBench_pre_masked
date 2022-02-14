
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_atfork {void (* prepare ) () ;void (* parent ) () ;void (* child ) () ;} ;
struct pthread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct pthread_atfork*,int ) ;
 int FUNC_1 (struct pthread*) ;
 int FUNC_2 (struct pthread*) ;
 struct pthread* FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct pthread_atfork* FUNC_7 (int) ;
 int VAR_3 ;

int
FUNC_8(void (*VAR_4)(void), void (*VAR_5)(void),
    void (*VAR_6)(void))
{
 struct pthread *VAR_7;
 struct pthread_atfork *VAR_8;

 FUNC_4();

 if ((VAR_8 = FUNC_7(sizeof(struct pthread_atfork))) == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_3();
 VAR_8->prepare = VAR_4;
 VAR_8->parent = VAR_5;
 VAR_8->child = VAR_6;
 FUNC_1(VAR_7);
 FUNC_6(&VAR_2);
 FUNC_0(&VAR_1, VAR_8, VAR_3);
 FUNC_5(&VAR_2);
 FUNC_2(VAR_7);
 return (0);
}
