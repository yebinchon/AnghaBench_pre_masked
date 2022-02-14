
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_38__ {char const* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_39__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_40__ {scalar_t__ mtime; scalar_t__ size; } ;
typedef TYPE_3__ apr_finfo_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char**,int ,int *) ;
 scalar_t__ FUNC_4 (char const*,int *) ;
 char* FUNC_5 (int *,char*,char const*,char const*) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (char const**,char const*,int *) ;
 int VAR_9 ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (char const*,char const*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_12 (int ,int *,int ,char const*,int) ;
 TYPE_2__* FUNC_13 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (scalar_t__,int ,...) ;
 int FUNC_16 (TYPE_2__*,int ,scalar_t__,char*) ;
 int FUNC_17 (int *,int *) ;
 int VAR_10 ;
 TYPE_2__* FUNC_18 (int *,char const*,int ,int *,int *) ;
 TYPE_2__* FUNC_19 (int **,char const**,char*,char const*,char*,int ,int *,int *) ;
 int FUNC_20 (char const*,scalar_t__,int *) ;
 TYPE_2__* FUNC_21 (scalar_t__,char const*,int *) ;
 TYPE_2__* FUNC_22 (TYPE_3__*,char const*,int,int *) ;
 TYPE_2__* FUNC_23 (char const**,int *) ;
 TYPE_2__* FUNC_24 (char const**,char const*,int *) ;
 TYPE_1__* FUNC_25 (int *) ;
 TYPE_1__* FUNC_26 (TYPE_1__ const*,int *) ;
 TYPE_1__* FUNC_27 (int *) ;
 TYPE_2__* FUNC_28 (int **,char const*,int *) ;
 TYPE_2__* FUNC_29 (char const*,char const**,int ,scalar_t__,int *,scalar_t__,int *) ;
 TYPE_2__* FUNC_30 (TYPE_1__**,int *,int *,TYPE_1__*,char const*,scalar_t__,int *,int *) ;
 TYPE_2__* FUNC_31 (char const**,char const*,int *) ;
 TYPE_2__* FUNC_32 (char const**,char const*,char const*,int *) ;
 int FUNC_33 (char const*) ;

svn_error_t *
FUNC_34(svn_string_t **VAR_11 ,
                                    const char **VAR_12 ,
                                    const char *VAR_13,
                                    const char *VAR_14 ,
                                    const svn_string_t *VAR_15 ,
                                    const char *VAR_16,
                                    apr_hash_t *VAR_17,
                                    svn_boolean_t VAR_18,
                                    const char *VAR_19,
                                    apr_pool_t *VAR_20)
{
  const char *VAR_21;
  const char *VAR_22;
  apr_file_t *VAR_23;
  const char *VAR_24;
  const char *VAR_25;
  const char *VAR_26;
  svn_string_t *VAR_27;
  apr_status_t VAR_28;
  apr_size_t VAR_29;
  apr_finfo_t VAR_30, VAR_31;
  svn_error_t *VAR_32 = VAR_7;
  char *VAR_33;
  int VAR_34;
  svn_boolean_t VAR_35 = VAR_8;

  FUNC_1(FUNC_7(&VAR_21, VAR_13, VAR_17));


  if (VAR_18)
    {
      const char *VAR_36;
      FUNC_1(FUNC_29(VAR_15->data, &VAR_36,
                                           VAR_0, VAR_5,
                                           ((void*)0), VAR_5, VAR_20));
      VAR_27 = FUNC_25(VAR_20);
      if (VAR_19)
        FUNC_1(FUNC_32(&VAR_27->data,
                                              VAR_36, VAR_19, VAR_20));
      else
        FUNC_1(FUNC_31(&VAR_27->data,
                                          VAR_36, VAR_20));
      VAR_27->len = FUNC_8(VAR_27->data);
    }
  else
    VAR_27 = FUNC_26(VAR_15, VAR_20);



  VAR_28 = FUNC_3(&VAR_33, VAR_1, VAR_20);
  if (VAR_28)
    return FUNC_15(VAR_28, FUNC_2("Can't get working directory"));


  if (VAR_14[0] == '\0')
    VAR_26 = ".";
  else
    FUNC_1(FUNC_24(&VAR_26, VAR_14, VAR_20));
  VAR_28 = FUNC_4(VAR_26, VAR_20);
  if (VAR_28)
    {
      return FUNC_15
        (VAR_28, FUNC_2("Can't change working directory to '%s'"), VAR_14);
    }




  VAR_32 = FUNC_19(&VAR_23, &VAR_24,
                                   "" ,
                                   VAR_16,
                                   ".tmp",
                                   VAR_10, VAR_20, VAR_20);

  if (VAR_32 && (FUNC_0(VAR_32->apr_err) || VAR_32->apr_err == VAR_4))
    {
      const char *VAR_37;

      FUNC_10(VAR_32);

      FUNC_1(FUNC_23(&VAR_14, VAR_20));

      FUNC_1(FUNC_24(&VAR_37, VAR_14, VAR_20));
      VAR_28 = FUNC_4(VAR_37, VAR_20);
      if (VAR_28)
        {
          return FUNC_15
            (VAR_28, FUNC_2("Can't change working directory to '%s'"), VAR_14);
        }

      VAR_32 = FUNC_19(&VAR_23, &VAR_24,
                                       "" ,
                                       VAR_16,
                                       ".tmp",
                                       VAR_10, VAR_20, VAR_20);
    }

  if (VAR_32)
    goto cleanup2;





  VAR_32 = FUNC_18(VAR_23, VAR_27->data,
                               VAR_27->len, &VAR_29,
                               VAR_20);

  VAR_32 = FUNC_11(VAR_32, FUNC_17(VAR_23, VAR_20));


  if (VAR_32)
    goto cleanup;



  VAR_32 = FUNC_22(&VAR_30, VAR_24, VAR_2, VAR_20);
  if (VAR_32)
    goto cleanup;





  VAR_32 = FUNC_21(VAR_30.mtime
                                              - FUNC_6(2),
                                      VAR_24, VAR_20);
  FUNC_10(VAR_32);


  VAR_32 = FUNC_22(&VAR_30, VAR_24,
                    VAR_2 | VAR_3, VAR_20);
  if (VAR_32)
    goto cleanup;


  VAR_32 = FUNC_31(&VAR_25, VAR_24, VAR_20);
  if (VAR_32)
    goto cleanup;
  VAR_22 = FUNC_5(VAR_20, "%s %s", VAR_21, VAR_25);



  if (VAR_12)
    {
      *VAR_12 = FUNC_9(VAR_14, VAR_24, VAR_20);
      VAR_35 = VAR_5;
    }


  VAR_34 = FUNC_33(VAR_22);
  if (VAR_34 != 0)
    {


      VAR_32 = FUNC_12(VAR_6, ((void*)0),
                               FUNC_2("system('%s') returned %d"), VAR_22, VAR_34);
      goto cleanup;
    }


  VAR_32 = FUNC_22(&VAR_31, VAR_24,
                    VAR_2 | VAR_3, VAR_20);
  if (VAR_32)
    goto cleanup;


  if ((VAR_30.mtime != VAR_31.mtime) ||
      (VAR_30.size != VAR_31.size))
    {
      svn_stringbuf_t *VAR_38;
      VAR_32 = FUNC_28(&VAR_38, VAR_24, VAR_20);
      if (VAR_32)
        goto cleanup;

      *VAR_11 = FUNC_27(VAR_38);


      if (VAR_18)
        {
          VAR_32 = FUNC_30(VAR_11, ((void*)0), ((void*)0),
                                            *VAR_11, VAR_19, VAR_5,
                                            VAR_20, VAR_20);
          if (VAR_32)
            {
              VAR_32 = FUNC_13
                (VAR_32,
                 FUNC_2("Error normalizing edited contents to internal format"));
              goto cleanup;
            }
        }
    }
  else
    {

      *VAR_11 = ((void*)0);
    }

 cleanup:
  if (VAR_35)
    {

      VAR_32 = FUNC_11(
              VAR_32,
              FUNC_20(VAR_24, VAR_5, VAR_20));
    }

 cleanup2:


  VAR_28 = FUNC_4(VAR_33, VAR_20);
  if (VAR_28)
    {
      FUNC_16(FUNC_15
                        (VAR_28, FUNC_2("Can't restore working directory")),
                        VAR_9, VAR_8 , "svn: ");
    }

  return FUNC_14(VAR_32);
}
