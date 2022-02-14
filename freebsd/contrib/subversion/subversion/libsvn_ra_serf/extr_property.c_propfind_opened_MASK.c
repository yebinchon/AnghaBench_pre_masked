
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_serf__xml_estate_t ;
struct TYPE_4__ {int name; int xmlns; } ;
typedef TYPE_1__ svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int ps_props; } ;
typedef TYPE_2__ propfind_context_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_ra_serf__xml_estate_t *VAR_3,
                void *VAR_4,
                int VAR_5,
                const svn_ra_serf__dav_props_t *VAR_6,
                apr_pool_t *VAR_7)
{
  propfind_context_t *VAR_8 = VAR_4;

  if (VAR_5 == VAR_1)
    {
        FUNC_1(VAR_3, VAR_1, "ns", VAR_6->xmlns);
      FUNC_1(VAR_3, VAR_1, "name", VAR_6->name);
    }
  else if (VAR_5 == VAR_0)
    {
      VAR_8->ps_props = FUNC_0(FUNC_2(VAR_3));
    }

  return VAR_2;
}
