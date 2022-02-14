
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_print_info {int dummy; } ;
typedef int demangle_callbackref ;


 int FUNC_0 (struct d_print_info*,struct demangle_component const*) ;
 int FUNC_1 (struct d_print_info*) ;
 int FUNC_2 (struct d_print_info*,int,int ,void*) ;
 int FUNC_3 (struct d_print_info*) ;

int
FUNC_4 (int VAR_0,
                               const struct demangle_component *VAR_1,
                               demangle_callbackref VAR_2, void *VAR_3)
{
  struct d_print_info VAR_4;

  FUNC_2 (&VAR_4, VAR_0, VAR_2, VAR_3);

  FUNC_0 (&VAR_4, VAR_1);

  FUNC_1 (&VAR_4);

  return ! FUNC_3 (&VAR_4);
}
