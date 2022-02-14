
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int mergeinfo_count; int has_mergeinfo; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_2__ dag_node_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,TYPE_2__*) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_2(svn_boolean_t *VAR_4,
                                              dag_node_t *VAR_5)
{
  node_revision_t *VAR_6;

  if (VAR_5->kind != VAR_3)
    {
      *VAR_4 = VAR_0;
      return VAR_1;
    }

  FUNC_0(FUNC_1(&VAR_6, VAR_5));
  if (VAR_6->mergeinfo_count > 1)
    *VAR_4 = VAR_2;
  else if (VAR_6->mergeinfo_count == 1 && !VAR_6->has_mergeinfo)
    *VAR_4 = VAR_2;
  else
    *VAR_4 = VAR_0;
  return VAR_1;
}
