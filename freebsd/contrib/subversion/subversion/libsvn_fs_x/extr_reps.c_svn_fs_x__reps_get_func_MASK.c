
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* instructions; void* first_instructions; void* bases; void* text; } ;
typedef TYPE_1__ svn_fs_x__reps_t ;
struct TYPE_8__ {int idx; int fs; } ;
typedef TYPE_2__ svn_fs_x__reps_baton_t ;
typedef int svn_fs_x__rep_extractor_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__ const*,int) ;
 int FUNC_2 (int **,int ,TYPE_1__*,int ,int *) ;
 void* FUNC_3 (TYPE_1__ const*,void const**) ;

svn_error_t *
FUNC_4(void **VAR_1,
                        const void *VAR_2,
                        apr_size_t VAR_3,
                        void *VAR_4,
                        apr_pool_t *VAR_5)
{
  svn_fs_x__reps_baton_t *VAR_6 = VAR_4;


  const svn_fs_x__reps_t *VAR_7 = VAR_2;
  svn_fs_x__reps_t *VAR_8 = FUNC_1(VAR_5, VAR_7, sizeof(*VAR_8));

  VAR_8->text
    = FUNC_3(VAR_7, (const void **)&VAR_7->text);
  VAR_8->bases
    = FUNC_3(VAR_7, (const void **)&VAR_7->bases);
  VAR_8->first_instructions
    = FUNC_3(VAR_7,
                                 (const void **)&VAR_7->first_instructions);
  VAR_8->instructions
    = FUNC_3(VAR_7,
                                 (const void **)&VAR_7->instructions);


  FUNC_0(FUNC_2((svn_fs_x__rep_extractor_t **)VAR_1,
                             VAR_6->fs, VAR_8, VAR_6->idx, VAR_5));

  return VAR_0;
}
