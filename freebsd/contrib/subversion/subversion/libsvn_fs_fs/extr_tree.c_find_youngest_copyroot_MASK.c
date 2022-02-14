
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int node; struct TYPE_3__* parent; } ;
typedef TYPE_1__ parent_path_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int *,char const**,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_revnum_t *VAR_2,
                       const char **VAR_3,
                       svn_fs_t *VAR_4,
                       parent_path_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  svn_revnum_t VAR_7;
  svn_revnum_t VAR_8 = VAR_0;
  const char *VAR_9;
  const char *VAR_10 = ((void*)0);


  if (VAR_5->parent)
    FUNC_0(FUNC_2(&VAR_8, &VAR_10, VAR_4,
                                   VAR_5->parent, VAR_6));


  FUNC_0(FUNC_1(&VAR_7, &VAR_9,
                                      VAR_5->node));




  if (VAR_7 >= VAR_8)
    {
      *VAR_2 = VAR_7;
      *VAR_3 = VAR_9;
    }
  else
    {
      *VAR_2 = VAR_8;
      *VAR_3 = VAR_10;
    }

  return VAR_1;
}
