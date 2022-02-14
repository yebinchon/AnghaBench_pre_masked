
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* svn_wc_relocation_validator3_t ) (void*,char const*,char const*,char const*,int *) ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*,char const*,int ) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t) ;
 char const* FUNC_5 (char const*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,int *,int ,char const*,...) ;
 int * FUNC_9 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char const*,char const*,int *) ;
 int * FUNC_12 (char const**,int ,char const*,int *,int *) ;
 int FUNC_13 (int ,char const*,char const*,int *) ;
 int FUNC_14 (int *,scalar_t__*,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_15 (int *,TYPE_1__*,char const*,int *) ;
 char* FUNC_16 (char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_17(svn_wc_context_t *VAR_5,
                 const char *VAR_6,
                 const char *VAR_7,
                 const char *VAR_8,
                 svn_wc_relocation_validator3_t VAR_9,
                 void *VAR_10,
                 apr_pool_t *VAR_11)
{
  svn_node_kind_t VAR_12;
  const char *VAR_13;
  const char *VAR_14, *VAR_15;
  const char *VAR_16, *VAR_17;
  size_t VAR_18;
  size_t VAR_19;
  const char *VAR_20;
  svn_boolean_t VAR_21;

  FUNC_0(FUNC_15(&VAR_21, VAR_5, VAR_6,
                            VAR_11));
  if (! VAR_21)
    {
      const char *VAR_22;
      svn_error_t *VAR_23;

      VAR_23 = FUNC_12(&VAR_22, VAR_5->db,
                                  VAR_6, VAR_11, VAR_11);
      if (VAR_23)
        {
          FUNC_6(VAR_23);
          return FUNC_8(
            VAR_1, ((void*)0),
            FUNC_1("Cannot relocate '%s' as it is not the root of a working copy"),
            FUNC_5(VAR_6, VAR_11));
        }
      else
        {
          return FUNC_8(
            VAR_1, ((void*)0),
            FUNC_1("Cannot relocate '%s' as it is not the root of a working copy; "
              "try relocating '%s' instead"),
            FUNC_5(VAR_6, VAR_11),
            FUNC_5(VAR_22, VAR_11));
        }
    }

  FUNC_0(FUNC_14(((void*)0), &VAR_12, ((void*)0), &VAR_13,
                               &VAR_14, &VAR_20,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0),
                               VAR_5->db, VAR_6, VAR_11,
                               VAR_11));

  if (VAR_12 != VAR_4)
    return FUNC_7(VAR_0, ((void*)0),
                            FUNC_1("Cannot relocate a single file"));

  VAR_15 = FUNC_11(VAR_14, VAR_13,
                                        VAR_11);
  VAR_19 = FUNC_3(VAR_15);
  VAR_18 = FUNC_3(VAR_7);
  if ((VAR_18 > VAR_19) || (FUNC_4(VAR_15, VAR_7, FUNC_3(VAR_7)) != 0))
    return FUNC_8(VAR_2, ((void*)0),
                             FUNC_1("Invalid source URL prefix: '%s' (does not "
                               "overlap target's URL '%s')"),
                             VAR_7, VAR_15);

  if (VAR_19 == VAR_18)
    VAR_17 = VAR_8;
  else
    VAR_17 = FUNC_2(VAR_11, VAR_8, VAR_15 + VAR_18, VAR_3);
  if (! FUNC_10(VAR_17))
    return FUNC_8(VAR_2, ((void*)0),
                             FUNC_1("Invalid relocation destination: '%s' "
                               "(not a URL)"), VAR_17);

  VAR_16 = FUNC_16(VAR_17, VAR_13,
                                            VAR_11, VAR_11);
  if (!VAR_16)
    return FUNC_8(VAR_2, ((void*)0),
                             FUNC_1("Invalid relocation destination: '%s' "
                               "(does not point to target)" ), VAR_17);

  FUNC_0(VAR_9(VAR_10, VAR_20, VAR_17, VAR_16,
                    VAR_11));

  return FUNC_9(FUNC_13(VAR_5->db, VAR_6,
                                                    VAR_16,
                                                    VAR_11));
}
