
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct file_baton {int path; TYPE_1__* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int txn_root; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int * FUNC_3 (int *,int *,int *,int ,int ) ;
 int FUNC_4 (int **,int ,char const*,int *) ;
 int FUNC_5 (int **,int ,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_3,
           const char *VAR_4,
           apr_pool_t *VAR_5)
{
  struct file_baton *VAR_6 = VAR_3;

  if (VAR_4)
    {
      svn_checksum_t *VAR_7;
      svn_checksum_t *VAR_8;

      FUNC_0(FUNC_5(&VAR_7, VAR_2,
                                   VAR_6->edit_baton->txn_root, VAR_6->path,
                                   VAR_1, VAR_5));
      FUNC_0(FUNC_4(&VAR_8, VAR_2,
                                     VAR_4, VAR_5));

      if (!FUNC_2(VAR_8, VAR_7))
        return FUNC_3(VAR_8, VAR_7, VAR_5,
                            FUNC_1("Checksum mismatch for resulting fulltext\n(%s)"),
                            VAR_6->path);
    }

  return VAR_0;
}
