
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
struct TYPE_9__ {int change_kind; scalar_t__ node_kind; scalar_t__ mergeinfo_mod; int copyfrom_path; int copyfrom_rev; scalar_t__ prop_mod; scalar_t__ text_mod; scalar_t__ node_rev_id; } ;
typedef TYPE_2__ svn_fs_path_change2_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {char* data; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*,int ,...) ;
 int * FUNC_4 (int ,int *,int ,int) ;
 int * FUNC_5 (int ) ;
 TYPE_7__* FUNC_6 (scalar_t__,int *) ;





 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (TYPE_1__*,char) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_10 (int *,char*,char const*,char const*,char const*,int ,int ,char const*,char const*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_stream_t *VAR_14,
                   const char *VAR_15,
                   svn_fs_path_change2_t *VAR_16,
                   svn_boolean_t VAR_17,
                   svn_boolean_t VAR_18,
                   apr_pool_t *VAR_19)
{
  const char *VAR_20;
  const char *VAR_21 = ((void*)0);
  const char *VAR_22 = "";
  const char *VAR_23 = "";
  svn_stringbuf_t *VAR_24;
  apr_size_t VAR_25;

  switch (VAR_16->change_kind)
    {
    case 130:
      VAR_21 = VAR_2;
      break;
    case 132:
      VAR_21 = VAR_0;
      break;
    case 131:
      VAR_21 = VAR_1;
      break;
    case 129:
      VAR_21 = VAR_3;
      break;
    case 128:
      VAR_21 = VAR_4;
      break;
    default:
      return FUNC_4(VAR_7, ((void*)0),
                               FUNC_2("Invalid change type %d"),
                               VAR_16->change_kind);
    }

  if (VAR_16->node_rev_id)
    VAR_20 = FUNC_6(VAR_16->node_rev_id, VAR_19)->data;
  else
    VAR_20 = VAR_4;

  if (VAR_17)
    {
      FUNC_0(VAR_16->node_kind == VAR_10
                     || VAR_16->node_kind == VAR_11);
      VAR_22 = FUNC_3(VAR_19, "-%s",
                                 VAR_16->node_kind == VAR_10
                                 ? VAR_8
                                  : VAR_9);
    }

  if (VAR_18 && VAR_16->mergeinfo_mod != VAR_13)
    VAR_23 = FUNC_3(VAR_19, " %s",
                                    VAR_16->mergeinfo_mod == VAR_12
                                      ? VAR_6
                                      : VAR_5);

  VAR_24 = FUNC_10(VAR_19, "%s %s%s %s %s%s %s\n",
                              VAR_20, VAR_21, VAR_22,
                              VAR_16->text_mod ? VAR_6 : VAR_5,
                              VAR_16->prop_mod ? VAR_6 : VAR_5,
                              VAR_23,
                              VAR_15);

  if (FUNC_1(VAR_16->copyfrom_rev))
    {
      FUNC_9(VAR_24, FUNC_3(VAR_19, "%ld %s",
                                                 VAR_16->copyfrom_rev,
                                                 VAR_16->copyfrom_path));
    }

   FUNC_8(VAR_24, '\n');


   VAR_25 = VAR_24->len;
   return FUNC_5(FUNC_7(VAR_14, VAR_24->data, &VAR_25));
}
