
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_8__ {scalar_t__ len; void* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_9__ {TYPE_6__* window; } ;
typedef TYPE_3__ svn_fs_x__txdelta_cached_window_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {TYPE_1__* new_data; } ;
struct TYPE_7__ {scalar_t__ len; } ;


 int * VAR_0 ;
 int FUNC_0 (int *,TYPE_6__**) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_3__*,int,scalar_t__,int *) ;

svn_error_t *
FUNC_3(void **VAR_1,
                                   apr_size_t *VAR_2,
                                   void *VAR_3,
                                   apr_pool_t *VAR_4)
{
  svn_fs_x__txdelta_cached_window_t *VAR_5 = VAR_3;
  svn_stringbuf_t *VAR_6;



  apr_size_t VAR_7 = VAR_5->window->new_data
                      ? VAR_5->window->new_data->len
                      : 0;
  svn_temp_serializer__context_t *VAR_8 =
      FUNC_2(VAR_5,
                                sizeof(*VAR_5),
                                500 + VAR_7,
                                VAR_4);


  FUNC_0(VAR_8, &VAR_5->window);


  VAR_6 = FUNC_1(VAR_8);

  *VAR_1 = VAR_6->data;
  *VAR_2 = VAR_6->len;

  return VAR_0;
}
