
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* first_instructions; } ;
typedef TYPE_1__ svn_fs_x__reps_t ;
struct TYPE_9__ {int * pool; int result; int * fs; } ;
typedef TYPE_2__ svn_fs_x__rep_extractor_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint32_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__ const*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;

svn_error_t *
FUNC_3(svn_fs_x__rep_extractor_t **VAR_1,
                   svn_fs_t *VAR_2,
                   const svn_fs_x__reps_t *VAR_3,
                   apr_size_t VAR_4,
                   apr_pool_t *VAR_5)
{
  apr_uint32_t VAR_6 = VAR_3->first_instructions[VAR_4];
  apr_uint32_t VAR_7 = VAR_3->first_instructions[VAR_4 + 1];


  svn_fs_x__rep_extractor_t *VAR_8 = FUNC_0(VAR_5,
                                                  sizeof(*VAR_8));
  VAR_8->fs = VAR_2;
  VAR_8->result = FUNC_2(VAR_5);
  VAR_8->pool = VAR_5;



  FUNC_1(VAR_8, VAR_3, VAR_6, VAR_7 - VAR_6);
  *VAR_1 = VAR_8;
  return VAR_0;
}
