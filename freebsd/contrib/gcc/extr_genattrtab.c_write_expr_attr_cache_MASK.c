
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_desc {scalar_t__ name; int is_numeric; } ;
typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_1, struct attr_desc *VAR_2)
{
  const char *VAR_3;
  int VAR_4, VAR_5, VAR_6, VAR_7;

  if (FUNC_0 (VAR_1) == VAR_0)
    {
      if (FUNC_4 (VAR_1, 0) != VAR_2->name)
 return 0;

      if (!VAR_2->is_numeric)
 FUNC_7 ("  enum attr_%s ", VAR_2->name);
      else
 FUNC_7 ("  int ");

      FUNC_7 ("attr_%s = get_attr_%s (insn);\n", VAR_2->name, VAR_2->name);
      return 1;
    }

  VAR_3 = FUNC_1 (FUNC_0 (VAR_1));
  VAR_5 = FUNC_2 (FUNC_0 (VAR_1));
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
    {
      switch (*VAR_3++)
 {
 case 'e':
   if (FUNC_8 (FUNC_3 (VAR_1, VAR_4), VAR_2))
     return 1;
   break;

 case 'E':
   VAR_7 = FUNC_6 (VAR_1, VAR_4);
   for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
     if (FUNC_8 (FUNC_5 (VAR_1, VAR_4, VAR_6), VAR_2))
       return 1;
   break;
 }
    }

  return 0;
}
