
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int data; int len; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_stream_t ;
struct TYPE_8__ {int data; } ;
struct TYPE_10__ {int change_kind; scalar_t__ node_kind; scalar_t__ mergeinfo_mod; int copyfrom_path; int copyfrom_rev; TYPE_1__ path; scalar_t__ prop_mod; scalar_t__ text_mod; } ;
typedef TYPE_3__ svn_fs_x__change_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*,int ,...) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int *,int ,int) ;
 int * FUNC_6 (int ) ;




 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (TYPE_2__*,char) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 TYPE_2__* FUNC_10 (int *,char*,char const*,char const*,int ,int ,int ,int ) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_stream_t *VAR_12,
                   svn_fs_x__change_t *VAR_13,
                   apr_pool_t *VAR_14)
{
  const char *VAR_15 = ((void*)0);
  const char *VAR_16 = "";
  svn_stringbuf_t *VAR_17;
  apr_size_t VAR_18;

  switch (VAR_13->change_kind)
    {
    case 129:
      VAR_15 = VAR_2;
      break;
    case 131:
      VAR_15 = VAR_0;
      break;
    case 130:
      VAR_15 = VAR_1;
      break;
    case 128:
      VAR_15 = VAR_3;
      break;
    default:
      return FUNC_5(VAR_6, ((void*)0),
                               FUNC_2("Invalid change type %d"),
                               VAR_13->change_kind);
    }

  FUNC_0(VAR_13->node_kind == VAR_9
                 || VAR_13->node_kind == VAR_10);
  VAR_16 = FUNC_3(VAR_14, "-%s",
                             VAR_13->node_kind == VAR_9
                             ? VAR_7
                             : VAR_8);

  VAR_17 = FUNC_10(VAR_14, "%s%s %s %s %s %s\n",
                              VAR_15, VAR_16,
                              VAR_13->text_mod ? VAR_5 : VAR_4,
                              VAR_13->prop_mod ? VAR_5 : VAR_4,
                              VAR_13->mergeinfo_mod == VAR_11
                                               ? VAR_5 : VAR_4,
                              FUNC_4(VAR_13->path.data, VAR_14));

  if (FUNC_1(VAR_13->copyfrom_rev))
    {
      FUNC_9(VAR_17, FUNC_3(VAR_14, "%ld %s",
                               VAR_13->copyfrom_rev,
                               FUNC_4(VAR_13->copyfrom_path,
                                                VAR_14)));
    }

  FUNC_8(VAR_17, '\n');


  VAR_18 = VAR_17->len;
  return FUNC_6(FUNC_7(VAR_12, VAR_17->data, &VAR_18));
}
