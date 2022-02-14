
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct thread_map {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct thread_map* FUNC_0 (char const*) ;
 struct thread_map* FUNC_1 (char const*) ;
 struct thread_map* FUNC_2 (scalar_t__) ;

struct thread_map *FUNC_3(const char *VAR_1, const char *VAR_2,
           uid_t VAR_3)
{
 if (VAR_1)
  return FUNC_0(VAR_1);

 if (!VAR_2 && VAR_3 != VAR_0)
  return FUNC_2(VAR_3);

 return FUNC_1(VAR_2);
}
