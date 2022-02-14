
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int baton; int (* seek_fn ) (int ,int const*) ;} ;
typedef TYPE_1__ svn_stream_t ;
typedef int svn_stream_mark_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int ,int *,int *) ;
 int * FUNC_2 (int ) ;

svn_error_t *
FUNC_3(svn_stream_t *VAR_1, const svn_stream_mark_t *VAR_2)
{
  if (VAR_1->seek_fn == ((void*)0))
    return FUNC_1(VAR_0, ((void*)0), ((void*)0));

  return FUNC_2(VAR_1->seek_fn(VAR_1->baton, VAR_2));
}
