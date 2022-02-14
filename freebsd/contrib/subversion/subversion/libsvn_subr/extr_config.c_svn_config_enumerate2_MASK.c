
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_config_t ;
typedef int (* svn_config_enumerator2_t ) (int ,char const*,void*,int *) ;
struct TYPE_7__ {int options; } ;
typedef TYPE_1__ cfg_section_t ;
struct TYPE_8__ {int name; } ;
typedef TYPE_2__ cfg_option_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int *,TYPE_1__**) ;
 int FUNC_4 (char const**,int *,TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(svn_config_t *VAR_0, const char *VAR_1,
                      svn_config_enumerator2_t VAR_2, void *VAR_3,
                      apr_pool_t *VAR_4)
{
  cfg_section_t *VAR_5;
  apr_hash_index_t *VAR_6;
  apr_pool_t *VAR_7;
  int VAR_8;

  FUNC_3(VAR_0, VAR_1, ((void*)0), &VAR_5);
  if (VAR_5 == ((void*)0))
    return 0;

  VAR_7 = FUNC_6(VAR_4);
  VAR_8 = 0;
  for (VAR_6 = FUNC_0(VAR_4, VAR_5->options);
       VAR_6 != ((void*)0);
       VAR_6 = FUNC_1(VAR_6))
    {
      cfg_option_t *VAR_9 = FUNC_2(VAR_6);
      const char *VAR_10;

      ++VAR_8;
      FUNC_4(&VAR_10, VAR_0, VAR_5, VAR_9, ((void*)0));
      FUNC_5(VAR_7);
      if (!VAR_2(VAR_9->name, VAR_10, VAR_3, VAR_7))
        break;
    }
  FUNC_7(VAR_7);

  return VAR_8;
}
