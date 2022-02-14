
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int pool; int stream; int mutex; } ;
typedef TYPE_1__ logger_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int **,char const*,int,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;

svn_error_t *
FUNC_6(logger_t **VAR_7,
               const char *VAR_8,
               apr_pool_t *VAR_9)
{
  logger_t *VAR_10 = FUNC_1(VAR_9, sizeof(*VAR_10));
  apr_file_t *VAR_11;

  FUNC_0(FUNC_2(&VAR_11, VAR_8,
                           VAR_3 | VAR_1 | VAR_0,
                           VAR_2, VAR_9));
  FUNC_0(FUNC_3(&VAR_10->mutex, VAR_6, VAR_9));

  VAR_10->stream = FUNC_5(VAR_11, VAR_4, VAR_9);
  VAR_10->pool = FUNC_4(VAR_9);

  *VAR_7 = VAR_10;

  return VAR_5;
}
