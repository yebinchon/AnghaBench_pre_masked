
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_stream_t ;
struct string_stream_baton {scalar_t__ amt_read; int const* str; } ;
typedef int apr_pool_t ;


 struct string_stream_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (struct string_stream_baton*,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

svn_stream_t *
FUNC_9(const svn_string_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;
  struct string_stream_baton *VAR_9;

  if (! VAR_6)
    return FUNC_2(VAR_7);

  VAR_9 = FUNC_0(VAR_7, sizeof(*VAR_9));
  VAR_9->str = VAR_6;
  VAR_9->amt_read = 0;
  VAR_8 = FUNC_1(VAR_9, VAR_7);
  FUNC_5(VAR_8, VAR_2, VAR_2);
  FUNC_4(VAR_8, VAR_1);
  FUNC_7(VAR_8, VAR_4);
  FUNC_8(VAR_8, VAR_5);
  FUNC_3(VAR_8, VAR_0);
  FUNC_6(VAR_8, VAR_3);
  return VAR_8;
}
