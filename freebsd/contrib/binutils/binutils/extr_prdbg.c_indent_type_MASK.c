
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {unsigned int indent; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct pr_handle *VAR_2)
{
  unsigned int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2->indent; VAR_3++)
    {
      if (! FUNC_0 (VAR_2, " "))
 return VAR_0;
    }

  return VAR_1;
}
