
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {char* min_rev; char* max_rev; scalar_t__ sparse_checkout; scalar_t__ switched; scalar_t__ modified; } ;
typedef TYPE_1__ svn_wc_revision_status_t ;
typedef int svn_wc_context_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_28__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_29__ {int interleave; int ind; char** argv; } ;
typedef TYPE_3__ apr_getopt_t ;
struct TYPE_30__ {char* member_0; char member_1; int member_3; int member_2; } ;
typedef TYPE_4__ apr_getopt_option_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;

 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__ const*,int*,char const**) ;
 TYPE_2__* FUNC_6 () ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (TYPE_4__ const*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_9 (TYPE_3__**,int,char const**,int *) ;
 TYPE_2__* FUNC_10 (int ,int *,char*,int ) ;
 TYPE_2__* FUNC_11 (char*,int ,int *) ;
 TYPE_2__* FUNC_12 (int *,char*,char*) ;
 TYPE_2__* FUNC_13 (char const**,char const*,int *) ;
 int FUNC_14 (char const*,int *) ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_2__* FUNC_16 (char const*,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__* FUNC_17 (char const**,char const*,int *) ;
 TYPE_2__* FUNC_18 (char const**,char*,int *) ;
 TYPE_2__* FUNC_19 (int **,int *,int *,int *) ;
 TYPE_2__* FUNC_20 (TYPE_1__**,int *,char const*,char const*,scalar_t__,int *,int *,int *,int *) ;
 TYPE_2__* FUNC_21 (char*,int *) ;
 int FUNC_22 (int *) ;
 TYPE_2__* FUNC_23 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_24(int *VAR_12, int VAR_13, const char *VAR_14[], apr_pool_t *VAR_15)
{
  const char *VAR_16, *VAR_17;
  const char *VAR_18;
  svn_wc_revision_status_t *VAR_19;
  svn_boolean_t VAR_20 = VAR_2, VAR_21 = VAR_2;
  svn_error_t *VAR_22;
  apr_getopt_t *VAR_23;
  svn_wc_context_t *VAR_24;
  svn_boolean_t VAR_25 = VAR_2;
  svn_boolean_t VAR_26 = VAR_2;
  const apr_getopt_option_t VAR_27[] =
    {
      {"no-newline", 'n', 0, FUNC_1("do not output the trailing newline")},
      {"committed", 'c', 0, FUNC_1("last changed rather than current revisions")},
      {"help", 'h', 0, FUNC_1("display this help")},
      {"version", 128, 0,
       FUNC_1("show program version information")},
      {"quiet", 'q', 0,
       FUNC_1("no progress (only errors) to stderr")},
      {0, 0, 0, 0}
    };


  FUNC_2(FUNC_6());
  FUNC_2(FUNC_9(&VAR_23, VAR_13, VAR_14, VAR_15));

  VAR_23->interleave = 1;
  while (1)
    {
      int VAR_28;
      const char *VAR_29;
      apr_status_t VAR_30 = FUNC_5(VAR_23, VAR_27, &VAR_28, &VAR_29);
      if (FUNC_0(VAR_30))
        break;
      if (VAR_30 != VAR_0)
        {
          *VAR_12 = VAR_1;
          FUNC_22(VAR_15);
          return VAR_5;
        }

      switch (VAR_28)
        {
        case 'n':
          VAR_20 = VAR_6;
          break;
        case 'c':
          VAR_21 = VAR_6;
          break;
        case 'q':
          VAR_25 = VAR_6;
          break;
        case 'h':
          FUNC_8(VAR_27, VAR_15);
          return VAR_5;
        case 128:
          VAR_26 = VAR_6;
          break;
        default:
          *VAR_12 = VAR_1;
          FUNC_22(VAR_15);
          return VAR_5;
        }
    }

  if (VAR_26)
    {
      FUNC_2(FUNC_23(VAR_25, VAR_15));
      return VAR_5;
    }
  if (VAR_23->ind > VAR_13 || VAR_23->ind < VAR_13 - 2)
    {
      *VAR_12 = VAR_1;
      FUNC_22(VAR_15);
      return VAR_5;
    }

  FUNC_2(FUNC_18(&VAR_16,
                                  (VAR_23->ind < VAR_13) ? VAR_23->argv[VAR_23->ind] : ".",
                                  VAR_15));

  FUNC_2(FUNC_17(&VAR_16, VAR_16, VAR_15));
  FUNC_2(FUNC_13(&VAR_18, VAR_16, VAR_15));
  FUNC_2(FUNC_19(&VAR_24, ((void*)0), VAR_15, VAR_15));

  if (VAR_23->ind+1 < VAR_13)
    FUNC_2(FUNC_18(&VAR_17, VAR_23->argv[VAR_23->ind+1], VAR_15));
  else
    VAR_17 = ((void*)0);

  VAR_22 = FUNC_20(&VAR_19, VAR_24, VAR_18, VAR_17,
                                VAR_21, ((void*)0), ((void*)0), VAR_15, VAR_15);

  if (VAR_22 && (VAR_22->apr_err == VAR_4
              || VAR_22->apr_err == VAR_3))
    {
      svn_node_kind_t VAR_31;
      svn_boolean_t VAR_32;

      FUNC_15(VAR_22);

      FUNC_2(FUNC_16(VAR_18, &VAR_31, &VAR_32, VAR_15));

      if (VAR_32)
        FUNC_2(FUNC_12(VAR_15, FUNC_4("Unversioned symlink%s"),
                                   VAR_20 ? "" : "\n"));
      else if (VAR_31 == VAR_9)
        FUNC_2(FUNC_12(VAR_15, FUNC_4("Unversioned directory%s"),
                                   VAR_20 ? "" : "\n"));
      else if (VAR_31 == VAR_10)
        FUNC_2(FUNC_12(VAR_15, FUNC_4("Unversioned file%s"),
                                   VAR_20 ? "" : "\n"));
      else
        {
          FUNC_2(FUNC_10(VAR_7, VAR_15,
                                      VAR_31 == VAR_11
                                       ? FUNC_4("'%s' doesn't exist\n")
                                       : FUNC_4("'%s' is of unknown type\n"),
                                      FUNC_14(VAR_18,
                                                             VAR_15)));
          *VAR_12 = VAR_1;
          return VAR_5;
        }
      return VAR_5;
    }

  FUNC_2(VAR_22);

  if (! FUNC_3(VAR_19->min_rev))
    {

      FUNC_2(FUNC_12(VAR_15, FUNC_4("Uncommitted local addition, "
                                         "copy or move%s"),
                                 VAR_20 ? "" : "\n"));
      return VAR_5;
    }


  FUNC_2(FUNC_12(VAR_15, "%ld", VAR_19->min_rev));
  if (VAR_19->min_rev != VAR_19->max_rev)
    FUNC_2(FUNC_12(VAR_15, ":%ld", VAR_19->max_rev));
  if (VAR_19->modified)
    FUNC_2(FUNC_11("M", VAR_8, VAR_15));
  if (VAR_19->switched)
    FUNC_2(FUNC_11("S", VAR_8, VAR_15));
  if (VAR_19->sparse_checkout)
    FUNC_2(FUNC_11("P", VAR_8, VAR_15));

  if (! VAR_20)
    FUNC_2(FUNC_11("\n", VAR_8, VAR_15));

  return VAR_5;
}
