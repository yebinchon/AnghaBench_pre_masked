
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_7__ {int mtime; int filesize; } ;
typedef TYPE_2__ svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int ,int ,int *) ;
 char* FUNC_6 (int ,char const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_wc__db_wcroot_t *VAR_1,
          apr_hash_t *VAR_2,
          apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;
  apr_pool_t *VAR_5 = FUNC_8(VAR_3);

  for (VAR_4 = FUNC_1(VAR_3, VAR_2); VAR_4;
       VAR_4 = FUNC_2(VAR_4))
    {
      const char *VAR_6 = FUNC_3(VAR_4);
      const svn_io_dirent2_t *VAR_7 = FUNC_4(VAR_4);
      const char *VAR_8 = FUNC_6(VAR_1->abspath,
                                                           VAR_6);

      FUNC_7(VAR_5);

      if (! VAR_8)
        continue;

      FUNC_0(FUNC_5(VAR_1, VAR_8,
                                 VAR_7->filesize, VAR_7->mtime,
                                 VAR_5));
    }

  FUNC_9(VAR_5);
  return VAR_0;
}
