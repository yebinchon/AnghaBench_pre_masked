
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhnd_core_match {int member_0; } ;
struct bhnd_core_info {int dummy; } ;
typedef int bhnd_devclass_t ;


 int FUNC_0 (int ) ;
 struct bhnd_core_info const* FUNC_1 (struct bhnd_core_info const*,int ,struct bhnd_core_match*) ;

const struct bhnd_core_info *
FUNC_2(const struct bhnd_core_info *VAR_0, u_int VAR_1,
    bhnd_devclass_t VAR_2)
{
 struct bhnd_core_match VAR_3 = {
  FUNC_0(VAR_2)
 };

 return FUNC_1(VAR_0, VAR_1, &VAR_3);
}
