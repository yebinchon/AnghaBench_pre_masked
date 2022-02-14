
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct bhnd_nvram_store {int dummy; } ;
struct TYPE_5__ {int path_str; } ;
typedef TYPE_1__ bhnd_nvstore_path ;
struct TYPE_6__ {int alias; } ;
typedef TYPE_2__ bhnd_nvstore_alias ;
typedef int bhnd_nvram_plist ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char**,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,char*) ;
 TYPE_2__* FUNC_5 (struct bhnd_nvram_store*,int ) ;
 int * FUNC_6 (struct bhnd_nvram_store*,int ) ;

__attribute__((used)) static int
FUNC_7(struct bhnd_nvram_store *VAR_3,
    bhnd_nvstore_path *VAR_4, const char *VAR_5, bhnd_nvram_plist *VAR_6,
    u_long *VAR_7)
{
 bhnd_nvstore_alias *VAR_8;
 char *VAR_9;
 int VAR_10;

 *VAR_7 = 0;


 VAR_8 = FUNC_5(VAR_3, VAR_4->path_str);
 if (VAR_8 != ((void*)0)) {
  *VAR_7 = VAR_8->alias;


  FUNC_1(&VAR_9, "devpath%lu", *VAR_7);
  if (VAR_9 == ((void*)0))
   return (VAR_1);


  VAR_10 = FUNC_3(VAR_6, VAR_9, VAR_5);

  FUNC_0(VAR_10 != VAR_0, ("reserved alias %lu:%s in use",
     * VAR_7, VAR_4->path_str));

  FUNC_2(VAR_9);
  return (VAR_10);
 }


 while (1) {

  while (FUNC_6(VAR_3, *VAR_7) != ((void*)0)) {
   if (*VAR_7 == VAR_2)
    return (VAR_1);

   (*VAR_7)++;
  }


  FUNC_1(&VAR_9, "devpath%lu", *VAR_7);
  if (VAR_9 == ((void*)0))
   return (VAR_1);


  if (!FUNC_4(VAR_6, VAR_9))
   break;


  FUNC_2(VAR_9);

  if (*VAR_7 == VAR_2)
   return (VAR_1);

  (*VAR_7)++;
 }


 VAR_10 = FUNC_3(VAR_6, VAR_9, VAR_5);

 FUNC_2(VAR_9);
 return (VAR_10);
}
