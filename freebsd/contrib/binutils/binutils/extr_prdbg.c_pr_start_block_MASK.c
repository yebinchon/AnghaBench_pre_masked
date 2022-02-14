
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {scalar_t__ parameter; int indent; int f; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pr_handle*) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_1, bfd_vma VAR_2)
{
  struct pr_handle *VAR_3 = (struct pr_handle *) VAR_1;
  char VAR_4[20];

  if (VAR_3->parameter > 0)
    {
      FUNC_0 (VAR_3->f, ")\n");
      VAR_3->parameter = 0;
    }

  FUNC_1 (VAR_3);
  FUNC_2 (VAR_2, VAR_4, VAR_0, VAR_0);
  FUNC_0 (VAR_3->f, "{ /* %s */\n", VAR_4);

  VAR_3->indent += 2;

  return VAR_0;
}
