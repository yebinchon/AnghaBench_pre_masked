
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ action; scalar_t__ copyfrom_path; } ;
typedef TYPE_1__ change_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (char const*,int *) ;

__attribute__((used)) static const char *
FUNC_2(apr_hash_t *VAR_1,
                    const char *VAR_2,
                    apr_pool_t *VAR_3)
{
  while (*VAR_2)
    {
      const change_node_t *VAR_4 = FUNC_0(VAR_1, VAR_2);

      if (VAR_4)
        {
          if (VAR_4->copyfrom_path)
            return VAR_2;
          if (VAR_4->action != VAR_0)
            return ((void*)0);
        }
      VAR_2 = FUNC_1(VAR_2, VAR_3);
    }

  return ((void*)0);
}
