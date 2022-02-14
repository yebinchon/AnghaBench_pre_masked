
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int block_size; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int cancel_baton; int (* cancel_func ) (int ) ;TYPE_1__* fs; } ;
typedef TYPE_3__ pack_context_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int,int *,int *,int *) ;
 int FUNC_5 (int *,char*,int,int *,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(pack_context_t *VAR_1,
               apr_file_t *VAR_2,
               apr_file_t *VAR_3,
               svn_filesize_t VAR_4,
               apr_pool_t *VAR_5)
{


  enum { STACK_BUFFER_SIZE = 1024 };

  if (VAR_4 < STACK_BUFFER_SIZE)
    {

      char VAR_6[STACK_BUFFER_SIZE];
      FUNC_1(FUNC_4(VAR_3, VAR_6, (apr_size_t)VAR_4,
                                     ((void*)0), ((void*)0), VAR_5));
      FUNC_1(FUNC_5(VAR_2, VAR_6, (apr_size_t)VAR_4,
                                     ((void*)0), VAR_5));
    }
  else
    {



      svn_fs_x__data_t *VAR_7 = VAR_1->fs->fsap_data;
      apr_pool_t *VAR_8 = FUNC_6(VAR_5);
      char *VAR_9 = FUNC_2(VAR_8, VAR_7->block_size);

      while (VAR_4)
        {
          apr_size_t VAR_10 = (apr_size_t)(FUNC_0(VAR_4, VAR_7->block_size));
          if (VAR_1->cancel_func)
            FUNC_1(VAR_1->cancel_func(VAR_1->cancel_baton));

          FUNC_1(FUNC_4(VAR_3, VAR_9, VAR_10,
                                         ((void*)0), ((void*)0), VAR_5));
          FUNC_1(FUNC_5(VAR_2, VAR_9, VAR_10,
                                         ((void*)0), VAR_5));

          VAR_4 -= VAR_10;
        }

      FUNC_7(VAR_8);
    }

  return VAR_0;
}
