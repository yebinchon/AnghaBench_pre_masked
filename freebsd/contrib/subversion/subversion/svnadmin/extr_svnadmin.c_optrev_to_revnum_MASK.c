
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {int number; } ;
struct TYPE_5__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_revnum_t *VAR_5, const svn_opt_revision_t *VAR_6)
{
  if (VAR_6->kind == VAR_3)
    {
      *VAR_5 = VAR_6->value.number;
      if (! FUNC_0(*VAR_5))
        return FUNC_3(VAR_0, ((void*)0),
                                 FUNC_1("Invalid revision number (%ld) specified"),
                                 *VAR_5);
    }
  else if (VAR_6->kind == VAR_4)
    {
      *VAR_5 = VAR_1;
    }
  else
    {
      return FUNC_2(VAR_0, ((void*)0),
                              FUNC_1("Non-numeric revision specified"));
    }
  return VAR_2;
}
