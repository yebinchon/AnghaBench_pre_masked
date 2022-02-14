
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_14__ {char* data; int len; } ;
typedef TYPE_2__ svn_string_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__**,TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__**,int *,char*) ;
 int FUNC_6 (TYPE_1__**,int *,int ,char*,char*,char const*,char*,...) ;
 int VAR_2 ;

void
FUNC_7(svn_stringbuf_t **VAR_3,
                            const char* VAR_4,
                            svn_string_t *VAR_5,
                            svn_boolean_t VAR_6,
                            apr_pool_t *VAR_7)
{
  const char *VAR_8;
  const char *VAR_9 = ((void*)0);

  if (*VAR_3 == ((void*)0))
    *VAR_3 = FUNC_2(VAR_7);

  if (FUNC_4(VAR_5->data, VAR_5->len))
    {
      svn_stringbuf_t *VAR_10 = ((void*)0);
      FUNC_3(&VAR_10, VAR_5, VAR_7);
      VAR_8 = VAR_10->data;
    }
  else
    {
      const svn_string_t *VAR_11 = FUNC_0(VAR_5, VAR_1,
                                                               VAR_7);
      VAR_9 = "base64";
      VAR_8 = VAR_11->data;
    }

  if (VAR_9)
    FUNC_6(
      VAR_3, VAR_7, VAR_2,
      VAR_6 ? "inherited_property" : "property",
      "name", VAR_4,
      "encoding", VAR_9, VAR_0);
  else
    FUNC_6(
      VAR_3, VAR_7, VAR_2,
      VAR_6 ? "inherited_property" : "property",
      "name", VAR_4, VAR_0);

  FUNC_1(*VAR_3, VAR_8);

  FUNC_5(
    VAR_3, VAR_7,
    VAR_6 ? "inherited_property" : "property");

  return;
}
