
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_db_factory_entry {int de_data; scalar_t__ de_data_free; int de_key; scalar_t__ de_key_free; int df_entries; } ;
struct _citrus_db_factory {int de_data; scalar_t__ de_data_free; int de_key; scalar_t__ de_key_free; int df_entries; } ;


 struct _citrus_db_factory_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct _citrus_db_factory_entry* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct _citrus_db_factory_entry*) ;

void
FUNC_4(struct _citrus_db_factory *VAR_1)
{
 struct _citrus_db_factory_entry *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->df_entries)) != ((void*)0)) {
  FUNC_1(&VAR_1->df_entries, VAR_0);
  if (VAR_2->de_key_free)
   FUNC_3(FUNC_2(&VAR_2->de_key));
  if (VAR_2->de_data_free)
   FUNC_3(FUNC_2(&VAR_2->de_data));
  FUNC_3(VAR_2);
 }
 FUNC_3(VAR_1);
}
