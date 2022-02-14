
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int real_stream; } ;
typedef TYPE_1__ lazyopen_baton_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_0,
                                svn_boolean_t *VAR_1)
{
  lazyopen_baton_t *VAR_2 = VAR_0;

  FUNC_0(FUNC_1(VAR_2));
  return FUNC_2(FUNC_3(VAR_2->real_stream,
                                                   VAR_1));
}
