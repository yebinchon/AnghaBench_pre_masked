
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int * (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
struct TYPE_3__ {char* name; scalar_t__ filetype; } ;
typedef TYPE_1__ apr_finfo_t ;
typedef int apr_dir_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int *) ;
 int * FUNC_5 (char const**,char*,char const*,int *) ;
 int * FUNC_6 (int *,char const*,char const*,char const*,int *) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 char* FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (char const*,int *) ;
 int * FUNC_10 (int ,int *,int ,int ) ;
 int * FUNC_11 (scalar_t__,int ,int ) ;
 int * FUNC_12 (char const*,scalar_t__*,int *) ;
 int * FUNC_13 (char const*,char const*,int *) ;
 int * FUNC_14 (int **,char const*,int *) ;
 int * FUNC_15 (char const*,int *) ;
 scalar_t__ VAR_8 ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_18(svn_boolean_t *VAR_9,
                                const char *VAR_10,
                                const char *VAR_11,
                                const char *VAR_12,
                                svn_boolean_t VAR_13,
                                svn_cancel_func_t VAR_14,
                                void *VAR_15,
                                apr_pool_t *VAR_16)
{
  svn_node_kind_t VAR_17;
  apr_status_t VAR_18;
  const char *VAR_19;
  apr_dir_t *VAR_20;
  apr_finfo_t VAR_21;
  apr_int32_t VAR_22 = VAR_2 | VAR_1;


  apr_pool_t *VAR_23 = FUNC_16(VAR_16);


  VAR_19 = FUNC_8(VAR_11, VAR_12, VAR_16);



  FUNC_1(FUNC_12(VAR_10, &VAR_17, VAR_23));
  if (VAR_17 != VAR_8)
    return FUNC_10(VAR_6, ((void*)0),
                             FUNC_2("Source '%s' is not a directory"),
                             FUNC_9(VAR_10, VAR_16));

  FUNC_1(FUNC_12(VAR_11, &VAR_17, VAR_23));
  if (VAR_17 != VAR_8)
    return FUNC_10(VAR_6, ((void*)0),
                             FUNC_2("Destination '%s' is not a directory"),
                             FUNC_9(VAR_11,
                                                    VAR_16));

  FUNC_1(FUNC_12(VAR_19, &VAR_17, VAR_23));



  FUNC_1(FUNC_15(VAR_19, VAR_16));


  FUNC_1(FUNC_14(&VAR_20, VAR_10, VAR_23));

  for (VAR_18 = FUNC_4(&VAR_21, VAR_22, VAR_20);
       VAR_18 == VAR_5;
       VAR_18 = FUNC_4(&VAR_21, VAR_22, VAR_20))
    {
      if ((VAR_21.name[0] == '.')
          && ((VAR_21.name[1] == '\0')
              || ((VAR_21.name[1] == '.')
                  && (VAR_21.name[2] == '\0'))))
        {
          continue;
        }
      else
        {
          const char *VAR_24;

          if (VAR_14)
            FUNC_1(VAR_14(VAR_15));

          FUNC_1(FUNC_5(&VAR_24, VAR_21.name,
                                     VAR_10, VAR_23));
          if (VAR_21.filetype == VAR_4)
            {
              FUNC_1(FUNC_6(VAR_9, VAR_10, VAR_19,
                                               VAR_24, VAR_23));
            }
          else if (VAR_21.filetype == VAR_3)
            {
              const char *VAR_25 = FUNC_8(VAR_10, VAR_24,
                                                       VAR_23);
              const char *VAR_26 = FUNC_8(VAR_19,
                                                       VAR_24,
                                                       VAR_23);
              FUNC_1(FUNC_13(VAR_25, VAR_26,
                                       VAR_23));
            }
          else if (VAR_21.filetype == VAR_0)
            {
              const char *VAR_27;



              if (FUNC_7(VAR_10, VAR_11) == 0
                  && FUNC_7(VAR_24, VAR_12) == 0)
                continue;

              VAR_27 = FUNC_8(VAR_10, VAR_24, VAR_23);
              FUNC_1(FUNC_18(VAR_9,
                                                      VAR_27,
                                                      VAR_19,
                                                      VAR_24,
                                                      VAR_13,
                                                      VAR_14,
                                                      VAR_15,
                                                      VAR_23));
            }


        }
    }

  if (! (FUNC_0(VAR_18)))
    return FUNC_11(VAR_18, FUNC_2("Can't read directory '%s'"),
                              FUNC_9(VAR_10, VAR_16));

  VAR_18 = FUNC_3(VAR_20);
  if (VAR_18)
    return FUNC_11(VAR_18, FUNC_2("Error closing directory '%s'"),
                              FUNC_9(VAR_10, VAR_16));


  FUNC_17(VAR_23);

  return VAR_7;
}
