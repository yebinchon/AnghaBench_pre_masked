
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ summarize_kind; int node_kind; scalar_t__ prop_changed; int path; } ;
typedef TYPE_2__ svn_client_diff_summarize_t ;
struct summarize_baton_t {char* anchor; scalar_t__ ignore_properties; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 char* FUNC_3 (char const*,int ,int *) ;
 char* FUNC_4 (char const*,int *) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,int ,int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__**,char const*,int *) ;
 int FUNC_9 (TYPE_1__**,int *,char*) ;
 int FUNC_10 (TYPE_1__**,int *,int ,char*,char*,int ,char*,int ,char*,char const*,int ) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_11(const svn_client_diff_summarize_t *VAR_5,
              void *VAR_6,
              apr_pool_t *VAR_7)
{
  struct summarize_baton_t *VAR_8 = VAR_6;


  const char *VAR_9 = VAR_8->anchor;
  svn_stringbuf_t *VAR_10 = FUNC_7(VAR_7);
  const char *VAR_11;

  if (VAR_8->ignore_properties &&
      VAR_5->summarize_kind == VAR_3)
    return VAR_0;



  if (FUNC_5(VAR_9))
    {
      VAR_9 = FUNC_6(VAR_9, VAR_5->path, VAR_7);
    }
  else
    {
      VAR_9 = FUNC_3(VAR_9, VAR_5->path, VAR_7);



      VAR_9 = FUNC_4(VAR_9, VAR_7);
    }

  VAR_11 = VAR_5->prop_changed ? "modified" : "none";
  if (VAR_8->ignore_properties)
    VAR_11 = "none";

  FUNC_10(&VAR_10, VAR_7, VAR_4, "path",
                        "kind", FUNC_2(VAR_5->node_kind),
                        "item", FUNC_0(VAR_5->summarize_kind),
                        "props", VAR_11,
                        VAR_1);

  FUNC_8(&VAR_10, VAR_9, VAR_7);
  FUNC_9(&VAR_10, VAR_7, "path");

  return FUNC_1(VAR_10->data, VAR_2);
}
