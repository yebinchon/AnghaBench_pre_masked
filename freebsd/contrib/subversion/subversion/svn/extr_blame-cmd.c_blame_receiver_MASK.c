
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int verbose; scalar_t__ use_merge_history; } ;
typedef TYPE_1__ svn_cl__opt_state_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_4__ {int rev_maxlength; int * out; TYPE_1__* opt_state; } ;
typedef TYPE_2__ blame_baton_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int,int ,int ,char const*,int ,int,int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int *,char*,char const*,int ) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_5,
               svn_revnum_t VAR_6,
               svn_revnum_t VAR_7,
               apr_int64_t VAR_8,
               svn_revnum_t VAR_9,
               apr_hash_t *VAR_10,
               svn_revnum_t VAR_11,
               apr_hash_t *VAR_12,
               const char *VAR_13,
               const char *VAR_14,
               svn_boolean_t VAR_15,
               apr_pool_t *VAR_16)
{
  blame_baton_t *VAR_17 = VAR_5;
  svn_cl__opt_state_t *VAR_18 = VAR_17->opt_state;
  svn_stream_t *VAR_19 = VAR_17->out;
  svn_boolean_t VAR_20 = VAR_1;

  if (!VAR_17->rev_maxlength)
    {
      svn_revnum_t VAR_21 = FUNC_0(VAR_6, VAR_7);




      VAR_17->rev_maxlength = 6;
      while (VAR_21 >= 1000000)
        {
          VAR_17->rev_maxlength++;
          VAR_21 = VAR_21 / 10;
        }
    }

  if (VAR_18->use_merge_history)
    {





      if (VAR_11 < VAR_9)
        {
          FUNC_1(FUNC_5(VAR_19, "G "));
          VAR_20 = VAR_4;
        }
      else
        FUNC_1(FUNC_5(VAR_19, "  "));
    }

  if (VAR_20)
    FUNC_1(FUNC_2(VAR_19, VAR_11,
                            FUNC_3(VAR_12,
                                               VAR_2),
                            FUNC_3(VAR_12,
                                               VAR_3),
                            VAR_13, VAR_18->verbose,
                            VAR_17->rev_maxlength,
                            VAR_16));
  else
    FUNC_1(FUNC_2(VAR_19, VAR_9,
                            FUNC_3(VAR_10,
                                               VAR_2),
                            FUNC_3(VAR_10,
                                               VAR_3),
                            ((void*)0), VAR_18->verbose,
                            VAR_17->rev_maxlength,
                            VAR_16));

  return FUNC_4(VAR_19, VAR_16, "%s%s", VAR_14, VAR_0);
}
