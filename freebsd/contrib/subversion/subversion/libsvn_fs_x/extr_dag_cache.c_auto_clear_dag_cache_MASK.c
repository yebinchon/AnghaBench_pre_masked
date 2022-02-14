
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ insertions; int buckets; int pool; } ;
typedef TYPE_1__ svn_fs_x__dag_cache_t ;
typedef int svn_boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_fs_x__dag_cache_t* VAR_3)
{
  if (VAR_3->insertions <= VAR_0)
    return VAR_1;

  FUNC_1(VAR_3->pool);

  FUNC_0(VAR_3->buckets, 0, sizeof(VAR_3->buckets));
  VAR_3->insertions = 0;

  return VAR_2;
}
