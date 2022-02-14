
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_nvram_store {int dummy; } ;
struct TYPE_3__ {int pending; } ;
typedef TYPE_1__ bhnd_nvstore_path ;
typedef int bhnd_nvram_prop ;


 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,char const*) ;

bhnd_nvram_prop *
FUNC_2(struct bhnd_nvram_store *VAR_1,
    bhnd_nvstore_path *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_1, VAR_0);
 return (FUNC_1(VAR_2->pending, VAR_3));
}
