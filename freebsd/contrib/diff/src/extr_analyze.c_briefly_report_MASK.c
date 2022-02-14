
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {char* name; } ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_1 (int VAR_2, struct file_data const VAR_3[])
{
  if (VAR_2)
    {
      char const *VAR_4 = VAR_1[0] ? VAR_1[0] : VAR_3[0].name;
      char const *VAR_5 = VAR_1[1] ? VAR_1[1] : VAR_3[1].name;
      FUNC_0 ("Files %s and %s differ\n", VAR_4, VAR_5);
      if (! VAR_0)
 VAR_2 = 2;
    }

  return VAR_2;
}
