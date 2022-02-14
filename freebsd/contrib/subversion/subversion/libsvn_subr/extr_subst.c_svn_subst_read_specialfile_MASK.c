
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int filetype; } ;
typedef TYPE_2__ apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_1__**,char const*,int *) ;
 int FUNC_3 (TYPE_2__*,char const*,int,int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int **,char const*,int *,int *) ;
 int FUNC_6 (int *,char*,int ) ;

svn_error_t *
FUNC_7(svn_stream_t **VAR_3,
                           const char *VAR_4,
                           apr_pool_t *VAR_5,
                           apr_pool_t *VAR_6)
{
  apr_finfo_t VAR_7;
  svn_string_t *VAR_8;



  FUNC_0(FUNC_3(&VAR_7, VAR_4, VAR_1 | VAR_0,
                      VAR_6));

  switch (VAR_7.filetype) {
  case 128:


    FUNC_0(FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6));
    break;

  case 129:

    FUNC_0(FUNC_2(&VAR_8, VAR_4, VAR_6));
    *VAR_3 = FUNC_4(FUNC_6(VAR_5,
                                                        "link %s",
                                                        VAR_8->data),
                                     VAR_5);
    break;

  default:
    FUNC_1();
  }

  return VAR_2;
}
