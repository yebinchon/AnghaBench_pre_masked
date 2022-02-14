
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_client_blame_receiver_t ;
struct wrapped_receiver_baton_s {void* orig_baton; int orig_receiver; } ;
typedef int apr_pool_t ;
typedef int APR_EOL_STR ;


 struct wrapped_receiver_baton_s* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(svn_client_blame_receiver_t *VAR_1,
                         void **VAR_2,
                         apr_pool_t *VAR_3)
{
  if (sizeof(APR_EOL_STR) == 3)
    {
      struct wrapped_receiver_baton_s *VAR_4 = FUNC_0(VAR_3,sizeof(*VAR_4));

      VAR_4->orig_receiver = *VAR_1;
      VAR_4->orig_baton = *VAR_2;

      *VAR_2 = VAR_4;
      *VAR_1 = VAR_0;
    }
}
