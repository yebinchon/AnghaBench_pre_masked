
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {int number; } ;
struct TYPE_6__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_revnum_t *VAR_5,
                svn_revnum_t *VAR_6,
                svn_opt_revision_t VAR_7,
                svn_opt_revision_t VAR_8)
{
  svn_revnum_t VAR_9, VAR_10;



  if ((VAR_7.kind == VAR_4) &&
      (VAR_8.kind == VAR_4))
    {
      *VAR_5 = 0;
      *VAR_6 = VAR_1;
      return VAR_2;
    }



  if (VAR_7.kind == VAR_3)
    {
      VAR_9 = VAR_1;
    }
  else
    {
      VAR_9 = VAR_7.value.number;
      if (! FUNC_0(VAR_9))
        return FUNC_2(VAR_0, ((void*)0),
                                 FUNC_1("Invalid revision number (%ld)"),
                                 VAR_9);
    }




  if (VAR_8.kind == VAR_4)
    {
      VAR_10 = VAR_9;
    }
  else if (VAR_8.kind == VAR_3)
    {
      VAR_10 = VAR_1;
    }
  else
    {
      VAR_10 = VAR_8.value.number;
      if (! FUNC_0(VAR_10))
        return FUNC_2(VAR_0, ((void*)0),
                                 FUNC_1("Invalid revision number (%ld)"),
                                 VAR_10);
    }

  *VAR_5 = VAR_9;
  *VAR_6 = VAR_10;
  return VAR_2;
}
