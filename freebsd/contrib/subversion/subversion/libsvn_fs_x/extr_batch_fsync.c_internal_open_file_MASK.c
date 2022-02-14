
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int counter; int * result; int * pool; int * file; } ;
typedef TYPE_1__ to_sync_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_9__ {int files; int counter; } ;
typedef TYPE_2__ svn_fs_x__batch_fsync_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char const*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,char const*,int *) ;
 TYPE_1__* FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int FUNC_8 (char const*,scalar_t__*,int *) ;
 int * FUNC_9 (int **,char const*,int,int ,int *) ;
 scalar_t__ VAR_4 ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(apr_file_t **VAR_5,
                   svn_fs_x__batch_fsync_t *VAR_6,
                   const char *VAR_7,
                   apr_int32_t VAR_8,
                   apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;
  apr_pool_t *VAR_11;
  to_sync_t *VAR_12;





  VAR_12 = FUNC_6(VAR_6->files, VAR_7);
  if (VAR_12)
    {
      *VAR_5 = VAR_12->file;
      return VAR_3;
    }
  VAR_11 = FUNC_10(((void*)0));
  VAR_10 = FUNC_9(VAR_5, VAR_7, VAR_8, VAR_1, VAR_11);
  if (VAR_10)
    {
      FUNC_11(VAR_11);
      return FUNC_4(VAR_10);
    }

  VAR_12 = FUNC_2(VAR_11, sizeof(*VAR_12));
  VAR_12->file = *VAR_5;
  VAR_12->pool = VAR_11;
  VAR_12->result = VAR_3;
  VAR_12->counter = VAR_6->counter;

  FUNC_7(VAR_6->files,
                FUNC_3(FUNC_1(VAR_6->files), VAR_7),
                VAR_12);
  return VAR_3;
}
