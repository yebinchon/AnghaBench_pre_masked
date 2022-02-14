
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int pool; int node; int file_stream; int path; int root; } ;
typedef TYPE_2__ file_contents_baton_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int ) ;
 int * FUNC_2 (int *,int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0, trail_t *VAR_1)
{
  file_contents_baton_t *VAR_2 = (file_contents_baton_t *) VAR_0;


  FUNC_0(FUNC_1(&(VAR_2->node), VAR_2->root, VAR_2->path, VAR_1, VAR_1->pool));


  return FUNC_2(&(VAR_2->file_stream),
                                       VAR_2->node, VAR_1, VAR_2->pool);
}
