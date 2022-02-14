
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 unsigned int FUNC_2 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (const char *VAR_2)
{
  if (FUNC_0 (VAR_2, ".stab"))
    {


      unsigned VAR_3 = FUNC_2 (VAR_2);
      if (FUNC_1 (&VAR_2[VAR_3-3], "str") == 0)
 return VAR_1;
    }
  else if (FUNC_1 (VAR_2, "$GDB_STRINGS$") == 0)
    return VAR_1;
  return VAR_0;
}
