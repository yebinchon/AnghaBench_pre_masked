
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hostname; int scheme; int port; scalar_t__ port_str; } ;
struct TYPE_5__ {TYPE_1__ session_url; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int apr_port_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char *
FUNC_2(svn_ra_serf__session_t *VAR_0,
                apr_pool_t *VAR_1)
{
  const char *VAR_2;
  apr_port_t VAR_3;

  if (VAR_0->session_url.port_str)
    {
      VAR_3 = VAR_0->session_url.port;
    }
  else
    {
      VAR_3 = FUNC_1(VAR_0->session_url.scheme);
    }

  VAR_2 = FUNC_0(VAR_1, "%s://%s:%d",
                       VAR_0->session_url.scheme,
                       VAR_0->session_url.hostname,
                       VAR_3);

  return VAR_2;
}
