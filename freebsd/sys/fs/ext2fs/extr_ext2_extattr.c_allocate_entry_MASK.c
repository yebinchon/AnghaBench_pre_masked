
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef int uint16_t ;
struct ext2fs_extattr_entry {int e_name_len; int e_name; void* e_hash; void* e_value_size; scalar_t__ e_value_block; int e_value_offs; int e_name_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char const*) ;
 char* FUNC_1 (int,char const*) ;
 struct ext2fs_extattr_entry* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static struct ext2fs_extattr_entry *
FUNC_5(const char *VAR_2, int VAR_3, uint16_t VAR_4,
    uint32_t VAR_5, uint32_t VAR_6)
{
 const char *VAR_7;
 int VAR_8;
 struct ext2fs_extattr_entry *VAR_9;

 VAR_7 = FUNC_1(VAR_3, VAR_2);
 VAR_8 = FUNC_4(VAR_7);

 VAR_9 = FUNC_2(sizeof(struct ext2fs_extattr_entry) + VAR_8,
     VAR_0, VAR_1);

 VAR_9->e_name_len = VAR_8;
 VAR_9->e_name_index = FUNC_0(VAR_3, VAR_2);
 VAR_9->e_value_offs = VAR_4;
 VAR_9->e_value_block = 0;
 VAR_9->e_value_size = VAR_5;
 VAR_9->e_hash = VAR_6;
 FUNC_3(VAR_9->e_name, VAR_2, VAR_8);

 return (VAR_9);
}
