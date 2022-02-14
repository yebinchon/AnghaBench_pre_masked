
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int baton; int (* read_full_fn ) (int ,char*,int *) ;} ;
typedef TYPE_1__ svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int FUNC_0 (TYPE_1__*,char*,int *) ;
 int FUNC_1 (int ,char*,int *) ;
 int * FUNC_2 (int ) ;

svn_error_t *
FUNC_3(svn_stream_t *VAR_0, char *VAR_1, apr_size_t *VAR_2)
{
  if (VAR_0->read_full_fn == ((void*)0))
    return FUNC_2(FUNC_0(VAR_0, VAR_1, VAR_2));

  return FUNC_2(VAR_0->read_full_fn(VAR_0->baton, VAR_1, VAR_2));
}
