
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {scalar_t__ state; int tid; } ;
typedef struct pthread* pthread_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pthread*,struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 struct pthread* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pthread*,struct pthread*,int ) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (struct pthread*,char const*) ;

void
FUNC_6(pthread_t VAR_1, const char *VAR_2)
{
 struct pthread *VAR_3;

 VAR_3 = FUNC_2();
 if (VAR_3 == VAR_1) {
  FUNC_0(VAR_3, VAR_1);
  FUNC_4(VAR_1->tid, VAR_2);
  FUNC_5(VAR_1, VAR_2);
  FUNC_1(VAR_3, VAR_1);
 } else {
  if (FUNC_3(VAR_3, VAR_1, 0) == 0) {
   if (VAR_1->state != VAR_0) {
    FUNC_4(VAR_1->tid, VAR_2);
    FUNC_5(VAR_1, VAR_2);
   }
   FUNC_1(VAR_3, VAR_1);
  }
 }
}
