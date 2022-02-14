
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ext2fs_extattr_header {int h_hash; } ;
struct ext2fs_extattr_entry {int e_hash; } ;
typedef int hash ;


 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_header*) ;
 int VAR_0 ;
 struct ext2fs_extattr_entry* FUNC_1 (struct ext2fs_extattr_entry*) ;
 int FUNC_2 (struct ext2fs_extattr_entry*) ;
 int FUNC_3 (struct ext2fs_extattr_header*,struct ext2fs_extattr_entry*) ;

__attribute__((used)) static void
FUNC_4(struct ext2fs_extattr_header *VAR_1,
    struct ext2fs_extattr_entry *VAR_2)
{
 struct ext2fs_extattr_entry *VAR_3;
 uint32_t VAR_4 = 0;

 FUNC_3(VAR_1, VAR_2);

 VAR_3 = FUNC_0(VAR_1+1);
 while (!FUNC_2(VAR_3)) {
  if (!VAR_3->e_hash) {

   VAR_4 = 0;
   break;
  }

  VAR_4 = (VAR_4 << VAR_0) ^
      (VAR_4 >> (8*sizeof(VAR_4) - VAR_0)) ^
      VAR_3->e_hash;

  VAR_3 = FUNC_1(VAR_3);
 }

 VAR_1->h_hash = VAR_4;
}
