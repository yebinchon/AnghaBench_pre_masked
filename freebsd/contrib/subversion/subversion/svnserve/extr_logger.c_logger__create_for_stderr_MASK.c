
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int mutex; int stream; int pool; } ;
typedef TYPE_1__ logger_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

svn_error_t *
FUNC_5(logger_t **VAR_2,
                          apr_pool_t *VAR_3)
{
  logger_t *VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
  VAR_4->pool = FUNC_3(VAR_3);

  FUNC_0(FUNC_4(&VAR_4->stream, VAR_3));
  FUNC_0(FUNC_2(&VAR_4->mutex, VAR_1, VAR_3));

  *VAR_2 = VAR_4;

  return VAR_0;
}
