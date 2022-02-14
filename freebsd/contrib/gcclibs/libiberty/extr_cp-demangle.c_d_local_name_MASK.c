
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct d_info*,int) ;
 int FUNC_1 (struct d_info*,char) ;
 int FUNC_2 (struct d_info*) ;
 struct demangle_component* FUNC_3 (struct d_info*,int ) ;
 struct demangle_component* FUNC_4 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 struct demangle_component* FUNC_5 (struct d_info*,char*,int) ;
 struct demangle_component* FUNC_6 (struct d_info*) ;
 char FUNC_7 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_8 (struct d_info *VAR_1)
{
  struct demangle_component *VAR_2;

  if (! FUNC_1 (VAR_1, 'Z'))
    return ((void*)0);

  VAR_2 = FUNC_3 (VAR_1, 0);

  if (! FUNC_1 (VAR_1, 'E'))
    return ((void*)0);

  if (FUNC_7 (VAR_1) == 's')
    {
      FUNC_0 (VAR_1, 1);
      if (! FUNC_2 (VAR_1))
 return ((void*)0);
      return FUNC_4 (VAR_1, VAR_0, VAR_2,
     FUNC_5 (VAR_1, "string literal",
           sizeof "string literal" - 1));
    }
  else
    {
      struct demangle_component *VAR_3;

      VAR_3 = FUNC_6 (VAR_1);
      if (! FUNC_2 (VAR_1))
 return ((void*)0);
      return FUNC_4 (VAR_1, VAR_0, VAR_2, VAR_3);
    }
}
