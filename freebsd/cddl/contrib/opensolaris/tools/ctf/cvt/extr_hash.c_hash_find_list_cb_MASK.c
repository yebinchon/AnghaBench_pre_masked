
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_data {int (* hd_fun ) (void*,int ) ;int hd_private; int hd_key; TYPE_1__* hd_hash; } ;
struct TYPE_2__ {scalar_t__ (* h_cmp ) (int ,void*) ;} ;


 scalar_t__ FUNC_0 (int ,void*) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, void *VAR_1)
{
 struct hash_data *VAR_2 = VAR_1;
 int VAR_3;
 int VAR_4 = 0;

 if (VAR_2->hd_hash->h_cmp(VAR_2->hd_key, VAR_0) == 0) {
  if ((VAR_3 = VAR_2->hd_fun(VAR_0, VAR_2->hd_private)) < 0)
   return (VAR_3);
  VAR_4 += VAR_3;
 }

 return (VAR_4);
}
