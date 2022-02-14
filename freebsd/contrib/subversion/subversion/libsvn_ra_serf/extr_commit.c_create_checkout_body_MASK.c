
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int *,char const*,int ) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,int *,char*,int ) ;
 int FUNC_6 (int *,int *,char*,char*,...) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(serf_bucket_t **VAR_2,
                     void *VAR_3,
                     serf_bucket_alloc_t *VAR_4,
                     apr_pool_t *VAR_5 ,
                     apr_pool_t *VAR_6)
{
  const char *VAR_7 = VAR_3;
  serf_bucket_t *VAR_8;

  VAR_8 = FUNC_1(VAR_4);

  FUNC_7(VAR_8, VAR_4);
  FUNC_6(VAR_8, VAR_4, "D:checkout",
                                    "xmlns:D", "DAV:",
                                    VAR_1);
  FUNC_6(VAR_8, VAR_4, "D:activity-set",
                                    VAR_1);
  FUNC_6(VAR_8, VAR_4, "D:href",
                                    VAR_1);

  FUNC_0(VAR_7 != ((void*)0));
  FUNC_3(VAR_8, VAR_4,
                                     VAR_7,
                                     FUNC_2(VAR_7));

  FUNC_4(VAR_8, VAR_4, "D:href");
  FUNC_4(VAR_8, VAR_4, "D:activity-set");
  FUNC_5(VAR_8, VAR_4,
                                     "D:apply-to-version", VAR_1);
  FUNC_4(VAR_8, VAR_4, "D:checkout");

  *VAR_2 = VAR_8;
  return VAR_0;
}
