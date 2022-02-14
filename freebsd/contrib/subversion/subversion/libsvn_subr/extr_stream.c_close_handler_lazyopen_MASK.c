
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ real_stream; scalar_t__ open_on_close; } ;
typedef TYPE_1__ lazyopen_baton_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1)
{
  lazyopen_baton_t *VAR_2 = VAR_1;

  if (VAR_2->open_on_close)
    FUNC_0(FUNC_1(VAR_2));
  if (VAR_2->real_stream)
    FUNC_0(FUNC_2(VAR_2->real_stream));

  return VAR_0;
}
