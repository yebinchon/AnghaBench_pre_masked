
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cpu_info {scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct mips_cpu_info const* FUNC_3 (int ) ;
 struct mips_cpu_info* VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static const struct mips_cpu_info *
FUNC_6 (const char *VAR_6, const char *VAR_7)
{
  const struct mips_cpu_info *VAR_8;
  if (FUNC_5 (VAR_7, "from-abi") == 0)
    {
      if (FUNC_0 (VAR_4))
 return FUNC_3 (VAR_0);

      if (FUNC_1 (VAR_4))
 return FUNC_3 (VAR_1);

      if (VAR_3 >= 0)
 return FUNC_3 (VAR_3 ? VAR_0 : VAR_1);

      return FUNC_3 (VAR_2
         ? VAR_1
         : VAR_0);
    }


  if (FUNC_5 (VAR_7, "default") == 0)
    return 0;

  for (VAR_8 = VAR_5; VAR_8->name != 0; VAR_8++)
    if (FUNC_4 (VAR_8->name, VAR_7))
      return VAR_8;

  FUNC_2 ("Bad value (%s) for %s", VAR_7, VAR_6);
  return 0;
}
