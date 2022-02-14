
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int **,int *,char*,char const*) ;
 int FUNC_2 (int **,int *,char*) ;
 int FUNC_3 (int **,int *,int ,char*,char*,int ,int ) ;
 int VAR_1 ;

void
FUNC_4(svn_stringbuf_t **VAR_2,
                         svn_revnum_t VAR_3,
                         const char *VAR_4,
                         const char *VAR_5,
                         apr_pool_t *VAR_6)
{

  FUNC_3(VAR_2, VAR_6, VAR_1, "commit",
                        "revision",
                        FUNC_0(VAR_6, "%ld", VAR_3), VAR_0);


  if (VAR_4)
    FUNC_1(VAR_2, VAR_6, "author", VAR_4);


  if (VAR_5)
    FUNC_1(VAR_2, VAR_6, "date", VAR_5);


  FUNC_2(VAR_2, VAR_6, "commit");
}
