
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int aces; TYPE_4__* cb; } ;
typedef TYPE_1__ merge_alias_baton_t ;
struct TYPE_6__ {char* name; int access; int inverted; } ;
typedef TYPE_2__ authz_ace_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int parser_pool; int parsed_aliases; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,char*,char const*,int ) ;
 char* FUNC_3 (TYPE_4__*,char const*,int) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 void* FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*,TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_3,
                const void *VAR_4,
                apr_ssize_t VAR_5,
                void *VAR_6,
                apr_pool_t *VAR_7)
{
  merge_alias_baton_t *const VAR_8 = VAR_3;
  authz_ace_t *VAR_9 = VAR_6;
  const char *VAR_10 = VAR_9->name;
  const char *VAR_11;
  const char *VAR_12;
  authz_ace_t *VAR_13;

  VAR_12 = FUNC_5(VAR_8->cb->parsed_aliases, VAR_10);
  if (!VAR_12)
    return FUNC_4(
        VAR_0, ((void*)0),
        FUNC_1("Alias '%s' was never defined"),
        VAR_10);



  if (!VAR_9->inverted)
    VAR_11 = VAR_12;
  else
    {
      VAR_11 = FUNC_2(VAR_8->cb->parser_pool,
                                  "~", VAR_12, VAR_2);
      VAR_11 = FUNC_3(VAR_8->cb, VAR_11, -1);
    }

  VAR_13 = FUNC_5(VAR_8->aces, VAR_11);
  if (!VAR_13)
    {
      VAR_9->name = VAR_12;
      FUNC_6(VAR_8->aces, VAR_11, VAR_9);
    }
  else
    {
      FUNC_0(!VAR_13->inverted == !VAR_9->inverted);
      VAR_13->access |= VAR_9->access;
    }

  return VAR_1;
}
