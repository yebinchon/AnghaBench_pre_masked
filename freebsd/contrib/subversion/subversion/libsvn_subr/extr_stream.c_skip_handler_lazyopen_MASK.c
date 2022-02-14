
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int real_stream; } ;
typedef TYPE_1__ lazyopen_baton_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
                      apr_size_t VAR_2)
{
  lazyopen_baton_t *VAR_3 = VAR_1;

  FUNC_0(FUNC_1(VAR_3));
  FUNC_0(FUNC_2(VAR_3->real_stream, VAR_2));

  return VAR_0;
}
