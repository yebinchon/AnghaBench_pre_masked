
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ svn_fs_x__dirent_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {int nelts; scalar_t__ elts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(apr_array_header_t *VAR_2)
{
  int VAR_3;

  const svn_fs_x__dirent_t * const *VAR_4 = (const void *)VAR_2->elts;
  for (VAR_3 = 0; VAR_3 < VAR_2->nelts-1; ++VAR_3)
    if (FUNC_0(VAR_4[VAR_3]->name, VAR_4[VAR_3+1]->name) > 0)
      return VAR_0;

  return VAR_1;
}
