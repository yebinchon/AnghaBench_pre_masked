
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent {scalar_t__ e_blk; scalar_t__ e_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ext4_extent*) ;

__attribute__((used)) static int inline
FUNC_1(struct ext4_extent *VAR_1,
    struct ext4_extent *VAR_2)
{

 if (VAR_1->e_blk + VAR_1->e_len != VAR_2->e_blk)
  return (0);

 if (VAR_1->e_len + VAR_2->e_len > VAR_0)
  return (0);

 if (FUNC_0(VAR_1) + VAR_1->e_len ==
     FUNC_0(VAR_2))
  return (1);

 return (0);
}
