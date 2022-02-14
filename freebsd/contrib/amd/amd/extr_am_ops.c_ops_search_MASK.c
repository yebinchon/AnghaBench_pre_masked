
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fs_type; } ;
typedef TYPE_1__ am_ops ;


 scalar_t__ FUNC_0 (int ,char*) ;
 TYPE_1__** VAR_0 ;

am_ops *
FUNC_1(char *VAR_1)
{
  am_ops **VAR_2;
  am_ops *VAR_3 = ((void*)0);
  for (VAR_2 = VAR_0; (VAR_3 = *VAR_2); VAR_2++)
    if (FUNC_0(VAR_3->fs_type, VAR_1))
      break;
  return VAR_3;
}
