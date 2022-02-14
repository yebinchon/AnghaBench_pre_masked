
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct p2p_data {int wild_card_hash; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct p2p_data *VAR_1,
         const u8 *VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 const u8 *VAR_5 = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (FUNC_0(VAR_5, VAR_1->wild_card_hash, VAR_0) == 0)
   return 1;
  VAR_5 += VAR_0;
 }

 return 0;
}
