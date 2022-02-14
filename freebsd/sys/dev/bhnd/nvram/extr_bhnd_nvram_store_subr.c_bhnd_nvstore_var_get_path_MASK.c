
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bhnd_nvram_store {int dummy; } ;
typedef int bhnd_nvstore_path ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int value_len; int value; } ;
struct TYPE_8__ {TYPE_2__ alias; TYPE_1__ str; } ;
struct TYPE_9__ {int path_type; TYPE_3__ path; } ;
typedef TYPE_4__ bhnd_nvstore_name_info ;




 int FUNC_0 (char*,int) ;
 int * FUNC_1 (struct bhnd_nvram_store*,int ,int ) ;
 int * FUNC_2 (struct bhnd_nvram_store*,int ) ;

bhnd_nvstore_path *
FUNC_3(struct bhnd_nvram_store *VAR_0,
    bhnd_nvstore_name_info *VAR_1)
{
 switch (VAR_1->path_type) {
 case 128:
  return (FUNC_1(VAR_0, VAR_1->path.str.value,
      VAR_1->path.str.value_len));
 case 129:
  return (FUNC_2(VAR_0,
      VAR_1->path.alias.value));
 }

 FUNC_0("unsupported path type %d", VAR_1->path_type);
}
