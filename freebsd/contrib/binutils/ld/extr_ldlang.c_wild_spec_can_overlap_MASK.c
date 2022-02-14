
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (const char *VAR_0, const char *VAR_1)
{
  size_t VAR_2 = FUNC_1 (VAR_0, "?*[");
  size_t VAR_3 = FUNC_1 (VAR_1, "?*[");
  size_t VAR_4;




  if (VAR_0[VAR_2] == '\0')
    VAR_2++;
  if (VAR_1[VAR_3] == '\0')
    VAR_3++;

  VAR_4 = VAR_2 < VAR_3 ? VAR_2 : VAR_3;

  return FUNC_0 (VAR_0, VAR_1, VAR_4) == 0;
}
