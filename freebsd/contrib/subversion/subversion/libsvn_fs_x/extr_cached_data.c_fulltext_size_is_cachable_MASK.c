
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fulltext_cache; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_boolean_t ;
typedef int apr_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(svn_fs_x__data_t *VAR_1,
                          svn_filesize_t VAR_2)
{
  return (VAR_2 < VAR_0)
      && FUNC_0(VAR_1->fulltext_cache, (apr_size_t)VAR_2);
}
