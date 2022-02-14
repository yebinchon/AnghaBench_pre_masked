
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvstore_path {struct bhnd_nvstore_path* path_str; int pending; int * index; } ;


 int FUNC_0 (struct bhnd_nvstore_path*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct bhnd_nvstore_path *VAR_0)
{

 if (VAR_0->index != ((void*)0))
  FUNC_2(VAR_0->index);

 FUNC_1(VAR_0->pending);
 FUNC_0(VAR_0->path_str);
 FUNC_0(VAR_0);
}
