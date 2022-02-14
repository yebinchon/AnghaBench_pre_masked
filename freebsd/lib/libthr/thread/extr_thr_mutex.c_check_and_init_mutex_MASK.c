
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int dummy; } ;
typedef struct pthread_mutex* pthread_mutex_t ;


 int VAR_0 ;
 struct pthread_mutex* VAR_1 ;
 struct pthread_mutex* VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct pthread_mutex* FUNC_1 (struct pthread_mutex**,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct pthread_mutex**) ;
 int FUNC_4 (struct pthread_mutex*,int *) ;

__attribute__((used)) static int
FUNC_5(pthread_mutex_t *VAR_3, struct pthread_mutex **VAR_4)
{
 int VAR_5;

 *VAR_4 = *VAR_3;
 VAR_5 = 0;
 if (*VAR_4 == VAR_2) {
  *VAR_4 = FUNC_1(VAR_3, 0);
  if (*VAR_4 == ((void*)0))
   VAR_5 = VAR_0;
  else
   FUNC_4(*VAR_4, ((void*)0));
 } else if (FUNC_0(*VAR_4 <= VAR_1)) {
  if (*VAR_4 == VAR_1) {
   VAR_5 = VAR_0;
  } else {
   VAR_5 = FUNC_3(FUNC_2(), VAR_3);
   if (VAR_5 == 0)
    *VAR_4 = *VAR_3;
  }
 }
 return (VAR_5);
}
