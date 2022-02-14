
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zap_leaf_t ;
typedef scalar_t__ uint16_t ;
struct zap_leaf_entry {scalar_t__ le_next; scalar_t__ le_cd; int le_hash; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (int *,int ) ;
 struct zap_leaf_entry* FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static uint16_t *
FUNC_2(zap_leaf_t *VAR_1, uint16_t VAR_2)
{
 struct zap_leaf_entry *VAR_3 = FUNC_1(VAR_1, VAR_2);
 struct zap_leaf_entry *VAR_4;
 uint16_t *VAR_5;






 for (VAR_5 = FUNC_0(VAR_1, VAR_3->le_hash);
     *VAR_5 != VAR_0; VAR_5 = &VAR_4->le_next) {
  VAR_4 = FUNC_1(VAR_1, *VAR_5);
  if (VAR_4->le_cd > VAR_3->le_cd)
   break;
 }

 VAR_3->le_next = *VAR_5;
 *VAR_5 = VAR_2;
 return (VAR_5);
}
