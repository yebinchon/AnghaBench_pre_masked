
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int start; scalar_t__ header_size; int item_index; int revision; TYPE_1__* sfile; } ;
typedef TYPE_2__ rep_state_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int rfile; int fs; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int*,int ,int ,int ,int *,int ,int *) ;

__attribute__((used)) static svn_error_t*
FUNC_2(rep_state_t *VAR_1, apr_pool_t *VAR_2)
{
  if (VAR_1->start == -1)
    {
      FUNC_0(FUNC_1(&VAR_1->start, VAR_1->sfile->fs,
                                     VAR_1->sfile->rfile, VAR_1->revision, ((void*)0),
                                     VAR_1->item_index, VAR_2));
      VAR_1->start += VAR_1->header_size;
    }

  return VAR_0;
}
