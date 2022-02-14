
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ supports_deadprop_count; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
struct TYPE_6__ {char* xmlns; char* name; } ;
typedef TYPE_2__ svn_ra_serf__dav_props_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int *,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ VAR_9 ;

apr_array_header_t *
FUNC_2(apr_uint32_t VAR_10,
                              svn_ra_serf__session_t *VAR_11,
                              apr_pool_t *VAR_12)
{
  svn_ra_serf__dav_props_t *VAR_13;
  apr_array_header_t *VAR_14 = FUNC_0
    (VAR_12, 7, sizeof(svn_ra_serf__dav_props_t));

  if (VAR_11->supports_deadprop_count != VAR_9
      || ! (VAR_10 & VAR_4))
    {
      if (VAR_10 & VAR_5)
        {
          VAR_13 = FUNC_1(VAR_14);
          VAR_13->xmlns = "DAV:";
          VAR_13->name = "resourcetype";
        }

      if (VAR_10 & VAR_7)
        {
          VAR_13 = FUNC_1(VAR_14);
          VAR_13->xmlns = "DAV:";
          VAR_13->name = "getcontentlength";
        }

      if (VAR_10 & VAR_4)
        {
          VAR_13 = FUNC_1(VAR_14);
          VAR_13->xmlns = VAR_0;
          VAR_13->name = "deadprop-count";
        }

      if (VAR_10 & VAR_3)
        {
          svn_ra_serf__dav_props_t *VAR_15 = FUNC_1(VAR_14);
          VAR_15->xmlns = "DAV:";
          VAR_15->name = VAR_2;
        }

      if (VAR_10 & VAR_8)
        {
          VAR_13 = FUNC_1(VAR_14);
          VAR_13->xmlns = "DAV:";
          VAR_13->name = VAR_1;
        }

      if (VAR_10 & VAR_6)
        {
          VAR_13 = FUNC_1(VAR_14);
          VAR_13->xmlns = "DAV:";
          VAR_13->name = "creator-displayname";
        }
    }
  else
    {




      VAR_13 = FUNC_1(VAR_14);
      VAR_13->xmlns = "DAV:";
      VAR_13->name = "allprop";
    }

  return VAR_14;
}
