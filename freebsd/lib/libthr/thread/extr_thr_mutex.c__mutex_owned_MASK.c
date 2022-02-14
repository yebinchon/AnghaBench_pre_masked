
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int dummy; } ;
struct pthread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pthread_mutex const*) ;
 struct pthread_mutex const* VAR_2 ;
 scalar_t__ FUNC_1 (struct pthread*) ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(struct pthread *VAR_3, const struct pthread_mutex *VAR_4)
{

 if (FUNC_2(VAR_4 <= VAR_2)) {
  if (VAR_4 == VAR_2)
   return (VAR_0);
  return (VAR_1);
 }
 if (FUNC_0(VAR_4) != FUNC_1(VAR_3))
  return (VAR_1);
 return (0);
}
