
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int filesize; } ;
typedef TYPE_3__ svn_io_dirent2_t ;
struct TYPE_10__ {int noderev_id; TYPE_2__* data_rep; } ;
typedef TYPE_4__ svn_fs_x__noderev_t ;
typedef int svn_fs_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int change_set; } ;
struct TYPE_8__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (TYPE_3__ const**,char const*,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_filesize_t *VAR_3,
                 svn_fs_t *VAR_4,
                 svn_fs_x__noderev_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  if (VAR_5->data_rep
      && ! FUNC_1(VAR_5->data_rep->id.change_set))
    {
      const svn_io_dirent2_t *VAR_7;
      const char *VAR_8;

      VAR_8 = FUNC_2(VAR_4, &VAR_5->noderev_id,
                                                  VAR_6, VAR_6);

      FUNC_0(FUNC_3(&VAR_7, VAR_8, VAR_0, VAR_0,
                                  VAR_6, VAR_6));
      *VAR_3 = VAR_7->filesize;
    }
  else
    {
      *VAR_3 = VAR_1;
    }

  return VAR_2;
}
