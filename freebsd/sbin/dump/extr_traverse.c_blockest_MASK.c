
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct TYPE_2__ {long fs_bsize; } ;


 long FUNC_0 (union dinode*,int ) ;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long FUNC_1 (long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_2 (long,long) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static long
FUNC_3(union dinode *VAR_8)
{
 long VAR_9, VAR_10;
 if ((FUNC_0(VAR_8, VAR_5) & VAR_0) != 0)
  return (1);
 VAR_9 = FUNC_2(FUNC_1(FUNC_0(VAR_8, VAR_4)), VAR_1);
 VAR_10 = FUNC_2(FUNC_0(VAR_8, VAR_6), VAR_1);
 if (VAR_9 > VAR_10)
  VAR_9 = VAR_10;
 if (FUNC_0(VAR_8, VAR_6) > VAR_7->fs_bsize * VAR_3) {

  VAR_9 += FUNC_2(VAR_10 -
      VAR_3 * VAR_7->fs_bsize / VAR_1, VAR_2);
 }
 return (VAR_9 + 1);
}
