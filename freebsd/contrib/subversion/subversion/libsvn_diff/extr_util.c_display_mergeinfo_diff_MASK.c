
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_rangelist_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 char const* FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int **,int **,int *,int *,int ,int *,int *) ;
 int FUNC_8 (int **,char const*,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__**,int *,int *) ;
 int FUNC_13 (int *,char const*,int *,char*,char const*,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_14(const char *VAR_3,
                       const char *VAR_4,
                       const char *VAR_5,
                       svn_stream_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  apr_hash_t *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  apr_pool_t *VAR_12 = FUNC_10(VAR_7);
  apr_hash_index_t *VAR_13;

  if (VAR_3)
    FUNC_0(FUNC_8(&VAR_8, VAR_3, VAR_7));
  else
    VAR_8 = ((void*)0);

  if (VAR_4)
    FUNC_0(FUNC_8(&VAR_9, VAR_4, VAR_7));
  else
    VAR_9 = ((void*)0);

  FUNC_0(FUNC_7(&VAR_11, &VAR_10, VAR_8,
                              VAR_9,
                              VAR_2, VAR_7, VAR_7));



  FUNC_0(FUNC_13(VAR_6, VAR_5, VAR_7,
                                      "## -0,%u +0,%u ##%s",
                                      FUNC_2(VAR_11),
                                      FUNC_2(VAR_10),
                                      VAR_0));

  for (VAR_13 = FUNC_3(VAR_7, VAR_11);
       VAR_13; VAR_13 = FUNC_4(VAR_13))
    {
      const char *VAR_14 = FUNC_5(VAR_13);
      svn_rangelist_t *VAR_15 = FUNC_6(VAR_13);
      svn_string_t *VAR_16;

      FUNC_9(VAR_12);
      FUNC_0(FUNC_12(&VAR_16, VAR_15,
                                      VAR_12));

      FUNC_0(FUNC_13(VAR_6, VAR_5, VAR_12,
                                          FUNC_1("   Reverse-merged %s:r%s%s"),
                                          VAR_14, VAR_16->data,
                                          VAR_0));
    }

  for (VAR_13 = FUNC_3(VAR_7, VAR_10);
       VAR_13; VAR_13 = FUNC_4(VAR_13))
    {
      const char *VAR_17 = FUNC_5(VAR_13);
      svn_rangelist_t *VAR_18 = FUNC_6(VAR_13);
      svn_string_t *VAR_19;

      FUNC_9(VAR_12);
      FUNC_0(FUNC_12(&VAR_19, VAR_18,
                                      VAR_12));

      FUNC_0(FUNC_13(VAR_6, VAR_5, VAR_12,
                                          FUNC_1("   Merged %s:r%s%s"),
                                          VAR_17, VAR_19->data,
                                          VAR_0));
    }

  FUNC_11(VAR_12);
  return VAR_1;
}
