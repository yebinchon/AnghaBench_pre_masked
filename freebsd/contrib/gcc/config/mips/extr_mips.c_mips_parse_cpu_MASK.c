
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cpu_info {scalar_t__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ VAR_2 ;
 struct mips_cpu_info const* FUNC_1 (int) ;
 struct mips_cpu_info* VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static const struct mips_cpu_info *
FUNC_5 (const char *VAR_4)
{
  const struct mips_cpu_info *VAR_5;
  const char *VAR_6;



  for (VAR_6 = VAR_4; *VAR_6 != 0; VAR_6++)
    if (FUNC_0 (*VAR_6))
      {
 FUNC_4 (0, "the cpu name must be lower case");
 break;
      }






  if (FUNC_3 (VAR_4, "from-abi") == 0)
    return FUNC_1 (VAR_0 ? 1
       : VAR_1 ? 3
       : (VAR_2 ? 3 : 1));


  if (FUNC_3 (VAR_4, "default") == 0)
    return 0;

  for (VAR_5 = VAR_3; VAR_5->name != 0; VAR_5++)
    if (FUNC_2 (VAR_5->name, VAR_4))
      return VAR_5;

  return 0;
}
