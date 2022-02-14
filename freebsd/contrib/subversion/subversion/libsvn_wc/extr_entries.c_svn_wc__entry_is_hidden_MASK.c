
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ depth; scalar_t__ schedule; scalar_t__ absent; scalar_t__ deleted; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

svn_error_t *
FUNC_1(svn_boolean_t *VAR_5, const svn_wc_entry_t *VAR_6)
{


  if (VAR_6->deleted
      || VAR_6->absent
      || VAR_6->depth == VAR_2)
    {


      FUNC_0(VAR_6->schedule == VAR_3
                     || VAR_6->schedule == VAR_4);




      *VAR_5 = VAR_6->schedule != VAR_3;
    }
  else
    *VAR_5 = VAR_0;

  return VAR_1;
}
