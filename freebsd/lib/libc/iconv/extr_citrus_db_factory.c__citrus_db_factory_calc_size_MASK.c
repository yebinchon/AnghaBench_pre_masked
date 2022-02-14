
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_db_factory {int df_num_entries; int df_total_key_size; scalar_t__ df_total_data_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;

size_t
FUNC_1(struct _citrus_db_factory *VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 VAR_3 += FUNC_0(VAR_0 * VAR_2->df_num_entries);
 VAR_3 += FUNC_0(VAR_2->df_total_key_size);
 VAR_3 += VAR_2->df_total_data_size;

 return (VAR_3);
}
