
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int kind; } ;
struct TYPE_10__ {int kind; } ;
struct TYPE_13__ {char* target_dir; char* url; TYPE_2__ peg_revision; TYPE_1__ revision; } ;
typedef TYPE_4__ svn_wc_external_item2_t ;
struct TYPE_14__ {int format; char* peg_rev_str; int rev_str; } ;
typedef TYPE_5__ svn_wc__externals_parser_info_t ;
struct TYPE_12__ {int number; } ;
struct TYPE_15__ {TYPE_3__ value; int kind; } ;
typedef TYPE_6__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,char const*,...) ;
 char* FUNC_3 (int *,int ,char*,int ) ;
 char const* FUNC_4 (char*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ,int *,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



__attribute__((used)) static svn_error_t *
FUNC_7(const char **VAR_7,
                          const char *VAR_8,
                          svn_wc_external_item2_t *VAR_9,
                          svn_wc__externals_parser_info_t *VAR_10,
                          svn_opt_revision_t VAR_11,
                          apr_pool_t *VAR_12)
{
  const char *VAR_13;
  const char *VAR_14;

  switch (VAR_10->format)
    {
      case 129:
        if (VAR_11.kind == VAR_6)
          {

            VAR_13 = FUNC_3(VAR_12, VAR_10->rev_str, " ", VAR_3);
          }
        else if (VAR_10->rev_str && VAR_9->revision.kind != VAR_4)
          VAR_13 = FUNC_2(VAR_12, "%s ", VAR_10->rev_str);
        else
          {

            FUNC_0(VAR_11.kind == VAR_5);
            VAR_13 = FUNC_2(VAR_12, "-r%ld ",
                                   VAR_11.value.number);
          }

        *VAR_7 =
          FUNC_2(VAR_12, "%s %s%s\n", FUNC_4(VAR_9->target_dir, VAR_12),
                                          VAR_13,
                                          FUNC_4(VAR_9->url, VAR_12));
        break;

      case 128:
        if (VAR_11.kind == VAR_6)
          {

            VAR_13 = FUNC_3(VAR_12, VAR_10->rev_str, " ", VAR_3);
          }
        else if (VAR_10->rev_str && VAR_9->revision.kind != VAR_4)
          VAR_13 = FUNC_2(VAR_12, "%s ", VAR_10->rev_str);
        else
          VAR_13 = "";

        if (VAR_11.kind == VAR_6)
          VAR_14 = VAR_10->peg_rev_str ? VAR_10->peg_rev_str : "";
        else if (VAR_10->peg_rev_str &&
                 VAR_9->peg_revision.kind != VAR_4)
          VAR_14 = VAR_10->peg_rev_str;
        else
          {

            FUNC_0(VAR_11.kind == VAR_5);
            VAR_14 = FUNC_2(VAR_12, "@%ld",
                                       VAR_11.value.number);
          }

        *VAR_7 =
          FUNC_2(VAR_12, "%s%s %s\n", VAR_13,
                       FUNC_4(FUNC_2(VAR_12, "%s%s", VAR_9->url,
                                                VAR_14),
                                   VAR_12),
                       FUNC_4(VAR_9->target_dir, VAR_12));
        break;

      default:
        return FUNC_6(
                 VAR_0, ((void*)0),
                 FUNC_1("%s property defined at '%s' is using an unsupported "
                   "syntax"), VAR_2,
                 FUNC_5(VAR_8, VAR_12));
    }

  return VAR_1;
}
