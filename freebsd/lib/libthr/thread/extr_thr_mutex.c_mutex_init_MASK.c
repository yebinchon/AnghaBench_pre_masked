
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex_attr {int dummy; } ;
struct pthread_mutex {int dummy; } ;
typedef struct pthread_mutex* pthread_mutex_t ;


 int VAR_0 ;
 struct pthread_mutex_attr VAR_1 ;
 int FUNC_0 (struct pthread_mutex_attr const*) ;
 int FUNC_1 (struct pthread_mutex*,struct pthread_mutex_attr const*) ;

__attribute__((used)) static int
FUNC_2(pthread_mutex_t *VAR_2,
    const struct pthread_mutex_attr *VAR_3,
    void *(VAR_4)(size_t, size_t))
{
 const struct pthread_mutex_attr *VAR_5;
 struct pthread_mutex *VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0)) {
  VAR_5 = &VAR_1;
 } else {
  VAR_5 = VAR_3;
  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7 != 0)
   return (VAR_7);
 }
 if ((VAR_6 = (pthread_mutex_t)
  VAR_4(1, sizeof(struct pthread_mutex))) == ((void*)0))
  return (VAR_0);
 FUNC_1(VAR_6, VAR_5);
 *VAR_2 = VAR_6;
 return (0);
}
