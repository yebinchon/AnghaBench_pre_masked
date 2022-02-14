
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int filehandle_pool; int scratch_pool; } ;
typedef TYPE_1__ rep_read_baton_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1)
{
  rep_read_baton_t *VAR_2 = VAR_1;

  FUNC_0(VAR_2->scratch_pool);
  FUNC_0(VAR_2->filehandle_pool);

  return VAR_0;
}
