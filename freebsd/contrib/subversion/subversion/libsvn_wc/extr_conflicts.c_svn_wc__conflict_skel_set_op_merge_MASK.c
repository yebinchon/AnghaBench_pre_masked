
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_wc_conflict_version_t ;
struct TYPE_12__ {struct TYPE_12__* children; TYPE_1__* next; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int is_atom; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__**,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int const*,int ,int *,int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*,int *) ;

svn_error_t *
FUNC_7(svn_skel_t *VAR_3,
                                   const svn_wc_conflict_version_t *VAR_4,
                                   const svn_wc_conflict_version_t *VAR_5,
                                   apr_pool_t *VAR_6,
                                   apr_pool_t *VAR_7)
{
  svn_skel_t *VAR_8;
  svn_skel_t *VAR_9;

  FUNC_1(VAR_3
                 && VAR_3->children
                 && VAR_3->children->next
                 && !VAR_3->children->next->is_atom);

  FUNC_0(FUNC_2(&VAR_8, VAR_3));

  FUNC_1(VAR_8 == ((void*)0));

  VAR_8 = VAR_3->children;

  VAR_9 = FUNC_4(VAR_6);

  FUNC_0(FUNC_3(VAR_9, VAR_5, VAR_2,
                                     VAR_6, VAR_7));

  FUNC_0(FUNC_3(VAR_9, VAR_4, VAR_2,
                                     VAR_6, VAR_7));

  FUNC_5(VAR_9, VAR_8);
  FUNC_6(VAR_1, VAR_8, VAR_6);

  return VAR_0;
}
