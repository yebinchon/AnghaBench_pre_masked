
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int * stack; } ;
typedef int bfd_signed_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pr_handle*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pr_handle*,char*) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_1, bfd_signed_vma VAR_2, bfd_signed_vma VAR_3)
{
  struct pr_handle *VAR_4 = (struct pr_handle *) VAR_1;
  char VAR_5[20], VAR_6[20];

  FUNC_1 (VAR_4->stack != ((void*)0));

  if (! FUNC_4 (VAR_4, ""))
    return VAR_0;

  FUNC_3 (VAR_2, VAR_5, VAR_0, VAR_0);
  FUNC_3 (VAR_3, VAR_6, VAR_0, VAR_0);

  return (FUNC_2 (VAR_4, "range (")
   && FUNC_0 (VAR_4, "):")
   && FUNC_0 (VAR_4, VAR_5)
   && FUNC_0 (VAR_4, ":")
   && FUNC_0 (VAR_4, VAR_6));
}
