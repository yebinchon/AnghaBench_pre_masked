
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int filesize; } ;
typedef TYPE_2__ svn_io_dirent2_t ;
typedef int svn_fs_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int id; TYPE_1__* data_rep; } ;
typedef TYPE_3__ node_revision_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int txn_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (TYPE_2__ const**,char const*,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_filesize_t *VAR_3,
                 svn_fs_t *VAR_4,
                 node_revision_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  if (VAR_5->data_rep && FUNC_1(&VAR_5->data_rep->txn_id))
    {
      const svn_io_dirent2_t *VAR_7;
      const char *VAR_8;

      VAR_8 = FUNC_2(VAR_4, VAR_5->id,
                                                   VAR_6);

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
