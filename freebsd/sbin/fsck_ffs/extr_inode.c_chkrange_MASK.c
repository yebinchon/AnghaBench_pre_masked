
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ufs2_daddr_t ;
struct TYPE_7__ {int fs_frag; scalar_t__ fs_fpg; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,long,long,...) ;
 TYPE_1__ VAR_2 ;

int
FUNC_6(ufs2_daddr_t VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 <= 0 || VAR_3 <= 0 || VAR_3 > VAR_1 ||
     VAR_4 - 1 > VAR_1 - VAR_3)
  return (1);
 if (VAR_4 > VAR_2.fs_frag ||
     FUNC_4(&VAR_2, VAR_3) + VAR_4 > VAR_2.fs_frag) {
  if (VAR_0)
   FUNC_5("bad size: blk %ld, offset %i, size %d\n",
       (long)VAR_3, (int)FUNC_4(&VAR_2, VAR_3), VAR_4);
  return (1);
 }
 VAR_5 = FUNC_3(&VAR_2, VAR_3);
 if (VAR_3 < FUNC_1(&VAR_2, VAR_5)) {
  if ((VAR_3 + VAR_4) > FUNC_2(&VAR_2, VAR_5)) {
   if (VAR_0) {
    FUNC_5("blk %ld < cgdmin %ld;",
        (long)VAR_3, (long)FUNC_1(&VAR_2, VAR_5));
    FUNC_5(" blk + cnt %ld > cgsbase %ld\n",
        (long)(VAR_3 + VAR_4),
        (long)FUNC_2(&VAR_2, VAR_5));
   }
   return (1);
  }
 } else {
  if ((VAR_3 + VAR_4) > FUNC_0(&VAR_2, VAR_5+1)) {
   if (VAR_0) {
    FUNC_5("blk %ld >= cgdmin %ld;",
        (long)VAR_3, (long)FUNC_1(&VAR_2, VAR_5));
    FUNC_5(" blk + cnt %ld > sblock.fs_fpg %ld\n",
        (long)(VAR_3 + VAR_4), (long)VAR_2.fs_fpg);
   }
   return (1);
  }
 }
 return (0);
}
