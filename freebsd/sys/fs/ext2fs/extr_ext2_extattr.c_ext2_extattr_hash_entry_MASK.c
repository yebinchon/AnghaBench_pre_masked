
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ext2fs_extattr_header {int dummy; } ;
struct ext2fs_extattr_entry {char* e_name; int e_name_len; scalar_t__ e_value_block; int e_value_size; int e_value_offs; int e_hash; } ;
typedef int hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct ext2fs_extattr_header *VAR_4,
    struct ext2fs_extattr_entry *VAR_5)
{
 uint32_t VAR_6 = 0;
 char *VAR_7 = VAR_5->e_name;
 int VAR_8;

 for (VAR_8=0; VAR_8 < VAR_5->e_name_len; VAR_8++) {
  VAR_6 = (VAR_6 << VAR_0) ^
      (VAR_6 >> (8*sizeof(VAR_6) - VAR_0)) ^
      (*VAR_7++);
 }

 if (VAR_5->e_value_block == 0 && VAR_5->e_value_size != 0) {
  uint32_t *VAR_9 = (uint32_t *)((char *)VAR_4 + VAR_5->e_value_offs);
  for (VAR_8 = (VAR_5->e_value_size +
      VAR_2) >> VAR_1; VAR_8; VAR_8--) {
   VAR_6 = (VAR_6 << VAR_3) ^
       (VAR_6 >> (8*sizeof(VAR_6) - VAR_3)) ^
       (*VAR_9++);
  }
 }

 VAR_5->e_hash = VAR_6;
}
