
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_store {int * root_path; } ;
typedef int bhnd_nvstore_path ;


 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int VAR_0 ;

bhnd_nvstore_path *
FUNC_1(struct bhnd_nvram_store *VAR_1)
{
 FUNC_0(VAR_1, VAR_0);
 return (VAR_1->root_path);
}
