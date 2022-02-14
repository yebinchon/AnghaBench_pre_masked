
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * data; scalar_t__ len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int parser_pool; int parsed_groups; scalar_t__ parsing_groups; int in_groups; } ;
typedef TYPE_2__ ctor_baton_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char const*,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 char* FUNC_4 (int ,char*,int *,int ) ;
 int FUNC_5 (TYPE_2__* const,char const*,scalar_t__) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,char*,int ,int ) ;
 int * FUNC_8 (int ,int *,int ,char const*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_4, svn_stringbuf_t *VAR_5,
                 svn_stringbuf_t *VAR_6, svn_stringbuf_t *VAR_7)
{
  ctor_baton_t *const VAR_8 = VAR_4;
  const char *VAR_9;
  apr_size_t VAR_10;

  FUNC_0(VAR_8->in_groups);

  if (FUNC_6("@$&*~", *VAR_6->data))
    {
      if (VAR_8->parsing_groups)
        return FUNC_8(
            VAR_0, ((void*)0),
            FUNC_1("Global group name '%s' may not begin with '%c'"),
            VAR_6->data, *VAR_6->data);
      else
        return FUNC_8(
            VAR_0, ((void*)0),
            FUNC_1("Group name '%s' may not begin with '%c'"),
            VAR_6->data, *VAR_6->data);
    }


  VAR_9 = FUNC_4(VAR_8->parser_pool, "@", VAR_6->data, VAR_2);
  VAR_10 = VAR_6->len + 1;
  if (FUNC_2(VAR_8->parsed_groups, VAR_9, VAR_10))
    {
      if (VAR_8->parsing_groups)
        return FUNC_8(VAR_0, ((void*)0),
                                 FUNC_1("Can't override definition"
                                   " of global group '%s'"),
                                 VAR_9);
      else
        return FUNC_8(VAR_0, ((void*)0),
                                 FUNC_1("Can't override definition"
                                   " of group '%s'"),
                                 VAR_9);
    }





  FUNC_3(VAR_8->parsed_groups,
               FUNC_5(VAR_8, VAR_9, VAR_10), VAR_10,
               FUNC_7(VAR_7->data, ",", VAR_3, VAR_8->parser_pool));

  return VAR_1;
}
