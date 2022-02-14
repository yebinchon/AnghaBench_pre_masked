
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ck_ht_map {unsigned long step; size_t mask; } ;
struct TYPE_3__ {unsigned long value; } ;
typedef TYPE_1__ ck_ht_hash_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static inline size_t
FUNC_0(struct ck_ht_map *VAR_3, size_t VAR_4, ck_ht_hash_t VAR_5, size_t VAR_6)
{
 ck_ht_hash_t VAR_7;
 size_t VAR_8;
 unsigned long VAR_9 = (unsigned long)VAR_6 >> VAR_2;

 VAR_7.value = (VAR_5.value >> VAR_3->step) >> VAR_9;
 VAR_8 = (VAR_7.value & ~VAR_1) << 1
       | (VAR_7.value & VAR_1);

 return (VAR_4 + VAR_9 +
     (VAR_8 | VAR_0)) & VAR_3->mask;
}
