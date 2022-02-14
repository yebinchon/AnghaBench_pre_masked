
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pr_handle*,char*) ;
 int FUNC_1 (struct pr_handle*,char*) ;
 int FUNC_2 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_2, bfd_boolean VAR_3)
{
  struct pr_handle *VAR_4 = (struct pr_handle *) VAR_2;

  if (! FUNC_2 (VAR_4, ""))
    return VAR_0;

  if (! FUNC_1 (VAR_4, "set { ")
      || ! FUNC_0 (VAR_4, " }"))
    return VAR_0;

  if (VAR_3)
    {
      if (! FUNC_0 (VAR_4, "/* bitstring */"))
 return VAR_0;
    }

  return VAR_1;
}
