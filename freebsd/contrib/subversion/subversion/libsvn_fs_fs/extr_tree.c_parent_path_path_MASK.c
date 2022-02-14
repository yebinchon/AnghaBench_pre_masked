
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; struct TYPE_3__* parent; } ;
typedef TYPE_1__ parent_path_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (char const*,int ,int *) ;

__attribute__((used)) static const char *
FUNC_1(parent_path_t *VAR_0,
                 apr_pool_t *VAR_1)
{
  const char *VAR_2 = "/";
  if (VAR_0->parent)
    VAR_2 = FUNC_1(VAR_0->parent, VAR_1);
  return VAR_0->entry
    ? FUNC_0(VAR_2, VAR_0->entry, VAR_1)
    : VAR_2;
}
