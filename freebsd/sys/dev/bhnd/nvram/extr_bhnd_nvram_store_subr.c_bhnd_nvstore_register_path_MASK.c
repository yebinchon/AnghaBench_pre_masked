
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct bhnd_nvram_store {scalar_t__ num_paths; int * paths; } ;
typedef int bhnd_nvstore_path_list ;
struct TYPE_4__ {int path_str; } ;
typedef TYPE_1__ bhnd_nvstore_path ;


 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (struct bhnd_nvram_store*,char const*,size_t) ;
 TYPE_1__* FUNC_3 (char const*,size_t) ;
 size_t FUNC_4 (int ,int ) ;
 size_t FUNC_5 (int *) ;
 int VAR_4 ;

int
FUNC_6(struct bhnd_nvram_store *VAR_5, const char *VAR_6,
    size_t VAR_7)
{
 bhnd_nvstore_path_list *VAR_8;
 bhnd_nvstore_path *VAR_9;
 uint32_t VAR_10;

 FUNC_0(VAR_5, VAR_2);


 if (FUNC_2(VAR_5, VAR_6, VAR_7) != ((void*)0))
  return (0);


 if (VAR_5->num_paths == VAR_3)
  return (VAR_0);


 VAR_9 = FUNC_3(VAR_6, VAR_7);
 if (VAR_9 == ((void*)0))
  return (VAR_0);


 VAR_10 = FUNC_4(VAR_9->path_str, VAR_1);
 VAR_8 = &VAR_5->paths[VAR_10 % FUNC_5(VAR_5->paths)];
 FUNC_1(VAR_8, VAR_9, VAR_4);


 VAR_5->num_paths++;

 return (0);
}
