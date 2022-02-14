
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int current; } ;
typedef TYPE_1__ rep_state_t ;
typedef scalar_t__ apr_size_t ;
typedef scalar_t__ apr_off_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(rep_state_t *VAR_1,
                  apr_size_t VAR_2)
{

  VAR_1->current += (apr_off_t)VAR_2;

  return VAR_0;
}
