
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (void*,unsigned int) ;
 int FUNC_1 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_1, unsigned int VAR_2)
{
  struct pr_handle *VAR_3 = (struct pr_handle *) VAR_1;

  if (! FUNC_0 (VAR_1, VAR_2))
    return VAR_0;

  return FUNC_1 (VAR_3, "complex ");
}
