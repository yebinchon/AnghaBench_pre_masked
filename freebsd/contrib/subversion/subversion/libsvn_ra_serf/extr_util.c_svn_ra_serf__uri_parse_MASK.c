
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {char* path; } ;
typedef TYPE_1__ apr_uri_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char const*,TYPE_1__*) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;

svn_error_t *
FUNC_4(apr_uri_t *VAR_2,
                       const char *VAR_3,
                       apr_pool_t *VAR_4)
{
  apr_status_t VAR_5;

  VAR_5 = FUNC_2(VAR_4, VAR_3, VAR_2);
  if (VAR_5)
    {


      return FUNC_3(VAR_0, ((void*)0),
                               FUNC_0("Illegal URL '%s'"),
                               VAR_3);
    }



  if (VAR_2->path == ((void*)0) || VAR_2->path[0] == '\0')
    {
      VAR_2->path = FUNC_1(VAR_4, "/");
    }

  return VAR_1;
}
