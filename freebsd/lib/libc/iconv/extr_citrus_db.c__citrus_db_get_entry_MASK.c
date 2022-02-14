
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct _region {int dummy; } ;
struct _memstream {int dummy; } ;
struct _citrus_db_header_x {int dex_data_size; int dex_data_offset; int dex_key_size; int dex_key_offset; int dhx_entry_offset; int dhx_num_entries; } ;
struct _citrus_db_entry_x {int dex_data_size; int dex_data_offset; int dex_key_size; int dex_key_offset; int dhx_entry_offset; int dhx_num_entries; } ;
struct _citrus_db {int db_region; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct _memstream*,size_t,int ) ;
 int FUNC_1 (struct _memstream*,int *) ;
 struct _citrus_db_header_x* FUNC_2 (struct _memstream*,struct _region*,int) ;
 scalar_t__ FUNC_3 (struct _memstream*,int,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct _citrus_db *VAR_4, int VAR_5, struct _region *VAR_6,
    struct _region *VAR_7)
{
 struct _citrus_db_entry_x *VAR_8;
 struct _citrus_db_header_x *VAR_9;
 struct _memstream VAR_10;
 uint32_t VAR_11;
 size_t VAR_12;

 FUNC_1(&VAR_10, &VAR_4->db_region);

 VAR_9 = FUNC_2(&VAR_10, ((void*)0), sizeof(*VAR_9));
 VAR_11 = FUNC_4(VAR_9->dhx_num_entries);
 if (VAR_5 < 0 || (uint32_t)VAR_5 >= VAR_11)
  return (VAR_1);


 VAR_12 = FUNC_4(VAR_9->dhx_entry_offset) + VAR_5 * VAR_3;
 if (FUNC_0(&VAR_10, VAR_12, VAR_2))
  return (VAR_0);

 VAR_8 = FUNC_2(&VAR_10, ((void*)0), VAR_3);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if (FUNC_3(&VAR_10, FUNC_4(VAR_8->dex_key_offset), VAR_2))
  return (VAR_0);

 if (FUNC_2(&VAR_10, VAR_6, FUNC_4(VAR_8->dex_key_size))==((void*)0))
  return (VAR_0);

 if (FUNC_3(&VAR_10, FUNC_4(VAR_8->dex_data_offset), VAR_2))
  return (VAR_0);

 if (FUNC_2(&VAR_10, VAR_7, FUNC_4(VAR_8->dex_data_size))==((void*)0))
  return (VAR_0);

 return (0);
}
