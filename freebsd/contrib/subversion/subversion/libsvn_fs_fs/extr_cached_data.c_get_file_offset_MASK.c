
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {TYPE_2__* sfile; } ;
typedef TYPE_3__ rep_state_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_6__ {TYPE_1__* rfile; } ;
struct TYPE_5__ {int file; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_off_t *VAR_0,
                rep_state_t *VAR_1,
                apr_pool_t *VAR_2)
{
  return FUNC_0(FUNC_1(VAR_0,
                                                VAR_1->sfile->rfile->file,
                                                VAR_2));
}
