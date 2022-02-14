
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__ const* next; struct TYPE_4__ const* children; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_4,
                                  const svn_skel_t *VAR_5)
{
  *VAR_4 = VAR_0;

  if (FUNC_2(VAR_5) < 2)
    return FUNC_1(VAR_1, ((void*)0),
                            FUNC_0("Not a conflict skel"));

  if (FUNC_2(VAR_5->children) < 2)
    return VAR_2;

  if (FUNC_2(VAR_5->children->next) == 0)
    return VAR_2;

  *VAR_4 = VAR_3;
  return VAR_2;
}
