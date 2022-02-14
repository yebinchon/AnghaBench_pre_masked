
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * fs; int owner; int fs_path; int * (* svn_fs_open_ ) (int **,int ,int *,int ,int ) ;} ;
typedef TYPE_1__ svn_fs_x__id_context_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;


 int FUNC_0 (int * (*) (int **,int ,int *,int ,int )) ;
 int * FUNC_1 (int **,int ,int *,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static svn_fs_t *
FUNC_3(svn_fs_x__id_context_t *VAR_0)
{
  if (!VAR_0->fs)
    {
      svn_error_t *VAR_1;

      FUNC_0(VAR_0->svn_fs_open_);

      VAR_1 = VAR_0->svn_fs_open_(&VAR_0->fs, VAR_0->fs_path, ((void*)0),
                                  VAR_0->owner, VAR_0->owner);
      if (VAR_1)
        {
          FUNC_2(VAR_1);
          VAR_0->fs = ((void*)0);
        }
    }

  return VAR_0->fs;
}
