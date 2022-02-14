
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uio {scalar_t__ uio_resid; } ;
struct ext2fs_extattr_entry {int e_value_offs; scalar_t__ e_value_size; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,struct ext2fs_extattr_entry*,struct ext2fs_extattr_entry*,char*) ;
 int FUNC_2 (char*,scalar_t__,struct uio*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0,
    struct ext2fs_extattr_entry *VAR_1,
    struct ext2fs_extattr_entry *VAR_2,
    char *VAR_3, struct uio *VAR_4)
{
 uint16_t VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_2->e_value_size = VAR_4->uio_resid;
 if (VAR_2->e_value_size)
  VAR_2->e_value_offs = VAR_5 -
      FUNC_0(VAR_4->uio_resid);
 else
  VAR_2->e_value_offs = 0;

 FUNC_2(VAR_0 + VAR_2->e_value_offs, VAR_2->e_value_size, VAR_4);
}
