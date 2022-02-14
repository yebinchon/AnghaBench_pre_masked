
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
typedef struct pthread* pthread_t ;


 int VAR_0 ;
 int FUNC_0 (struct pthread*,struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 struct pthread* FUNC_2 () ;
 int FUNC_3 (struct pthread*,struct pthread*,int ) ;
 int FUNC_4 (struct pthread*,struct pthread*) ;
 int FUNC_5 (struct pthread*,struct pthread*,int) ;

int
FUNC_6(pthread_t VAR_1)
{
 struct pthread *VAR_2 = FUNC_2();
 int VAR_3;


 if (VAR_1 == FUNC_2())
  VAR_3 = VAR_0;


 else if ((VAR_3 = FUNC_3(VAR_2, VAR_1, 0))
     == 0) {

  FUNC_0(VAR_2, VAR_1);
  FUNC_5(VAR_2, VAR_1, 1);

  FUNC_1(VAR_2, VAR_1);


  FUNC_4(VAR_2, VAR_1);
 }
 return (VAR_3);
}
