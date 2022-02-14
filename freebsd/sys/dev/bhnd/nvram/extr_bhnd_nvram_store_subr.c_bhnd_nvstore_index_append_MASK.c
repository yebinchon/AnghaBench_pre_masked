
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_nvram_store {int dummy; } ;
struct TYPE_3__ {size_t count; size_t capacity; void** cookiep; } ;
typedef TYPE_1__ bhnd_nvstore_index ;


 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(struct bhnd_nvram_store *VAR_2,
    bhnd_nvstore_index *VAR_3, void *VAR_4)
{
 FUNC_0(VAR_2, VAR_1);

 if (VAR_3->count >= VAR_3->capacity)
  return (VAR_0);

 VAR_3->cookiep[VAR_3->count] = VAR_4;
 VAR_3->count++;
 return (0);
}
