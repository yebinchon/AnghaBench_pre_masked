
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct superblock_security_struct {char flags; } ;


 char VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct superblock_security_struct *VAR_2, char VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 char VAR_6 = VAR_2->flags & VAR_0;


 if (VAR_2->flags & VAR_1)
  if (!(VAR_2->flags & VAR_3) ||
      (VAR_4 != VAR_5))
   return 1;




 if (!(VAR_2->flags & VAR_1))
  if (VAR_6 & VAR_3)
   return 1;
 return 0;
}
