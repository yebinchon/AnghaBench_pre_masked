
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
struct TYPE_5__ {int stream; int file; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int id; } ;
typedef TYPE_2__ node_revision_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int *,int ,int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__**,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_id_t **VAR_1,
                    svn_fs_fs__revision_file_t *VAR_2,
                    svn_fs_t *VAR_3,
                    svn_revnum_t VAR_4,
                    apr_off_t VAR_5,
                    apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7;

  FUNC_0(FUNC_1(VAR_3, VAR_2->file, ((void*)0), VAR_5, VAR_6));
  FUNC_0(FUNC_5(&VAR_7,
                                  VAR_2->stream,
                                  VAR_6, VAR_6));


  *VAR_1 = FUNC_3(VAR_7->id, VAR_6);




  FUNC_2(FUNC_4(*VAR_1) == VAR_4);

  return VAR_0;
}
