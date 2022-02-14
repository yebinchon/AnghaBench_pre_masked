
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int code; int reason; } ;
typedef TYPE_1__ serf_status_line ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,...) ;

svn_error_t *
FUNC_2(serf_status_line VAR_10,
                             const char *VAR_11,
                             const char *VAR_12)
{
  switch(VAR_10.code)
    {
      case 301:
      case 302:
      case 303:
      case 307:
      case 308:
        return FUNC_1(VAR_6, ((void*)0),
                                 (VAR_10.code == 301)
                                  ? FUNC_0("Repository moved permanently to '%s'")
                                  : FUNC_0("Repository moved temporarily to '%s'"),
                                 VAR_12);
      case 403:
        return FUNC_1(VAR_3, ((void*)0),
                                 FUNC_0("Access to '%s' forbidden"), VAR_11);

      case 404:
        return FUNC_1(VAR_1, ((void*)0),
                                 FUNC_0("'%s' path not found"), VAR_11);
      case 405:
        return FUNC_1(VAR_4, ((void*)0),
                                 FUNC_0("HTTP method is not allowed on '%s'"),
                                 VAR_11);
      case 409:
        return FUNC_1(VAR_0, ((void*)0),
                                 FUNC_0("'%s' conflicts"), VAR_11);
      case 412:
        return FUNC_1(VAR_5, ((void*)0),
                                 FUNC_0("Precondition on '%s' failed"), VAR_11);
      case 423:
        return FUNC_1(VAR_2, ((void*)0),
                                 FUNC_0("'%s': no lock token available"), VAR_11);

      case 411:
        return FUNC_1(VAR_7, ((void*)0),
                    FUNC_0("DAV request failed: 411 Content length required. The "
                      "server or an intermediate proxy does not accept "
                      "chunked encoding. Try setting 'http-chunked-requests' "
                      "to 'auto' or 'no' in your client configuration."));
      case 500:
        return FUNC_1(VAR_7, ((void*)0),
                                 FUNC_0("Unexpected server error %d '%s' on '%s'"),
                                 VAR_10.code, VAR_10.reason, VAR_11);
      case 501:
        return FUNC_1(VAR_8, ((void*)0),
                                 FUNC_0("The requested feature is not supported by "
                                   "'%s'"), VAR_11);
    }

  if (VAR_10.code >= 300 || VAR_10.code <= 199)
    return FUNC_1(VAR_7, ((void*)0),
                             FUNC_0("Unexpected HTTP status %d '%s' on '%s'"),
                             VAR_10.code, VAR_10.reason, VAR_11);

  return VAR_9;
}
