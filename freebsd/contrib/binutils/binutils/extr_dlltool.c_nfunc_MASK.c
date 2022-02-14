
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
typedef TYPE_1__ export_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_1, const void *VAR_2)
{
  export_type *VAR_3 = *(export_type **) VAR_1;
  export_type *VAR_4 = *(export_type **) VAR_2;
  const char *VAR_5 = VAR_3->name;
  const char *VAR_6 = VAR_4->name;

  if (VAR_0)
    {
      VAR_5 = (VAR_5[0] == '@') ? VAR_5 + 1 : VAR_5;
      VAR_6 = (VAR_6[0] == '@') ? VAR_6 + 1 : VAR_6;
    }

  return (FUNC_0 (VAR_5, VAR_6));
}
