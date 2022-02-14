
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int ** s_roots; int pool; TYPE_1__* repos; } ;
typedef TYPE_2__ report_baton_t ;
struct TYPE_4__ {int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(report_baton_t *VAR_2, svn_fs_root_t **VAR_3, svn_revnum_t VAR_4)
{
  int VAR_5;
  svn_fs_root_t *VAR_6, *VAR_7 = ((void*)0);



  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
      VAR_6 = VAR_2->s_roots[VAR_5];
      VAR_2->s_roots[VAR_5] = VAR_7;
      if (VAR_6 && FUNC_3(VAR_6) == VAR_4)
        break;
      VAR_7 = VAR_6;
    }


  if (VAR_5 == VAR_0)
    {
      if (VAR_7)
        FUNC_1(VAR_7);
      FUNC_0(FUNC_2(&VAR_6, VAR_2->repos->fs, VAR_4, VAR_2->pool));
    }


  VAR_2->s_roots[0] = VAR_6;
  *VAR_3 = VAR_6;
  return VAR_1;
}
