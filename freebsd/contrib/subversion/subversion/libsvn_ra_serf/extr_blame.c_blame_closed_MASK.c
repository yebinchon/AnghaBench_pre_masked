
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_ra_serf__xml_estate_t ;
struct TYPE_4__ {char const* name; int const* value; } ;
typedef TYPE_1__ svn_prop_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int prop_diffs; int rev_props; int state_pool; int * stream; int file_rev_baton; int (* file_rev ) (int ,char const*,int ,int ,int ,int *,int *,int ,int *) ;} ;
typedef TYPE_2__ blame_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_6 ;
 int FUNC_2 (char const*) ;
 int VAR_7 ;
 TYPE_1__* FUNC_3 (int ) ;
 char* FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char const*,int ,int ,int ,int *,int *,int ,int *) ;
 int * FUNC_7 (int const*,int ) ;
 char* FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,char const*,int const*) ;
 int FUNC_10 (int *,int,char*,char*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_ra_serf__xml_estate_t *VAR_8,
             void *VAR_9,
             int VAR_10,
             const svn_string_t *VAR_11,
             apr_hash_t *VAR_12,
             apr_pool_t *VAR_13)
{
  blame_context_t *VAR_14 = VAR_9;

  if (VAR_10 == VAR_1)
    {


      if (VAR_14->stream == ((void*)0))
        {
          const char *VAR_15;
          const char *VAR_16;

          VAR_15 = FUNC_8(VAR_12, "path");
          VAR_16 = FUNC_8(VAR_12, "rev");


          FUNC_0(VAR_14->file_rev(VAR_14->file_rev_baton,
                                      VAR_15, FUNC_2(VAR_16),
                                      VAR_14->rev_props,
                                      VAR_0 ,
                                      ((void*)0), ((void*)0),
                                      VAR_14->prop_diffs,
                                      VAR_13));
        }
    }
  else if (VAR_10 == VAR_2)
    {
      FUNC_10(VAR_8, VAR_1, "merged-revision", "*");
    }
  else if (VAR_10 == VAR_7)
    {
      FUNC_0(FUNC_11(VAR_14->stream));
    }
  else
    {
      const char *VAR_17;
      const svn_string_t *VAR_18;

      FUNC_1(VAR_10 == VAR_4
                     || VAR_10 == VAR_5
                     || VAR_10 == VAR_3);

      VAR_17 = FUNC_4(VAR_14->state_pool,
                         FUNC_8(VAR_12, "name"));

      if (VAR_10 == VAR_3)
        {
          VAR_18 = ((void*)0);
        }
      else
        {
          const char *VAR_19 = FUNC_8(VAR_12, "encoding");

          if (VAR_19 && FUNC_5(VAR_19, "base64") == 0)
            VAR_18 = FUNC_7(VAR_11, VAR_14->state_pool);
          else
            VAR_18 = FUNC_12(VAR_11, VAR_14->state_pool);
        }

      if (VAR_10 == VAR_4)
        {
          FUNC_9(VAR_14->rev_props, VAR_17, VAR_18);
        }
      else
        {
          svn_prop_t *VAR_20 = FUNC_3(VAR_14->prop_diffs);

          VAR_20->name = VAR_17;
          VAR_20->value = VAR_18;
        }
    }

  return VAR_6;
}
