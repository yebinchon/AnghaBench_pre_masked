
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
typedef struct pthread* pthread_t ;


 int VAR_0 ;
 int FUNC_0 (struct pthread*,struct pthread*) ;
 int VAR_1 ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*,struct pthread*,int ) ;
 int FUNC_3 (struct pthread*,int) ;

int
FUNC_4(pthread_t VAR_2, int VAR_3)
{
 struct pthread *VAR_4;
 int VAR_5;


 if (VAR_3 < 0 || VAR_3 > VAR_1)

  return (VAR_0);

 VAR_4 = FUNC_1();






 if (VAR_4 == VAR_2) {
  if (VAR_3 > 0)
   FUNC_3(VAR_2, VAR_3);
  VAR_5 = 0;
 } else if ((VAR_5 = FUNC_2(VAR_4, VAR_2,
                     0)) == 0) {
  if (VAR_3 > 0)
   FUNC_3(VAR_2, VAR_3);
  FUNC_0(VAR_4, VAR_2);
 }


 return (VAR_5);
}
