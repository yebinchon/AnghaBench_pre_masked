
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_7__ {int len; void* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_6__ {scalar_t__ len; int data; } ;
struct TYPE_8__ {TYPE_1__ window; } ;
typedef TYPE_3__ svn_fs_fs__raw_cached_window_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,void const* const*,scalar_t__) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_3__*,int,scalar_t__,int *) ;

svn_error_t *
FUNC_3(void **VAR_1,
                                apr_size_t *VAR_2,
                                void *VAR_3,
                                apr_pool_t *VAR_4)
{
  svn_fs_fs__raw_cached_window_t *VAR_5 = VAR_3;
  svn_stringbuf_t *VAR_6;



  svn_temp_serializer__context_t *VAR_7 =
      FUNC_2(VAR_5,
                                sizeof(*VAR_5),
                                sizeof(*VAR_5) + VAR_5->window.len + 16,
                                VAR_4);


  FUNC_0(VAR_7,
                                (const void * const *)&VAR_5->window.data,
                                VAR_5->window.len + 1);


  VAR_6 = FUNC_1(VAR_7);

  *VAR_1 = VAR_6->data;
  *VAR_2 = VAR_6->len;

  return VAR_0;
}
