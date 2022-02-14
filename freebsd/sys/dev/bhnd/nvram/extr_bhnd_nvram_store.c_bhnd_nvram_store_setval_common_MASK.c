
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bhnd_nvram_store {int data_caps; } ;
typedef int bhnd_nvstore_path ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ bhnd_nvstore_name_info ;
typedef int bhnd_nvram_val ;


 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (struct bhnd_nvram_store*,int *,int ,int *) ;
 int * FUNC_3 (struct bhnd_nvram_store*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct bhnd_nvram_store *VAR_2, const char *VAR_3,
    bhnd_nvram_val *VAR_4)
{
 bhnd_nvstore_path *VAR_5;
 bhnd_nvstore_name_info VAR_6;
 int VAR_7;

 FUNC_0(VAR_2, VAR_1);


 VAR_7 = FUNC_1(VAR_3, VAR_0,
     VAR_2->data_caps, &VAR_6);
 if (VAR_7)
  return (VAR_7);


 if ((VAR_5 = FUNC_3(VAR_2, &VAR_6)) == ((void*)0))
  return (VAR_7);


 return (FUNC_2(VAR_2, VAR_5, VAR_6.name, VAR_4));
}
