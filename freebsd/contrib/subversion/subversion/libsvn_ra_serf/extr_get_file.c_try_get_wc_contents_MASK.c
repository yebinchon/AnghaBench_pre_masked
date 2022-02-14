
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_5__ {int wc_callback_baton; TYPE_1__* wc_callbacks; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int * (* get_wc_contents ) (int ,int **,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int **,int *,int *) ;
 int FUNC_2 (int **,int ,char const*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_4,
                    svn_ra_serf__session_t *VAR_5,
                    const char *VAR_6,
                    svn_stream_t *VAR_7,
                    apr_pool_t *VAR_8)
{
  svn_checksum_t *VAR_9;
  svn_stream_t *VAR_10;
  svn_error_t *VAR_11;


  *VAR_4 = VAR_0;

  if (!VAR_5->wc_callbacks->get_wc_contents
      || VAR_6 == ((void*)0))
    {

      return VAR_1;
    }

  FUNC_0(FUNC_2(&VAR_9, VAR_3,
                                 VAR_6, VAR_8));

  VAR_11 = VAR_5->wc_callbacks->get_wc_contents(
          VAR_5->wc_callback_baton, &VAR_10, VAR_9, VAR_8);

  if (VAR_11)
    {
      FUNC_3(VAR_11);


      return VAR_1;
    }

  if (VAR_10)
    {
        FUNC_0(FUNC_4(VAR_10,
                                 FUNC_5(VAR_7, VAR_8),
                                 ((void*)0), ((void*)0), VAR_8));
      *VAR_4 = VAR_2;
    }

  return VAR_1;
}
