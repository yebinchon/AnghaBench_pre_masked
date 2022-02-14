
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct getter_baton {int local_abspath; int * mime_type; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const svn_string_t **VAR_1,
                        svn_stream_t *VAR_2,
                        void *VAR_3,
                        apr_pool_t *VAR_4)
{
  struct getter_baton *VAR_5 = VAR_3;

  if (VAR_1)
    *VAR_1 = VAR_5->mime_type;

  if (VAR_2)
    {
      svn_stream_t *VAR_6;


      FUNC_0(FUNC_3(&VAR_6, VAR_5->local_abspath,
                                       VAR_4, VAR_4));
      FUNC_0(FUNC_1(VAR_6, FUNC_2(VAR_2, VAR_4),
                               ((void*)0), ((void*)0), VAR_4));
    }

  return VAR_0;
}
