
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_db_factory {void* df_hashfunc_closure; int df_hashfunc; int df_entries; scalar_t__ df_total_data_size; scalar_t__ df_total_key_size; scalar_t__ df_num_entries; } ;
typedef int _citrus_db_hash_func_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct _citrus_db_factory* FUNC_1 (int) ;

int
FUNC_2(struct _citrus_db_factory **VAR_1,
    _citrus_db_hash_func_t VAR_2, void *VAR_3)
{
 struct _citrus_db_factory *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_4->df_num_entries = 0;
 VAR_4->df_total_key_size = VAR_4->df_total_data_size = 0;
 FUNC_0(&VAR_4->df_entries);
 VAR_4->df_hashfunc = VAR_2;
 VAR_4->df_hashfunc_closure = VAR_3;

 *VAR_1 = VAR_4;

 return (0);
}
