
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xlate_handle_t ;
struct TYPE_5__ {char const* frompage; char const* topage; int * next; int valid; int * handle; } ;
typedef TYPE_1__ xlate_handle_node_t ;
typedef int svn_error_t ;
typedef int apr_strerr ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int VAR_6 ;
 int FUNC_5 (int *,TYPE_1__*,int ,int ) ;
 char* FUNC_6 (int *,int ,char const*,...) ;
 char const* FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (int **,char const*,char const*,int *) ;
 int FUNC_9 (scalar_t__,int *,char*) ;
 int * FUNC_10 (int ,int ,char*,char const*,char const*) ;
 int FUNC_11 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_12 (int **,char const*,char const*,int *) ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_13(xlate_handle_node_t **VAR_8,
                   const char *VAR_9, const char *VAR_10,
                   apr_pool_t *VAR_11)
{
  apr_status_t VAR_12;
  xlate_handle_t *VAR_13;
  const char *VAR_14;



  FUNC_2(VAR_10 != VAR_1
                 && VAR_9 != VAR_1
                 && (VAR_10 != VAR_2
                     || VAR_9 != VAR_2));







  VAR_12 = FUNC_8(&VAR_13, VAR_9, VAR_10, VAR_11);
  VAR_14 = "APR: ";


  if (FUNC_0(VAR_12) || FUNC_1(VAR_12))
    VAR_13 = ((void*)0);
  else if (VAR_12 != VAR_0)
    {
      const char *VAR_15;
      char VAR_16[512];



      if (VAR_10 == VAR_2)
        VAR_15 = FUNC_6(VAR_11,
                              FUNC_3("Can't create a character converter from "
                                "native encoding to '%s'"), VAR_9);
      else if (VAR_9 == VAR_2)
        VAR_15 = FUNC_6(VAR_11,
                              FUNC_3("Can't create a character converter from "
                                "'%s' to native encoding"), VAR_10);
      else
        VAR_15 = FUNC_6(VAR_11,
                              FUNC_3("Can't create a character converter from "
                                "'%s' to '%s'"), VAR_10, VAR_9);




      FUNC_11(VAR_12, VAR_16, sizeof(VAR_16));
      return FUNC_10(VAR_3,
                               FUNC_9(VAR_12, ((void*)0), VAR_16),
                               "%s%s", VAR_14, VAR_15);
    }


  *VAR_8 = FUNC_4(VAR_11, sizeof(xlate_handle_node_t));
  (*VAR_8)->handle = VAR_13;
  (*VAR_8)->valid = VAR_5;
  (*VAR_8)->frompage = ((VAR_10 != VAR_2)
                      ? FUNC_7(VAR_11, VAR_10) : VAR_10);
  (*VAR_8)->topage = ((VAR_9 != VAR_2)
                    ? FUNC_7(VAR_11, VAR_9) : VAR_9);
  (*VAR_8)->next = ((void*)0);






  if (VAR_13)
    FUNC_5(VAR_11, *VAR_8, VAR_7,
                              VAR_6);

  return VAR_4;
}
