
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int stream; int mutex; } ;
typedef TYPE_1__ logger_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,int *) ;

svn_error_t *
FUNC_2(logger_t *VAR_1,
              const char *VAR_2,
              apr_size_t VAR_3)
{
  FUNC_0(VAR_1->mutex,
                       FUNC_1(VAR_1->stream, VAR_2, &VAR_3));
  return VAR_0;
}
