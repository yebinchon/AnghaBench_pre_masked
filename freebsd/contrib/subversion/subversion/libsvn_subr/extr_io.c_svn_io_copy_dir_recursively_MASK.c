
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
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int *) ;
 int * FUNC_5 (char const**,char*,char const*,int *) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 char* FUNC_7 (char const*,char const*,int *) ;
 int FUNC_8 (char const*,int *) ;
 int * FUNC_9 (int ,int *,int ,int ) ;
 int * FUNC_10 (scalar_t__,int ,int ) ;
 int * FUNC_11 (char const*,scalar_t__*,int *) ;
 int * FUNC_12 (char const*,char const*,int ,int *) ;
 int * FUNC_13 (char const*,char const*,int *) ;
 int * FUNC_14 (char const*,int ,int *) ;
 int * FUNC_15 (int **,char const*,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

svn_error_t *FUNC_18(const char *VAR_12,
                                         const char *VAR_13,
                                         const char *VAR_14,
                                         svn_boolean_t VAR_15,
                                         svn_cancel_func_t VAR_16,
                                         void *VAR_17,
                                         apr_pool_t *VAR_18)
{
  svn_node_kind_t VAR_19;
  apr_status_t VAR_20;
  const char *VAR_21;
  apr_dir_t *VAR_22;
  apr_finfo_t VAR_23;
  apr_int32_t VAR_24 = VAR_2 | VAR_1;


  apr_pool_t *VAR_25 = FUNC_16(VAR_18);


  VAR_21 = FUNC_7(VAR_13, VAR_14, VAR_18);



  FUNC_1(FUNC_11(VAR_12, &VAR_19, VAR_25));
  if (VAR_19 != VAR_10)
    return FUNC_9(VAR_8, ((void*)0),
                             FUNC_2("Source '%s' is not a directory"),
                             FUNC_8(VAR_12, VAR_18));

  FUNC_1(FUNC_11(VAR_13, &VAR_19, VAR_25));
  if (VAR_19 != VAR_10)
    return FUNC_9(VAR_8, ((void*)0),
                             FUNC_2("Destination '%s' is not a directory"),
                             FUNC_8(VAR_13, VAR_18));

  FUNC_1(FUNC_11(VAR_21, &VAR_19, VAR_25));
  if (VAR_19 != VAR_11)
    return FUNC_9(VAR_7, ((void*)0),
                             FUNC_2("Destination '%s' already exists"),
                             FUNC_8(VAR_21, VAR_18));



  FUNC_1(FUNC_14(VAR_21, VAR_4, VAR_18));


  FUNC_1(FUNC_15(&VAR_22, VAR_12, VAR_25));

  for (VAR_20 = FUNC_4(&VAR_23, VAR_24, VAR_22);
       VAR_20 == VAR_6;
       VAR_20 = FUNC_4(&VAR_23, VAR_24, VAR_22))
    {
      if ((VAR_23.name[0] == '.')
          && ((VAR_23.name[1] == '\0')
              || ((VAR_23.name[1] == '.')
                  && (VAR_23.name[2] == '\0'))))
        {
          continue;
        }
      else
        {
          const char *VAR_26, *VAR_27;

          if (VAR_16)
            FUNC_1(VAR_16(VAR_17));

          FUNC_1(FUNC_5(&VAR_27, VAR_23.name,
                                     VAR_12, VAR_25));
          VAR_26 = FUNC_7(VAR_12, VAR_27, VAR_25);

          if (VAR_23.filetype == VAR_5)
            {
              const char *VAR_28 = FUNC_7(VAR_21,
                                                       VAR_27,
                                                       VAR_25);
              FUNC_1(FUNC_12(VAR_26, VAR_28,
                                       VAR_15, VAR_25));
            }
          else if (VAR_23.filetype == VAR_3)
            {
              const char *VAR_29 = FUNC_7(VAR_21,
                                                       VAR_27,
                                                       VAR_25);
              FUNC_1(FUNC_13(VAR_26, VAR_29,
                                       VAR_25));
            }
          else if (VAR_23.filetype == VAR_0)
            {


              if (FUNC_6(VAR_12, VAR_13) == 0
                  && FUNC_6(VAR_27, VAR_14) == 0)
                continue;

              FUNC_1(FUNC_18
                      (VAR_26,
                       VAR_21,
                       VAR_27,
                       VAR_15,
                       VAR_16,
                       VAR_17,
                       VAR_25));
            }


        }
    }

  if (! (FUNC_0(VAR_20)))
    return FUNC_10(VAR_20, FUNC_2("Can't read directory '%s'"),
                              FUNC_8(VAR_12, VAR_18));

  VAR_20 = FUNC_3(VAR_22);
  if (VAR_20)
    return FUNC_10(VAR_20, FUNC_2("Error closing directory '%s'"),
                              FUNC_8(VAR_12, VAR_18));


  FUNC_17(VAR_25);

  return VAR_9;
}
