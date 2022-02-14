
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,int ) ;
 scalar_t__ FUNC_1 (void**,int ,int *) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(apr_pool_t *VAR_1, apr_status_t VAR_2,
                           const char *VAR_3)
{
  char VAR_4[256];
  apr_file_t *VAR_5;
  void *VAR_6;


  if (FUNC_1(&VAR_6, VAR_0, VAR_1))
    return;
  VAR_5 = VAR_6;

  if (VAR_5)

    FUNC_0(VAR_5, "%s: %s",
                    VAR_3, FUNC_2(VAR_2, VAR_4,
                                       sizeof(VAR_4)));
}
