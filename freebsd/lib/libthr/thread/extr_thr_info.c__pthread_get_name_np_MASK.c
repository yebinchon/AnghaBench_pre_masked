
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {scalar_t__ state; } ;
typedef struct pthread* pthread_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pthread*,struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 struct pthread* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pthread*,struct pthread*,int ) ;
 int FUNC_4 (struct pthread*,char*,size_t) ;

void
FUNC_5(pthread_t VAR_1, char *VAR_2, size_t VAR_3)
{
 struct pthread *VAR_4;

 VAR_4 = FUNC_2();
 if (VAR_4 == VAR_1) {
  FUNC_0(VAR_4, VAR_1);
  FUNC_4(VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_4, VAR_1);
 } else {
  if (FUNC_3(VAR_4, VAR_1, 0) == 0) {
   if (VAR_1->state != VAR_0)
    FUNC_4(VAR_1, VAR_2, VAR_3);
   FUNC_1(VAR_4, VAR_1);
  } else if (VAR_3 > 0)
   VAR_2[0] = '\0';
 }
}
