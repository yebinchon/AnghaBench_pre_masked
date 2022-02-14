
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bhnd_nvram_store {int dummy; } ;
struct TYPE_6__ {int value_len; int value; } ;
struct TYPE_7__ {TYPE_1__ str; } ;
struct TYPE_8__ {int type; int path_type; TYPE_2__ path; } ;
typedef TYPE_3__ bhnd_nvstore_name_info ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct bhnd_nvram_store*,TYPE_3__*,void*) ;
 int FUNC_2 (struct bhnd_nvram_store*,int ,int ) ;

int
FUNC_3(struct bhnd_nvram_store *VAR_0,
    bhnd_nvstore_name_info *VAR_1, void *VAR_2)
{
 switch (VAR_1->type) {
 case 128:

  switch (VAR_1->path_type) {
  case 129:


   return (FUNC_2(VAR_0,
       VAR_1->path.str.value, VAR_1->path.str.value_len));

  case 130:


   return (0);
  }

  FUNC_0("unsupported path type %d", VAR_1->path_type);
  break;

 case 131:

  return (FUNC_1(VAR_0, VAR_1, VAR_2));
 }

 FUNC_0("unsupported var type %d", VAR_1->type);
}
