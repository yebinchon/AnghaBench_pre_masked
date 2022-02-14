
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct bhnd_nvram_store {int dummy; } ;
typedef int bhnd_nvstore_path ;
struct TYPE_3__ {int * path; } ;
typedef TYPE_1__ bhnd_nvstore_alias ;


 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct bhnd_nvram_store*,int ) ;

bhnd_nvstore_path *
FUNC_2(struct bhnd_nvram_store *VAR_1, u_long VAR_2)
{
 bhnd_nvstore_alias *VAR_3;

 FUNC_0(VAR_1, VAR_0);


 if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) == ((void*)0))
  return (((void*)0));

 return (VAR_3->path);
}
