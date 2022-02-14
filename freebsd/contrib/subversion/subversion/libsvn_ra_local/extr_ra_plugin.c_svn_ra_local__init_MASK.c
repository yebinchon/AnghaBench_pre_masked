
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ major; } ;
typedef TYPE_1__ svn_version_t ;
struct TYPE_6__ {char* member_0; int * member_1; } ;
typedef TYPE_2__ svn_version_checklist_t ;
typedef int svn_ra__vtable_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_3 ;

 int FUNC_3 () ;
 int * FUNC_4 (int ,int *,int ,scalar_t__) ;
 int FUNC_5 (int ) ;



 int FUNC_6 (int ,TYPE_2__ const*,int ) ;
 int VAR_4 ;

svn_error_t *
FUNC_7(const svn_version_t *VAR_5,
                   const svn_ra__vtable_t **VAR_6,
                   apr_pool_t *VAR_7)
{
  static const svn_version_checklist_t VAR_8[] =
    {
      { "svn_subr", 128 },
      { "svn_delta", 131 },
      { "svn_repos", 129 },
      { "svn_fs", 130 },
      { ((void*)0), ((void*)0) }
    };




  if (VAR_5->major != VAR_2)
    return FUNC_4(VAR_0, ((void*)0),
                             FUNC_1("Unsupported RA loader version (%d) for "
                               "ra_local"),
                             VAR_5->major);

  FUNC_0(FUNC_6(FUNC_2(), VAR_8, VAR_4));



  FUNC_0(FUNC_5(FUNC_3()));


  *VAR_6 = &VAR_3;

  return VAR_1;
}
