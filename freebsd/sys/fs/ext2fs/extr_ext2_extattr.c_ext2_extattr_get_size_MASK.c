
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ext2fs_extattr_entry {int e_name_len; int e_value_size; } ;


 scalar_t__ FUNC_0 (int) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct ext2fs_extattr_entry*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ext2fs_extattr_entry*) ;

__attribute__((used)) static int
FUNC_4(struct ext2fs_extattr_entry *VAR_0,
    struct ext2fs_extattr_entry *VAR_1, int VAR_2,
    int VAR_3, int VAR_4)
{
 struct ext2fs_extattr_entry *VAR_5;
 int VAR_6;

 VAR_6 = VAR_2;
 VAR_6 += sizeof(uint32_t);

 if (((void*)0) == VAR_1) {
  VAR_6 += FUNC_0(VAR_3);
  VAR_6 += FUNC_2(VAR_4);
 }

 if (VAR_0)
  for (VAR_5 = VAR_0; !FUNC_3(VAR_5);
      VAR_5 = FUNC_1(VAR_5)) {
   if (VAR_5 != VAR_1)
    VAR_6 += FUNC_0(VAR_5->e_name_len) +
        FUNC_2(VAR_5->e_value_size);
   else
    VAR_6 += FUNC_0(VAR_5->e_name_len) +
        FUNC_2(VAR_4);
  }

 return (VAR_6);
}
