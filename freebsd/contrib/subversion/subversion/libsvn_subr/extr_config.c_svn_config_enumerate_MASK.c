
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int pool; } ;
typedef TYPE_1__ svn_config_t ;
typedef int (* svn_config_enumerator_t ) (int ,char const*,void*) ;
struct TYPE_12__ {int options; } ;
typedef TYPE_2__ cfg_section_t ;
struct TYPE_13__ {int name; } ;
typedef TYPE_3__ cfg_option_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int *,TYPE_2__**) ;
 int FUNC_4 (char const**,TYPE_1__*,TYPE_2__*,TYPE_3__*,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

int
FUNC_7(svn_config_t *VAR_0, const char *VAR_1,
                     svn_config_enumerator_t VAR_2, void *VAR_3)
{
  cfg_section_t *VAR_4;
  apr_hash_index_t *VAR_5;
  int VAR_6;
  apr_pool_t *VAR_7;

  FUNC_3(VAR_0, VAR_1, ((void*)0), &VAR_4);
  if (VAR_4 == ((void*)0))
    return 0;

  VAR_7 = FUNC_5(VAR_0->pool);
  VAR_6 = 0;
  for (VAR_5 = FUNC_0(VAR_7, VAR_4->options);
       VAR_5 != ((void*)0);
       VAR_5 = FUNC_1(VAR_5))
    {
      cfg_option_t *VAR_8 = FUNC_2(VAR_5);
      const char *VAR_9;

      ++VAR_6;
      FUNC_4(&VAR_9, VAR_0, VAR_4, VAR_8, ((void*)0));
      if (!VAR_2(VAR_8->name, VAR_9, VAR_3))
        break;
    }

  FUNC_6(VAR_7);
  return VAR_6;
}
