
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *,char*,char const*,...) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char const*,int *) ;
 int FUNC_7 (int *,int *,int ,int *) ;
 int FUNC_8 (char const**,char const*,int *) ;
 int FUNC_9 (int *,char const*,TYPE_1__*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (TYPE_1__**,TYPE_1__*,int ,int *) ;
 int FUNC_13 (char const*,char const**,char const*,int ,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_string_t *VAR_4,
                  const char *VAR_5,
                  const char *VAR_6,
                  const char *VAR_7,
                  svn_stream_t *VAR_8,
                  const char *VAR_9,
                  svn_boolean_t VAR_10,
                  svn_boolean_t VAR_11,
                  svn_boolean_t VAR_12,
                  svn_boolean_t VAR_13,
                  apr_pool_t *VAR_14)
{
  if (VAR_10)
    {
      const char *VAR_15;



      if (! FUNC_10(VAR_6))
        VAR_6 = FUNC_6(VAR_7,
                                                           VAR_6,
                                                           VAR_14);



      if (VAR_13)
        {
          if (VAR_12)
            {
              if (! FUNC_10(VAR_5))
                VAR_5 =
                  FUNC_6(VAR_7,
                                                    VAR_5,
                                                    VAR_14);
              VAR_15 = FUNC_3(
                VAR_14,
                FUNC_1("Inherited properties on '%s',\nfrom '%s':\n"),
                VAR_5, VAR_6);
            }
          else
            {
              VAR_15 = FUNC_3(VAR_14, "%s - ", VAR_6);
            }
        }
      else
        VAR_15 = FUNC_3(VAR_14, VAR_12
                              ? FUNC_1("Properties on '%s':\n")
                              : "%s - ", VAR_6);
      FUNC_0(FUNC_8(&VAR_15, VAR_15, VAR_14));
      FUNC_0(FUNC_13(VAR_15, &VAR_15,
                                           VAR_0,
                                           VAR_1,
                                           ((void*)0),
                                           VAR_1,
                                           VAR_14));
      FUNC_0(FUNC_4(VAR_8, VAR_15, FUNC_5(VAR_15)));
    }

  if (VAR_12)
    {

      apr_hash_t *VAR_16 = FUNC_2(VAR_14);

      FUNC_9(VAR_16, VAR_9, VAR_4);
      FUNC_0(FUNC_7(VAR_8, VAR_16, VAR_1, VAR_14));
    }
  else
    {


      if (FUNC_11(VAR_9))
        FUNC_0(FUNC_12(&VAR_4, VAR_4,
                                             VAR_3, VAR_14));

      FUNC_0(FUNC_4(VAR_8, VAR_4->data, VAR_4->len));

      if (! VAR_11)
        FUNC_0(FUNC_4(VAR_8, VAR_0,
                             FUNC_5(VAR_0)));
    }
  return VAR_2;
}
