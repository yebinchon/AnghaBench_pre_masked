
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ext2fs_extattr_entry {int e_value_offs; scalar_t__ e_value_size; } ;


 struct ext2fs_extattr_entry* FUNC_0 (struct ext2fs_extattr_entry*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ext2fs_extattr_entry*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static uint16_t
FUNC_4(char *VAR_0,
    struct ext2fs_extattr_entry *VAR_1,
    struct ext2fs_extattr_entry *VAR_2, char *VAR_3)
{
 uint16_t VAR_4;
 struct ext2fs_extattr_entry *VAR_5;

 VAR_4 = VAR_3 - VAR_0;
 VAR_5 = VAR_1;
 while (!FUNC_2(VAR_5)) {
  if (VAR_4 > VAR_5->e_value_offs && VAR_5->e_value_offs > 0)
   VAR_4 = VAR_5->e_value_offs;

  VAR_5 = FUNC_0(VAR_5);
 }

 if (VAR_2->e_value_size == 0)
  return (VAR_4);

 FUNC_3(VAR_0 + VAR_4 + FUNC_1(VAR_2->e_value_size),
     VAR_0 + VAR_4, VAR_2->e_value_offs - VAR_4);


 VAR_5 = VAR_1;
 while (!FUNC_2(VAR_5))
 {
  if (VAR_5->e_value_offs > 0 &&
      VAR_5->e_value_offs < VAR_2->e_value_offs)
   VAR_5->e_value_offs +=
       FUNC_1(VAR_2->e_value_size);

  VAR_5 = FUNC_0(VAR_5);
 }

 VAR_4 += FUNC_1(VAR_2->e_value_size);

 return (VAR_4);
}
