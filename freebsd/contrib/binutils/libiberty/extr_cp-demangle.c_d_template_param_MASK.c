
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int did_subs; } ;


 int FUNC_0 (struct d_info*,char) ;
 struct demangle_component* FUNC_1 (struct d_info*,long) ;
 long FUNC_2 (struct d_info*) ;
 char FUNC_3 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_4 (struct d_info *VAR_0)
{
  long VAR_1;

  if (! FUNC_0 (VAR_0, 'T'))
    return ((void*)0);

  if (FUNC_3 (VAR_0) == '_')
    VAR_1 = 0;
  else
    {
      VAR_1 = FUNC_2 (VAR_0);
      if (VAR_1 < 0)
 return ((void*)0);
      VAR_1 += 1;
    }

  if (! FUNC_0 (VAR_0, '_'))
    return ((void*)0);

  ++VAR_0->did_subs;

  return FUNC_1 (VAR_0, VAR_1);
}
