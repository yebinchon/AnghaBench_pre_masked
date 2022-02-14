
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int*,int*) ;
 int VAR_6 ;

 int * FUNC_4 (int ,int *,int ,int,...) ;

 int FUNC_5 (int ,TYPE_2__ const*,int ) ;
 int VAR_7 ;

svn_error_t *
FUNC_6(const svn_version_t *VAR_8,
                  const svn_ra__vtable_t **VAR_9,
                  apr_pool_t *VAR_10)
{
  static const svn_version_checklist_t VAR_11[] =
    {
      { "svn_subr", 128 },
      { "svn_delta", 129 },
      { ((void*)0), ((void*)0) }
    };
  int VAR_12;
  int VAR_13;
  int VAR_14;

  FUNC_0(FUNC_5(FUNC_2(), VAR_11, VAR_7));



  if (VAR_8->major != VAR_5)
    {
      return FUNC_4(
         VAR_3, ((void*)0),
         FUNC_1("Unsupported RA loader version (%d) for ra_serf"),
         VAR_8->major);
    }




  FUNC_3(&VAR_12, &VAR_13, &VAR_14);
  if (VAR_12 != VAR_0
      || VAR_13 < VAR_1)
    {
      return FUNC_4(

         VAR_3, ((void*)0),
         FUNC_1("ra_serf was compiled for serf %d.%d.%d but loaded "
           "an incompatible %d.%d.%d library"),
         VAR_0, VAR_1, VAR_2,
         VAR_12, VAR_13, VAR_14);
    }

  *VAR_9 = &VAR_6;

  return VAR_4;
}
