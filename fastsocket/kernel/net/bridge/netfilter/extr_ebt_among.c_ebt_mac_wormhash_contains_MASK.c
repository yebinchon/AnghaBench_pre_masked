
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ebt_mac_wormhash_tuple {scalar_t__* cmp; scalar_t__ ip; } ;
struct ebt_mac_wormhash {int* table; struct ebt_mac_wormhash_tuple* pool; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static bool FUNC_1(const struct ebt_mac_wormhash *VAR_0,
          const char *VAR_1, __be32 VAR_2)
{





 const struct ebt_mac_wormhash_tuple *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 uint32_t VAR_7[2] = { 0, 0 };
 int VAR_8 = ((const unsigned char *)VAR_1)[5];

 FUNC_0(((char *) VAR_7) + 2, VAR_1, 6);
 VAR_4 = VAR_0->table[VAR_8];
 VAR_5 = VAR_0->table[VAR_8 + 1];
 if (VAR_2) {
  for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++) {
   VAR_3 = &VAR_0->pool[VAR_6];
   if (VAR_7[1] == VAR_3->cmp[1] && VAR_7[0] == VAR_3->cmp[0])
    if (VAR_3->ip == 0 || VAR_3->ip == VAR_2)
     return 1;
  }
 } else {
  for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++) {
   VAR_3 = &VAR_0->pool[VAR_6];
   if (VAR_7[1] == VAR_3->cmp[1] && VAR_7[0] == VAR_3->cmp[0])
    if (VAR_3->ip == 0)
     return 1;
  }
 }
 return 0;
}
