
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* xat_name; } ;
typedef TYPE_1__ option_xat_attribute_map_t ;


 scalar_t__ FUNC_0 (char const*,unsigned int) ;
 TYPE_1__ const* VAR_0 ;
 int FUNC_1 (char const*,char const*,unsigned int) ;

__attribute__((used)) static inline const option_xat_attribute_map_t *
FUNC_2 (register const char *VAR_1, register unsigned int VAR_2)
{
  if (VAR_2 <= 8 && VAR_2 >= 4)
    {
      register int VAR_3 = (int)FUNC_0 (VAR_1, VAR_2);

      if (VAR_3 <= 9 && VAR_3 >= 0)
        {
          register const char *VAR_4 = VAR_0[VAR_3].xat_name;

          if (*VAR_1 == *VAR_4 && !FUNC_1 (VAR_1 + 1, VAR_4 + 1, VAR_2 - 1) && VAR_4[VAR_2] == '\0')
            return &VAR_0[VAR_3];
        }
    }
  return 0;
}
