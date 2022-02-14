
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ copy_inherit; struct TYPE_6__* parent; int node; } ;
typedef TYPE_1__ parent_path_t ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_2__ copy_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__**,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_3,
                         copy_t **VAR_4,
                         svn_fs_t *VAR_5,
                         parent_path_t *VAR_6,
                         trail_t *VAR_7,
                         apr_pool_t *VAR_8)
{

  *VAR_3 = FUNC_2
    (FUNC_1(VAR_6->node));
  *VAR_4 = ((void*)0);



  if (! VAR_6->parent)
    return VAR_0;




  if (VAR_6->copy_inherit == VAR_1)
    {


      if (((*VAR_3)[0] == '0') && ((*VAR_3)[1] == '\0'))
        return VAR_0;




      FUNC_0(FUNC_3(VAR_4, VAR_5, *VAR_3, VAR_7, VAR_8));
      if ((*VAR_4)->kind != VAR_2)
        return VAR_0;
    }


  return FUNC_4(VAR_3, VAR_4, VAR_5,
                                  VAR_6->parent, VAR_7, VAR_8);
}
