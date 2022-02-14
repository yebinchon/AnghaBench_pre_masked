
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int baton; int (* skip_fn ) (int ,int ) ;int * read_fn; int * read_full_fn; } ;
typedef TYPE_1__ svn_stream_t ;
typedef int * svn_read_fn_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (int ) ;

svn_error_t *
FUNC_4(svn_stream_t *VAR_1, apr_size_t VAR_2)
{
  if (VAR_1->skip_fn == ((void*)0))
    {
      svn_read_fn_t VAR_3 = VAR_1->read_full_fn ? VAR_1->read_full_fn
                                                   : VAR_1->read_fn;
      if (VAR_3 == ((void*)0))
        return FUNC_2(VAR_0, ((void*)0), ((void*)0));

      return FUNC_3(FUNC_0(VAR_1->baton, VAR_2,
                                                  VAR_3));
    }

  return FUNC_3(VAR_1->skip_fn(VAR_1->baton, VAR_2));
}
