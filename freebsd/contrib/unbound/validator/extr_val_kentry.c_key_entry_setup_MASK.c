
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct regional {int dummy; } ;
struct TYPE_2__ {struct key_entry_data* data; struct key_entry_key* key; } ;
struct key_entry_key {size_t namelen; TYPE_1__ entry; int key_class; int name; } ;
struct key_entry_data {int dummy; } ;


 int FUNC_0 (struct key_entry_key*,int ,int) ;
 void* FUNC_1 (struct regional*,int) ;
 int FUNC_2 (struct regional*,int *,size_t) ;

__attribute__((used)) static int
FUNC_3(struct regional* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, uint16_t VAR_3,
 struct key_entry_key** VAR_4, struct key_entry_data** VAR_5)
{
 *VAR_4 = FUNC_1(VAR_0, sizeof(**VAR_4));
 if(!*VAR_4)
  return 0;
 FUNC_0(*VAR_4, 0, sizeof(**VAR_4));
 (*VAR_4)->entry.key = *VAR_4;
 (*VAR_4)->name = FUNC_2(VAR_0, VAR_1, VAR_2);
 if(!(*VAR_4)->name)
  return 0;
 (*VAR_4)->namelen = VAR_2;
 (*VAR_4)->key_class = VAR_3;
 *VAR_5 = FUNC_1(VAR_0, sizeof(**VAR_5));
 if(!*VAR_5)
  return 0;
 (*VAR_4)->entry.data = *VAR_5;
 return 1;
}
