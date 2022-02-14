
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int baton; int (* close_fn ) (int ) ;} ;
typedef TYPE_1__ svn_stream_t ;
typedef int svn_error_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_stream_t *VAR_1)
{
  if (VAR_1->close_fn == ((void*)0))
    return VAR_0;
  return FUNC_1(VAR_1->close_fn(VAR_1->baton));
}
