
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct dir_baton_t {int pool; int local_abspath; TYPE_1__* eb; scalar_t__ local_info; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {int db; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__*,int **,int ,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(struct dir_baton_t *VAR_2,
                  apr_pool_t *VAR_3)
{
  apr_hash_t *VAR_4;

  if (VAR_2->local_info)
    return VAR_1;

  FUNC_0(FUNC_1(&VAR_2->local_info, &VAR_4,
                                        VAR_2->eb->db, VAR_2->local_abspath,
                                        VAR_0 ,
                                        VAR_2->pool, VAR_3));

  return VAR_1;
}
