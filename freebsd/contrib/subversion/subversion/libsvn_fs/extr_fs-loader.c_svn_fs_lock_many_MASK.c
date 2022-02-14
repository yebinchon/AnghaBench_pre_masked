
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_10__ {char* token; } ;
typedef TYPE_3__ svn_fs_lock_target_t ;
typedef int * (* svn_fs_lock_callback_t ) (void*,int ,int *,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_8__ {int * (* lock ) (TYPE_2__*,int *,char const*,int ,int ,int ,int * (*) (void*,int ,int *,int *,int *),void*,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int * FUNC_9 (TYPE_2__*,int *,char const*,int ,int ,int ,int * (*) (void*,int ,int *,int *,int *),void*,int *,int *) ;
 int FUNC_10 (char const) ;
 scalar_t__ FUNC_11 (char const) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int * FUNC_14 (int ,int *,int ) ;
 int * FUNC_15 (int ,int *,int ,char const*,...) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,TYPE_3__ const*) ;
 int FUNC_18 (char const*,int) ;

svn_error_t *
FUNC_19(svn_fs_t *VAR_4,
                 apr_hash_t *VAR_5,
                 const char *VAR_6,
                 svn_boolean_t VAR_7,
                 apr_time_t VAR_8,
                 svn_boolean_t VAR_9,
                 svn_fs_lock_callback_t VAR_10,
                 void *VAR_11,
                 apr_pool_t *VAR_12,
                 apr_pool_t *VAR_13)
{
  apr_hash_index_t *VAR_14;
  apr_hash_t *VAR_15 = FUNC_3(VAR_13);
  svn_error_t *VAR_16, *VAR_17 = VAR_3;


  if (VAR_6)
    if (! FUNC_18(VAR_6, FUNC_7(VAR_6)))
      return FUNC_14(VAR_2, ((void*)0),
                              FUNC_0("Lock comment contains illegal characters"));

  if (VAR_8 < 0)
    return FUNC_14(VAR_1, ((void*)0),
              FUNC_0("Negative expiration date passed to svn_fs_lock"));


  for (VAR_14 = FUNC_2(VAR_13, VAR_5); VAR_14; VAR_14 = FUNC_4(VAR_14))
    {
      const svn_fs_lock_target_t *VAR_18 = FUNC_6(VAR_14);

      VAR_16 = VAR_3;
      if (VAR_18->token)
        {
          const char *VAR_19;


          if (FUNC_8(VAR_18->token, "opaquelocktoken:", 16))
            VAR_16 = FUNC_15(VAR_0, ((void*)0),
                                    FUNC_0("Lock token URI '%s' has bad scheme; "
                                      "expected '%s'"),
                                    VAR_18->token, "opaquelocktoken");

          if (!VAR_16)
            {
              for (VAR_19 = VAR_18->token; *VAR_19 && !VAR_16; VAR_19++)
                if (! FUNC_10(*VAR_19) || FUNC_11(*VAR_19))
                  VAR_16 = FUNC_15(
                          VAR_0, ((void*)0),
                          FUNC_0("Lock token '%s' is not ASCII or is a "
                            "control character at byte %u"),
                          VAR_18->token,
                          (unsigned)(VAR_19 - VAR_18->token));


              if (!VAR_16 && !FUNC_18(VAR_18->token,
                                               VAR_19 - VAR_18->token))
                VAR_16 = FUNC_15(
                            VAR_0, ((void*)0),
                            FUNC_0("Lock token URI '%s' is not XML-safe"),
                            VAR_18->token);
            }
        }

      if (VAR_16)
        {
          if (!VAR_17 && VAR_10)
            VAR_17 = VAR_10(VAR_11, FUNC_5(VAR_14),
                                   ((void*)0), VAR_16, VAR_13);
          FUNC_12(VAR_16);
        }
      else
        FUNC_17(VAR_15, FUNC_5(VAR_14), VAR_18);
    }

  if (!FUNC_1(VAR_15))
    return FUNC_16(VAR_17);

  VAR_16 = VAR_4->vtable->lock(VAR_4, VAR_15, VAR_6, VAR_7,
                         VAR_8, VAR_9,
                         VAR_10, VAR_11,
                         VAR_12, VAR_13);

  if (VAR_16 && VAR_17)
    FUNC_13(VAR_16, VAR_17);
  else if (!VAR_16)
    VAR_16 = VAR_17;

  return FUNC_16(VAR_16);
}
