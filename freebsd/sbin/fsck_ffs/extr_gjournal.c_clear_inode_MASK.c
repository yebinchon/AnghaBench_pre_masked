
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ufs2_daddr_t ;
struct ufs2_dinode {scalar_t__ di_extsize; int di_blocks; scalar_t__* di_extb; scalar_t__* di_ib; scalar_t__* di_db; } ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {scalar_t__ fs_magic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,long) ;
 int FUNC_1 (int ) ;
 long FUNC_2 (TYPE_1__*,struct ufs2_dinode*,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 TYPE_1__* VAR_5 ;
 long FUNC_5 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6(struct ufs2_dinode *VAR_6)
{
 ufs2_daddr_t VAR_7;
 int VAR_8, VAR_9, VAR_10;
 off_t VAR_11;
 long VAR_12;

 VAR_8 = 0;
 if (VAR_5->fs_magic == VAR_0 && VAR_6->di_extsize > 0)
  VAR_8 = FUNC_1(FUNC_3(VAR_5, VAR_6->di_extsize));

 if (VAR_8 > 0) {
  VAR_11 = VAR_6->di_extsize;
  VAR_6->di_blocks -= VAR_8;
  VAR_6->di_extsize = 0;
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   if (VAR_6->di_extb[VAR_9] == 0)
    continue;
   FUNC_0(VAR_6->di_extb[VAR_9], FUNC_5(VAR_5, VAR_11, VAR_9));
  }
 }




 for (VAR_10 = 0; VAR_10 <= 2; VAR_10++) {
  if (VAR_6->di_ib[VAR_10] == 0)
   break;
  FUNC_4(VAR_6->di_ib[VAR_10], VAR_10);
 }

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = VAR_6->di_db[VAR_9];
  if (VAR_7 == 0)
   continue;
  VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_9);
  FUNC_0(VAR_7, VAR_12);
 }
}
