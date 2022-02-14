
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_stream_lazyopen_func_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {int open_on_close; int * pool; int * real_stream; void* open_baton; int open_func; } ;
typedef TYPE_1__ lazyopen_baton_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int VAR_8 ;

svn_stream_t *
FUNC_10(svn_stream_lazyopen_func_t VAR_9,
                           void *VAR_10,
                           svn_boolean_t VAR_11,
                           apr_pool_t *VAR_12)
{
  lazyopen_baton_t *VAR_13 = FUNC_0(VAR_12, sizeof(*VAR_13));
  svn_stream_t *VAR_14;

  VAR_13->open_func = VAR_9;
  VAR_13->open_baton = VAR_10;
  VAR_13->real_stream = ((void*)0);
  VAR_13->pool = VAR_12;
  VAR_13->open_on_close = VAR_11;

  VAR_14 = FUNC_1(VAR_13, VAR_12);
  FUNC_5(VAR_14, VAR_4,
                       VAR_3);
  FUNC_8(VAR_14, VAR_7);
  FUNC_9(VAR_14, VAR_8);
  FUNC_2(VAR_14, VAR_0);
  FUNC_4(VAR_14, VAR_2);
  FUNC_7(VAR_14, VAR_6);
  FUNC_3(VAR_14, VAR_1);
  FUNC_6(VAR_14, VAR_5);

  return VAR_14;
}
