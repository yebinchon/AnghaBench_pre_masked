
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int refcount; struct TYPE_7__* next; scalar_t__ length; TYPE_1__** position; } ;
typedef TYPE_2__ svn_diff__lcs_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_6__ {scalar_t__ offset; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int) ;

__attribute__((used)) static svn_diff__lcs_t *
FUNC_3(svn_diff__lcs_t *VAR_0, apr_off_t VAR_1,
            apr_off_t VAR_2, apr_off_t VAR_3,
            apr_pool_t *VAR_4)
{
  svn_diff__lcs_t *VAR_5;

  FUNC_0(VAR_1 > 0);

  VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  VAR_5->position[0] = FUNC_2(VAR_4, sizeof(*VAR_5->position[0]));
  VAR_5->position[0]->offset = VAR_2;
  VAR_5->position[1] = FUNC_2(VAR_4, sizeof(*VAR_5->position[1]));
  VAR_5->position[1]->offset = VAR_3;
  VAR_5->length = VAR_1;
  VAR_5->refcount = 1;
  VAR_5->next = VAR_0;

  return VAR_5;
}
