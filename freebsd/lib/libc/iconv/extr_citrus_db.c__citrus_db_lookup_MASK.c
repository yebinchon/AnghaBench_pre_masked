
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct _memstream {int dummy; } ;
struct _citrus_region {int dummy; } ;
struct _citrus_db_locator {size_t dl_offset; size_t dl_hashval; } ;
struct _citrus_db_header_x {int dex_data_size; int dex_data_offset; int dex_key_offset; int dex_key_size; int dex_hash_value; int dex_next_offset; int dhx_entry_offset; int dhx_num_entries; } ;
struct _citrus_db_entry_x {int dex_data_size; int dex_data_offset; int dex_key_offset; int dex_key_size; int dex_hash_value; int dex_next_offset; int dhx_entry_offset; int dhx_num_entries; } ;
struct _citrus_db {size_t (* db_hashfunc ) (struct _citrus_region*) ;struct _citrus_region db_region; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct _memstream*,size_t,int ) ;
 int FUNC_1 (struct _memstream*,struct _citrus_region*) ;
 struct _citrus_db_header_x* FUNC_2 (struct _memstream*,struct _citrus_region*,size_t) ;
 scalar_t__ FUNC_3 (struct _memstream*,size_t,int ) ;
 int FUNC_4 (struct _citrus_region*) ;
 size_t FUNC_5 (struct _citrus_region*) ;
 size_t FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,size_t) ;
 size_t FUNC_8 (struct _citrus_region*) ;

int
FUNC_9(struct _citrus_db *VAR_4, struct _citrus_region *VAR_5,
    struct _citrus_region *VAR_6, struct _citrus_db_locator *VAR_7)
{
 struct _citrus_db_entry_x *VAR_8;
 struct _citrus_db_header_x *VAR_9;
 struct _citrus_region VAR_10;
 struct _memstream VAR_11;
 uint32_t VAR_12, VAR_13;
 size_t VAR_14;

 FUNC_1(&VAR_11, &VAR_4->db_region);

 VAR_9 = FUNC_2(&VAR_11, ((void*)0), sizeof(*VAR_9));
 VAR_13 = FUNC_6(VAR_9->dhx_num_entries);
 if (VAR_13 == 0)
  return (VAR_1);

 if (VAR_7 != ((void*)0) && VAR_7->dl_offset>0) {
  VAR_12 = VAR_7->dl_hashval;
  VAR_14 = VAR_7->dl_offset;
  if (VAR_14 >= FUNC_5(&VAR_4->db_region))
   return (VAR_1);
 } else {
  VAR_12 = VAR_4->db_hashfunc(VAR_5)%VAR_13;
  VAR_14 = FUNC_6(VAR_9->dhx_entry_offset) +
      VAR_12 * VAR_3;
  if (VAR_7)
   VAR_7->dl_hashval = VAR_12;
 }
 do {

  if (FUNC_0(&VAR_11, VAR_14, VAR_2))
   return (VAR_0);

  VAR_8 = FUNC_2(&VAR_11, ((void*)0), VAR_3);
  if (VAR_8 == ((void*)0))
   return (VAR_0);


  VAR_14 = FUNC_6(VAR_8->dex_next_offset);


  if (VAR_7) {
   VAR_7->dl_offset = VAR_14;
   if (VAR_14 == 0)
    VAR_7->dl_offset = FUNC_5(&VAR_4->db_region);
  }


  if (FUNC_6(VAR_8->dex_hash_value) != VAR_12)

   break;

  if (FUNC_6(VAR_8->dex_key_size) == FUNC_5(VAR_5)) {

   if (FUNC_3(&VAR_11, FUNC_6(VAR_8->dex_key_offset),
       VAR_2))
    return (VAR_0);

   if (FUNC_2(&VAR_11, &VAR_10,
       FUNC_5(VAR_5)) == ((void*)0))
    return (VAR_0);

   if (FUNC_7(FUNC_4(&VAR_10), FUNC_4(VAR_5),
       FUNC_5(VAR_5)) == 0) {

    if (FUNC_3(
        &VAR_11, FUNC_6(VAR_8->dex_data_offset),
        VAR_2))
     return (VAR_0);
    if (FUNC_2(
        &VAR_11, VAR_6,
        FUNC_6(VAR_8->dex_data_size)) == ((void*)0))
     return (VAR_0);
    return (0);
   }
  }
 } while (VAR_14 != 0);

 return (VAR_1);
}
