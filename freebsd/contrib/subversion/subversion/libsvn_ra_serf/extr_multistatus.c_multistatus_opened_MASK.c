
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_ra_serf__xml_estate_t ;
struct TYPE_3__ {char* name; int xmlns; } ;
typedef TYPE_1__ svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;

 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 char* FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,char*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_ra_serf__xml_estate_t *VAR_5,
                   void *VAR_6,
                   int VAR_7,
                   const svn_ra_serf__dav_props_t *VAR_8,
                   apr_pool_t *VAR_9)
{

  const char *VAR_10;

  switch (VAR_7)
    {
      case 129:
        if (FUNC_1(VAR_8->xmlns, VAR_1) == 0)
          VAR_10 = FUNC_0(VAR_9, VAR_3, VAR_8->name,
                                 VAR_4);
        else
          VAR_10 = VAR_8->name;
        FUNC_2(VAR_5, VAR_0, "propname", VAR_10);
        break;
      case 128:

        break;
    }

  return VAR_2;
}
