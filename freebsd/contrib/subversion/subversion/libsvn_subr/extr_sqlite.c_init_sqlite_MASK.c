
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int * FUNC_8 (int ,int *,int ) ;
 int * FUNC_9 (int ,int *,int ,int,...) ;

__attribute__((used)) static svn_error_t *
FUNC_10(void *VAR_7, apr_pool_t *VAR_8)
{
  if (FUNC_6() < VAR_6)
    {
      return FUNC_9(
                    VAR_3, ((void*)0),
                    FUNC_2("SQLite compiled for %s, but running with %s"),
                    VAR_5, FUNC_5());
    }
  return VAR_4;
}
