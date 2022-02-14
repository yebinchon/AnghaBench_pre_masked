
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {TYPE_1__* stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char const* method; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (void *VAR_1, const char *VAR_2)
{
  struct pr_handle *VAR_3 = (struct pr_handle *) VAR_1;

  FUNC_0 (VAR_3->stack != ((void*)0));
  VAR_3->stack->method = VAR_2;
  return VAR_0;
}
