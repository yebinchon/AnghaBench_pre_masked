
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_data {void* hd_ret; int hd_key; TYPE_1__* hd_hash; } ;
struct TYPE_2__ {scalar_t__ (* h_cmp ) (int ,void*) ;} ;


 scalar_t__ FUNC_0 (int ,void*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1)
{
 struct hash_data *VAR_2 = VAR_1;
 if (VAR_2->hd_hash->h_cmp(VAR_2->hd_key, VAR_0) == 0) {
  VAR_2->hd_ret = VAR_0;
  return (-1);
 }

 return (0);
}
