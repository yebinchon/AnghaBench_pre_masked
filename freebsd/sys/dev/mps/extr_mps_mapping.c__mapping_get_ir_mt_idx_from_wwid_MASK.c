
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct mps_softc {struct dev_mapping_table* mapping_table; } ;
struct dev_mapping_table {scalar_t__ physical_id; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mps_softc*,size_t*,size_t*) ;

__attribute__((used)) static u32
FUNC_1(struct mps_softc *VAR_1, u64 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 struct dev_mapping_table *VAR_6;

 FUNC_0(VAR_1, &VAR_3, &VAR_4);
 VAR_6 = &VAR_1->mapping_table[VAR_3];
 for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5++, VAR_6++)
  if (VAR_6->physical_id == VAR_2)
   return VAR_5;

 return VAR_0;
}
