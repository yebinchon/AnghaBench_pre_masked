
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,char*,int ) ;
 int FUNC_3 (int *,int *,char*,char*,...) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(serf_bucket_t **VAR_2,
                    void *VAR_3,
                    serf_bucket_alloc_t *VAR_4,
                    apr_pool_t *VAR_5 ,
                    apr_pool_t *VAR_6)
{
  serf_bucket_t *VAR_7;

  VAR_7 = FUNC_0(VAR_4);

  FUNC_4(VAR_7, VAR_4);
  FUNC_3(VAR_7, VAR_4, "propfind",
                                    "xmlns", "DAV:",
                                    VAR_1);
  FUNC_3(VAR_7, VAR_4, "prop", VAR_1);
  FUNC_2(VAR_7, VAR_4,
                                     "lockdiscovery", VAR_1);
  FUNC_1(VAR_7, VAR_4, "prop");
  FUNC_1(VAR_7, VAR_4, "propfind");

  *VAR_2 = VAR_7;
  return VAR_0;
}
