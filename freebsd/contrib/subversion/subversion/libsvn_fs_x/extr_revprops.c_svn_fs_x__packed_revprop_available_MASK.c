
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {int entry; int revision; } ;
typedef TYPE_1__ packed_revprops_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int * FUNC_2 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

svn_boolean_t
FUNC_5(svn_boolean_t *VAR_3,
                                   svn_fs_t *VAR_4,
                                   svn_revnum_t VAR_5,
                                   apr_pool_t *VAR_6)
{
  svn_node_kind_t VAR_7;
  packed_revprops_t *VAR_8;
  svn_error_t *VAR_9;


  VAR_8 = FUNC_0(VAR_6, sizeof(*VAR_8));
  VAR_8->revision = VAR_5;
  VAR_9 = FUNC_2(VAR_4, VAR_8, VAR_6, VAR_6);



  if (VAR_9)
    {
      FUNC_3(VAR_9);
      return VAR_0;
    }


  VAR_9 = FUNC_4(FUNC_1(VAR_8,
                                                    &VAR_8->entry,
                                                    VAR_6),
                          &VAR_7, VAR_6);
  if (VAR_9)
    {
      FUNC_3(VAR_9);
      return VAR_0;
    }

  *VAR_3 = VAR_7 == VAR_2;
  return VAR_7 == VAR_1;
}
