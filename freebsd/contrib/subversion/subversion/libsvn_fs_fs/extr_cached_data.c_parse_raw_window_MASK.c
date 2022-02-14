
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int len; int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_10__ {int end_offset; int window; } ;
typedef TYPE_3__ svn_fs_fs__txdelta_cached_window_t ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_11__ {int end_offset; int ver; TYPE_1__ window; } ;
typedef TYPE_4__ svn_fs_fs__raw_cached_window_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_3__* FUNC_1 (int *,int) ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_4__ const*,void const* const*) ;
 int FUNC_4 (int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void **VAR_1,
                 const void *VAR_2,
                 apr_size_t VAR_3,
                 void *VAR_4,
                 apr_pool_t *VAR_5)
{
  svn_string_t VAR_6;
  svn_stream_t *VAR_7;


  const svn_fs_fs__raw_cached_window_t *VAR_8
    = (const svn_fs_fs__raw_cached_window_t *)VAR_2;
  svn_fs_fs__txdelta_cached_window_t *VAR_9
    = FUNC_1(VAR_5, sizeof(*VAR_9));


  VAR_6.data = FUNC_3(VAR_8,
                                (const void * const *)&VAR_8->window.data);
  VAR_6.len = VAR_8->window.len;
  VAR_7 = FUNC_2(&VAR_6, VAR_5);


  FUNC_0(FUNC_4(&VAR_9->window, VAR_7, VAR_8->ver,
                                          VAR_5));


  VAR_9->end_offset = VAR_8->end_offset;
  *VAR_1 = VAR_9;

  return VAR_0;
}
