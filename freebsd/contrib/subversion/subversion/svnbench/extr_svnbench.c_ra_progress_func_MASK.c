
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytes_transferred; } ;
typedef TYPE_1__ ra_progress_baton_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;



__attribute__((used)) static void
FUNC_0(apr_off_t VAR_0,
                 apr_off_t VAR_1,
                 void *VAR_2,
                 apr_pool_t *VAR_3)
{
  ra_progress_baton_t *VAR_4 = VAR_2;
  VAR_4->bytes_transferred = VAR_0;
}
