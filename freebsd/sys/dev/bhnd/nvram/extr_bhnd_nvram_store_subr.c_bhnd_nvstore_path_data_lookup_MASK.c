
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bhnd_nvram_store {int data; } ;
struct TYPE_4__ {int * index; int path_str; } ;
typedef TYPE_1__ bhnd_nvstore_path ;


 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 void* FUNC_2 (int ,char const*) ;
 void* FUNC_3 (struct bhnd_nvram_store*,int *,char const*) ;
 int FUNC_4 (struct bhnd_nvram_store*,TYPE_1__*) ;

void *
FUNC_5(struct bhnd_nvram_store *VAR_1,
    bhnd_nvstore_path *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_1, VAR_0);


 if (VAR_2->index == ((void*)0)) {


  FUNC_1(FUNC_4(VAR_1, VAR_2),
      ("missing index for non-root path %s", VAR_2->path_str));


  return (FUNC_2(VAR_1->data, VAR_3));
 }


 return (FUNC_3(VAR_1, VAR_2->index, VAR_3));
}
