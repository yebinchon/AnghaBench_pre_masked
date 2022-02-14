
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ck_ht_hash {int dummy; } ;
struct ck_ht {int seed; int (* h ) (struct ck_ht_hash*,void const*,int ,int ) ;} ;


 int FUNC_0 (struct ck_ht_hash*,void const*,int ,int ) ;

void
FUNC_1(struct ck_ht_hash *VAR_0,
    struct ck_ht *VAR_1,
    const void *VAR_2,
    uint16_t VAR_3)
{

 VAR_1->h(VAR_0, VAR_2, VAR_3, VAR_1->seed);
 return;
}
