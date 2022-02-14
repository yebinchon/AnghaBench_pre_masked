
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sections; } ;
typedef TYPE_1__ svn_config_t ;
typedef int (* svn_config_section_enumerator2_t ) (int ,void*,int *) ;
struct TYPE_6__ {int name; } ;
typedef TYPE_2__ cfg_section_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(svn_config_t *VAR_0,
                               svn_config_section_enumerator2_t VAR_1,
                               void *VAR_2, apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;
  apr_pool_t *VAR_5;
  int VAR_6 = 0;

  VAR_5 = FUNC_4(VAR_3);
  for (VAR_4 = FUNC_0(VAR_3, VAR_0->sections);
       VAR_4 != ((void*)0);
       VAR_4 = FUNC_1(VAR_4))
    {
      cfg_section_t *VAR_7 = FUNC_2(VAR_4);

      ++VAR_6;
      FUNC_3(VAR_5);
      if (!VAR_1(VAR_7->name, VAR_2, VAR_5))
        break;
    }
  FUNC_5(VAR_5);

  return VAR_6;
}
