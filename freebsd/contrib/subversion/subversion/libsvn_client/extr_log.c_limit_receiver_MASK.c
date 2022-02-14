
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_log_entry_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int baton; int * (* receiver ) (int ,int *,int *) ;int limit; } ;
typedef TYPE_1__ limit_receiver_baton_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0, svn_log_entry_t *VAR_1, apr_pool_t *VAR_2)
{
  limit_receiver_baton_t *VAR_3 = VAR_0;

  VAR_3->limit--;

  return VAR_3->receiver(VAR_3->baton, VAR_1, VAR_2);
}
