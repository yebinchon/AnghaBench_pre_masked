
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ext2fs_extattr_entry {int e_name_len; } ;


 int FUNC_0 (int ) ;
 struct ext2fs_extattr_entry* FUNC_1 (struct ext2fs_extattr_entry*) ;
 int FUNC_2 (struct ext2fs_extattr_entry*) ;
 int FUNC_3 (char*,struct ext2fs_extattr_entry*,struct ext2fs_extattr_entry*,char*) ;
 int FUNC_4 (struct ext2fs_extattr_entry*,char*,int) ;

__attribute__((used)) static void
FUNC_5(char *VAR_0,
    struct ext2fs_extattr_entry *VAR_1,
    struct ext2fs_extattr_entry *VAR_2, char *VAR_3)
{
 char *VAR_4;
 struct ext2fs_extattr_entry *VAR_5;


 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);


 VAR_5 = VAR_1;
 while (!FUNC_2(VAR_5))
  VAR_5 = FUNC_1(VAR_5);

 VAR_4 = (char*)VAR_5 + sizeof(uint32_t);

 FUNC_4(VAR_2, (char *)VAR_2 + FUNC_0(VAR_2->e_name_len),
     VAR_4 - ((char *)VAR_2 + FUNC_0(VAR_2->e_name_len)));
}
