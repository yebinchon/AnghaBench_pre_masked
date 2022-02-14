
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int * member_1; } ;
typedef TYPE_1__ svn_version_checklist_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;





 int * FUNC_1 (int *,TYPE_1__ const*,int ) ;
 int VAR_1 ;


__attribute__((used)) static svn_error_t *
FUNC_2(void)
{
  static const svn_version_checklist_t VAR_2[] =
    {
      { "svn_subr", 129 },
      { "svn_client", 133 },
      { "svn_wc", 128 },
      { "svn_ra", 130 },
      { "svn_delta", 132 },
      { "svn_diff", 131 },
      { ((void*)0), ((void*)0) }
    };
  FUNC_0(VAR_0);

  return FUNC_1(&VAR_0, VAR_2, VAR_1);
}
