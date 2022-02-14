
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comp_unit_head {int dummy; } ;
typedef int bfd ;
typedef size_t LONGEST ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int *,char*,struct comp_unit_head const*,int*) ;

__attribute__((used)) static char *
FUNC_4 (bfd *VAR_3, char *VAR_4,
        const struct comp_unit_head *VAR_5,
        unsigned int *VAR_6)
{
  LONGEST VAR_7 = FUNC_3 (VAR_3, VAR_4, VAR_5,
        (int *) VAR_6);

  if (VAR_1 == ((void*)0))
    {
      FUNC_1 ("DW_FORM_strp used without .debug_str section [in module %s]",
        FUNC_0 (VAR_3));
      return ((void*)0);
    }
  if (VAR_7 >= VAR_2)
    {
      FUNC_1 ("DW_FORM_strp pointing outside of .debug_str section [in module %s]",
        FUNC_0 (VAR_3));
      return ((void*)0);
    }
  FUNC_2 (VAR_0 == 8);
  if (VAR_1[VAR_7] == '\0')
    return ((void*)0);
  return VAR_1 + VAR_7;
}
