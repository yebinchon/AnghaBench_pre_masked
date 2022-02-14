
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct regional {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ data; } ;
struct key_entry_key {TYPE_1__ entry; } ;
struct key_entry_data {scalar_t__ ttl; } ;
struct key_cache {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int **,size_t*) ;
 struct key_entry_key* FUNC_2 (struct key_cache*,int *,size_t,int ,int ) ;
 struct key_entry_key* FUNC_3 (struct key_entry_key*,struct regional*) ;
 int FUNC_4 (int *) ;

struct key_entry_key*
FUNC_5(struct key_cache* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, struct regional* VAR_4, time_t VAR_5)
{

 while(1) {
  struct key_entry_key* VAR_6 = FUNC_2(VAR_0, VAR_1,
   VAR_2, VAR_3, 0);
  if(VAR_6) {

   struct key_entry_data* VAR_7 = (struct key_entry_data*)
    VAR_6->entry.data;
   if(VAR_5 <= VAR_7->ttl) {

    struct key_entry_key* VAR_8 =
     FUNC_3(VAR_6, VAR_4);
    FUNC_4(&VAR_6->entry.lock);
    return VAR_8;
   }
   FUNC_4(&VAR_6->entry.lock);
  }

  if(FUNC_0(VAR_1))
   break;
  FUNC_1(&VAR_1, &VAR_2);
 }
 return ((void*)0);
}
