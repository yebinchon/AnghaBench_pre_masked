
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_proplist_receiver_t ;
typedef int svn_proplist_receiver2_t ;
struct proplist_receiver_wrapper_baton {int receiver; void* baton; } ;
typedef int apr_pool_t ;


 struct proplist_receiver_wrapper_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(svn_proplist_receiver2_t *VAR_1,
                       void **VAR_2,
                       svn_proplist_receiver_t VAR_3,
                       void *VAR_4,
                       apr_pool_t *VAR_5)
{
  struct proplist_receiver_wrapper_baton *VAR_6 = FUNC_0(VAR_5,
                                                             sizeof(*VAR_6));


  VAR_6->baton = VAR_4;
  VAR_6->receiver = VAR_3;

  *VAR_2 = VAR_6;
  *VAR_1 = VAR_0;
}
