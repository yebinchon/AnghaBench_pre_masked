
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; int entry; } ;
typedef TYPE_1__ parent_path_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static const char *
FUNC_2(parent_path_t *VAR_0,
                    parent_path_t *VAR_1,
                    apr_pool_t *VAR_2)
{
  const char *VAR_3 = "";
  parent_path_t *VAR_4 = VAR_0;
  while (VAR_4 != VAR_1)
    {
      FUNC_0(VAR_4 != ((void*)0));
      VAR_3 = FUNC_1(VAR_4->entry, VAR_3, VAR_2);
      VAR_4 = VAR_4->parent;
    }
  return VAR_3;
}
