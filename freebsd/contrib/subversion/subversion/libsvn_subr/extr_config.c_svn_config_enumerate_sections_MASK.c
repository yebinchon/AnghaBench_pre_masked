
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sections; int x_pool; } ;
typedef TYPE_1__ svn_config_t ;
typedef int (* svn_config_section_enumerator_t ) (int ,void*) ;
struct TYPE_5__ {int name; } ;
typedef TYPE_2__ cfg_section_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,void**) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(svn_config_t *VAR_0,
                              svn_config_section_enumerator_t VAR_1,
                              void *VAR_2)
{
  apr_hash_index_t *VAR_3;
  int VAR_4 = 0;
  apr_pool_t *VAR_5 = FUNC_3(VAR_0->x_pool);

  for (VAR_3 = FUNC_0(VAR_5, VAR_0->sections);
       VAR_3 != ((void*)0);
       VAR_3 = FUNC_1(VAR_3))
    {
      void *VAR_6;
      cfg_section_t *VAR_7;

      FUNC_2(VAR_3, ((void*)0), ((void*)0), &VAR_6);
      VAR_7 = VAR_6;
      ++VAR_4;
      if (!VAR_1(VAR_7->name, VAR_2))
        break;
    }

  FUNC_4(VAR_5);
  return VAR_4;
}
