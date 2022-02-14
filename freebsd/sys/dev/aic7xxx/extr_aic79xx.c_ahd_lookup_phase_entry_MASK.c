
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_phase_table_entry {int phase; } ;


 struct ahd_phase_table_entry* VAR_0 ;
 size_t VAR_1 ;

struct ahd_phase_table_entry*
FUNC_0(int VAR_2)
{
 struct ahd_phase_table_entry *VAR_3;
 struct ahd_phase_table_entry *VAR_4;





 VAR_4 = &VAR_0[VAR_1];
 for (VAR_3 = VAR_0; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_2 == VAR_3->phase)
   break;
 }
 return (VAR_3);
}
