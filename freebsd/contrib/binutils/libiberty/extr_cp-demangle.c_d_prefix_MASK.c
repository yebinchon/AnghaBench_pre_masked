
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;
typedef enum demangle_component_type { ____Placeholder_demangle_component_type } demangle_component_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct d_info*,struct demangle_component*) ;
 struct demangle_component* FUNC_3 (struct d_info*,int,struct demangle_component*,struct demangle_component*) ;
 char FUNC_4 (struct d_info*) ;
 struct demangle_component* FUNC_5 (struct d_info*,int) ;
 struct demangle_component* FUNC_6 (struct d_info*) ;
 struct demangle_component* FUNC_7 (struct d_info*) ;
 struct demangle_component* FUNC_8 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_9 (struct d_info *VAR_2)
{
  struct demangle_component *VAR_3 = ((void*)0);

  while (1)
    {
      char VAR_4;
      enum demangle_component_type VAR_5;
      struct demangle_component *VAR_6;

      VAR_4 = FUNC_4 (VAR_2);
      if (VAR_4 == '\0')
 return ((void*)0);





      VAR_5 = VAR_0;
      if (FUNC_0 (VAR_4)
   || FUNC_1 (VAR_4)
   || VAR_4 == 'C'
   || VAR_4 == 'D'
   || VAR_4 == 'L')
 VAR_6 = FUNC_8 (VAR_2);
      else if (VAR_4 == 'S')
 VAR_6 = FUNC_5 (VAR_2, 1);
      else if (VAR_4 == 'I')
 {
   if (VAR_3 == ((void*)0))
     return ((void*)0);
   VAR_5 = VAR_1;
   VAR_6 = FUNC_6 (VAR_2);
 }
      else if (VAR_4 == 'T')
 VAR_6 = FUNC_7 (VAR_2);
      else if (VAR_4 == 'E')
 return VAR_3;
      else
 return ((void*)0);

      if (VAR_3 == ((void*)0))
 VAR_3 = VAR_6;
      else
 VAR_3 = FUNC_3 (VAR_2, VAR_5, VAR_3, VAR_6);

      if (VAR_4 != 'S' && FUNC_4 (VAR_2) != 'E')
 {
   if (! FUNC_2 (VAR_2, VAR_3))
     return ((void*)0);
 }
    }
}
