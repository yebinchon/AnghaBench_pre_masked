
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; int * data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int parsed_aliases; int parser_pool; } ;
typedef TYPE_2__ ctor_baton_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char const*,scalar_t__) ;
 int FUNC_2 (int ,char const*,scalar_t__,char const*) ;
 char* FUNC_3 (int ,char*,int *,int ) ;
 char* FUNC_4 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int * FUNC_7 (int ,int *,int ,char const*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_8(ctor_baton_t *VAR_3,
                     svn_stringbuf_t *VAR_4, svn_stringbuf_t *VAR_5)
{
  const char *VAR_6;
  apr_size_t VAR_7;
  const char *VAR_8;

  if (FUNC_6("@$&*~", *VAR_4->data))
    return FUNC_7(
        VAR_0, ((void*)0),
        FUNC_0("Alias name '%s' may not begin with '%c'"),
        VAR_4->data, *VAR_4->data);


  VAR_6 = FUNC_3(VAR_3->parser_pool, "&", VAR_4->data, VAR_2);
  VAR_7 = VAR_4->len + 1;
  if (FUNC_1(VAR_3->parsed_aliases, VAR_6, VAR_7))
    return FUNC_7(
        VAR_0, ((void*)0),
        FUNC_0("Can't override definition of alias '%s'"),
        VAR_6);

  VAR_8 = FUNC_4(VAR_3, VAR_5->data, VAR_5->len);
  FUNC_2(VAR_3->parsed_aliases, VAR_6, VAR_7, VAR_8);


  FUNC_5(VAR_3, VAR_8);
  return VAR_1;
}
