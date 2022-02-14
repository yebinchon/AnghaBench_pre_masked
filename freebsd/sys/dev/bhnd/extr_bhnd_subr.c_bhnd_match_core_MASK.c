
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bhnd_core_match {int dummy; } ;
struct bhnd_core_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct bhnd_core_info const*,struct bhnd_core_match const*) ;

const struct bhnd_core_info *
FUNC_1(const struct bhnd_core_info *VAR_0, u_int VAR_1,
    const struct bhnd_core_match *VAR_2)
{
 for (u_int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_0(&VAR_0[VAR_3], VAR_2))
   return &VAR_0[VAR_3];
 }

 return (((void*)0));
}
