
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
struct TYPE_4__ {int out; int err; int member_0; } ;
typedef TYPE_1__ apr_proc_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,int ,int ,int ,int *) ;
 int * FUNC_3 (char const*,char const*,TYPE_1__*,int ,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 (int ,int *,int ,char const*) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (scalar_t__,int ,...) ;
 int * FUNC_8 (int *,char const*) ;
 int * FUNC_9 (TYPE_1__*,char*,char const*,char const**,int ,int ,int ,int *,int ,int *,int ,int *,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int **,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_string_t **VAR_7,
             const char *VAR_8,
             const char *VAR_9,
             const char **VAR_10,
             apr_hash_t *VAR_11,
             apr_file_t *VAR_12,
             apr_pool_t *VAR_13)
{
  apr_file_t *VAR_14;
  apr_status_t VAR_15;
  svn_error_t *VAR_16;
  apr_proc_t VAR_17 = {0};
  apr_pool_t *VAR_18;
  apr_hash_t *VAR_19 = ((void*)0);

  if (VAR_7)
    {
      VAR_14 = ((void*)0);
    }
  else
    {

        VAR_15 = FUNC_2(&VAR_14, VAR_4, VAR_1,
                                VAR_0, VAR_13);
        if (VAR_15)
          return FUNC_7
            (VAR_15, FUNC_0("Can't create null stdout for hook '%s'"), VAR_9);
    }



  VAR_18 = FUNC_10(VAR_13);



  if (VAR_11)
    {
      VAR_19 = FUNC_8(VAR_11, VAR_8);
      if (VAR_19 == ((void*)0))
        VAR_19 = FUNC_8(VAR_11,
                                 VAR_5);
    }

  VAR_16 = FUNC_9(&VAR_17, ".", VAR_9, VAR_10,
                          FUNC_4(VAR_19, VAR_13, VAR_13),
                          VAR_2, VAR_2, VAR_12, VAR_7 != ((void*)0),
                          VAR_14, VAR_6, ((void*)0), VAR_18);
  if (!VAR_16)
    VAR_16 = FUNC_3(VAR_8, VAR_9, &VAR_17, VAR_17.err, VAR_13);
  else
    {

      VAR_16 = FUNC_5(VAR_3, VAR_16,
                              FUNC_0("Failed to start '%s' hook"), VAR_9);
    }




  if (!VAR_16 && VAR_7)
    {
      svn_stringbuf_t *VAR_20;
      VAR_16 = FUNC_13(&VAR_20, VAR_17.out, VAR_13);
      if (!VAR_16)
        *VAR_7 = FUNC_12(VAR_20);
    }


  FUNC_11(VAR_18);


  if (VAR_14)
    {
      VAR_15 = FUNC_1(VAR_14);
      if (!VAR_16 && VAR_15)
        return FUNC_7(VAR_15, FUNC_0("Error closing null file"));
    }

  return FUNC_6(VAR_16);
}
