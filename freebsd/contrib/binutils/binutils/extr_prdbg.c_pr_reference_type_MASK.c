
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int * stack; } ;
typedef int bfd_boolean ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_0)
{
  struct pr_handle *VAR_1 = (struct pr_handle *) VAR_0;

  FUNC_0 (VAR_1->stack != ((void*)0));

  return FUNC_1 (VAR_1, "&|");
}
