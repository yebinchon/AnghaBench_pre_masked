
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* path_str; int * pending; scalar_t__ num_vars; int * index; } ;
typedef TYPE_1__ bhnd_nvstore_path ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (char const*,size_t) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;

bhnd_nvstore_path *
FUNC_5(const char *VAR_0, size_t VAR_1)
{
 bhnd_nvstore_path *VAR_2;


 VAR_2 = FUNC_1(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_2->index = ((void*)0);
 VAR_2->num_vars = 0;

 VAR_2->pending = FUNC_3();
 if (VAR_2->pending == ((void*)0))
  goto failed;

 VAR_2->path_str = FUNC_2(VAR_0, VAR_1);
 if (VAR_2->path_str == ((void*)0))
  goto failed;

 return (VAR_2);

failed:
 if (VAR_2->pending != ((void*)0))
  FUNC_4(VAR_2->pending);

 if (VAR_2->path_str != ((void*)0))
  FUNC_0(VAR_2->path_str);

 FUNC_0(VAR_2);

 return (((void*)0));
}
