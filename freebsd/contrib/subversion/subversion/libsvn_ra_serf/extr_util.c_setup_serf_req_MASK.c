
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_spillbuf_t ;
struct TYPE_3__ {char const* useragent; scalar_t__ http10; int using_chunked_requests; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char const*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,char const*,char const*,int *,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int *) ;
 int * FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(serf_request_t *VAR_4,
               serf_bucket_t **VAR_5,
               serf_bucket_t **VAR_6,
               svn_ra_serf__session_t *VAR_7,
               const char *VAR_8, const char *VAR_9,
               serf_bucket_t *VAR_10, const char *VAR_11,
               const char *VAR_12,
               svn_boolean_t VAR_13,
               apr_pool_t *VAR_14,
               apr_pool_t *VAR_15)
{
  serf_bucket_alloc_t *VAR_16 = FUNC_6(VAR_4);

  svn_spillbuf_t *VAR_17;
  svn_boolean_t VAR_18 = VAR_7->http10 || !VAR_7->using_chunked_requests;

  if (VAR_18 && VAR_10 != ((void*)0))
    {







      FUNC_0(FUNC_7(&VAR_17, VAR_10,
                                              VAR_14,
                                              VAR_15));


      FUNC_1(VAR_10);

      VAR_10 = FUNC_8(VAR_17, VAR_16,
                                               VAR_14,
                                               VAR_15);
    }



  *VAR_5 = FUNC_5(VAR_4, VAR_8, VAR_9,
                                                VAR_10, VAR_16);



  if (VAR_18)
    {
      if (VAR_10 == ((void*)0))
        FUNC_4(*VAR_5, 0);
      else
        FUNC_4(*VAR_5, FUNC_9(VAR_17));
    }

  *VAR_6 = FUNC_3(*VAR_5);




  FUNC_2(*VAR_6, "User-Agent", VAR_7->useragent);

  if (VAR_11)
    {
      FUNC_2(*VAR_6, "Content-Type", VAR_11);
    }

  if (VAR_7->http10)
    {
      FUNC_2(*VAR_6, "Connection", "keep-alive");
    }

  if (VAR_12)
    {
      FUNC_2(*VAR_6, "Accept-Encoding", VAR_12);
    }
  if (VAR_13)
    {
      FUNC_2(*VAR_6, "DAV", VAR_0);
      FUNC_2(*VAR_6, "DAV", VAR_2);
      FUNC_2(*VAR_6, "DAV", VAR_1);
    }

  return VAR_3;
}
