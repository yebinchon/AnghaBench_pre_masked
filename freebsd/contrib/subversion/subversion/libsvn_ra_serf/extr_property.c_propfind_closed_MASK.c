
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct TYPE_11__ {char const* depth; char* path; int * ps_props; int prop_func_baton; int (* prop_func ) (int ,char const*,char const*,char const*,TYPE_1__ const*,int *) ;} ;
typedef TYPE_2__ propfind_context_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,char const*,char const*,TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (int ,char const*,char const*,char*,TYPE_1__ const*,int *) ;
 int FUNC_12 (int ,char const*,char const*,char const*,TYPE_1__ const*,int *) ;
 TYPE_1__* FUNC_13 (TYPE_1__ const*,int *) ;
 int * FUNC_14 (int ,int *,int ,char const*) ;
 char* FUNC_15 (int *,char*) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *,int) ;
 int FUNC_20 (int *,int,char*,char const*) ;
 TYPE_1__* FUNC_21 (char const*,int *) ;
 char* FUNC_22 (char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_23(svn_ra_serf__xml_estate_t *VAR_11,
                void *VAR_12,
                int VAR_13,
                const svn_string_t *VAR_14,
                apr_hash_t *VAR_15,
                apr_pool_t *VAR_16)
{
  propfind_context_t *VAR_17 = VAR_12;

  if (VAR_13 == VAR_4)
    {




    }
  else if (VAR_13 == VAR_2)
    {
      const char *VAR_18;

      if (FUNC_10(VAR_17->depth, "1") == 0)
        VAR_18 = FUNC_22(VAR_14->data, VAR_16);
      else
        VAR_18 = VAR_17->path;

      FUNC_20(VAR_11, VAR_7, "path", VAR_18);

      FUNC_0(VAR_17->prop_func(VAR_17->prop_func_baton,
                             VAR_18,
                             VAR_1, "href",
                             VAR_14, VAR_16));
    }
  else if (VAR_13 == VAR_0)
    {
      FUNC_20(VAR_11, VAR_6, "altvalue", "collection");
    }
  else if (VAR_13 == VAR_3)
    {
      FUNC_20(VAR_11, VAR_6, "altvalue", VAR_14->data);
    }
  else if (VAR_13 == VAR_8)
    {




      apr_int64_t VAR_19 = FUNC_8(VAR_14->data);
      if (VAR_19 != 200)
        FUNC_20(VAR_11, VAR_5, "ignore-prop", "*");
    }
  else if (VAR_13 == VAR_6)
    {
      const char *VAR_20;
      const svn_string_t *VAR_21;
      const char *VAR_22;
      const char *VAR_23;
      const char *VAR_24;

      if ((VAR_24 = FUNC_15(VAR_15, "altvalue")) != ((void*)0))
        {
          VAR_21 = FUNC_21(VAR_24, VAR_16);
        }
      else if ((VAR_20 = FUNC_15(VAR_15, "V:encoding")) != ((void*)0))
        {
          if (FUNC_10(VAR_20, "base64") != 0)
            return FUNC_14(VAR_9,
                                     ((void*)0),
                                     FUNC_2("Got unrecognized encoding '%s'"),
                                     VAR_20);


          VAR_21 = FUNC_13(VAR_14, VAR_16);
        }
      else
        {

          VAR_21 = VAR_14;
        }
      VAR_22 = FUNC_15(VAR_15, "ns");
      VAR_23 = FUNC_15(VAR_15, "name");

      FUNC_9(VAR_17->ps_props, VAR_22, VAR_23, VAR_21,
                  FUNC_5(VAR_17->ps_props));
    }
  else
    {
      apr_hash_t *VAR_25;

      FUNC_1(VAR_13 == VAR_5);

      VAR_25 = FUNC_19(VAR_11, VAR_7);




      if (! FUNC_15(VAR_25, "ignore-prop"))
        {
          apr_hash_index_t *VAR_26;
          const char *VAR_27;
          apr_pool_t *VAR_28 = FUNC_17(VAR_16);


          VAR_27 = FUNC_15(VAR_25, "path");
          if (!VAR_27)
            VAR_27 = VAR_17->path;

          for (VAR_26 = FUNC_3(VAR_16, VAR_17->ps_props);
               VAR_26;
               VAR_26 = FUNC_4(VAR_26))
            {
              const char *VAR_29 = FUNC_6(VAR_26);
              apr_hash_t *VAR_30 = FUNC_7(VAR_26);
              apr_hash_index_t *VAR_31;

              FUNC_16(VAR_28);

              for (VAR_31 = FUNC_3(VAR_28, VAR_30);
                   VAR_31;
                   VAR_31 = FUNC_4(VAR_31))
                {
                  const char *VAR_32 = FUNC_6(VAR_31);
                  const svn_string_t *VAR_33 = FUNC_7(VAR_31);

                  FUNC_0(VAR_17->prop_func(VAR_17->prop_func_baton, VAR_27,
                                         VAR_29, VAR_32, VAR_33, VAR_28));
                }
            }

          FUNC_18(VAR_28);
        }

      VAR_17->ps_props = ((void*)0);
    }

  return VAR_10;
}
