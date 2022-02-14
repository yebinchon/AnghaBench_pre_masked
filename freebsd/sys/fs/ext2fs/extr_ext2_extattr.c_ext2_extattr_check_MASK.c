
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2fs_extattr_entry {int dummy; } ;


 int VAR_0 ;
 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 int FUNC_1 (struct ext2fs_extattr_entry*) ;

__attribute__((used)) static int
FUNC_2(struct ext2fs_extattr_entry *VAR_1, char *VAR_2)
{
 struct ext2fs_extattr_entry *VAR_3;

 while (!FUNC_1(VAR_1)) {
  VAR_3 = FUNC_0(VAR_1);
  if ((char *)VAR_3 >= VAR_2)
   return (VAR_0);

  VAR_1 = VAR_3;
 }

 return (0);
}
