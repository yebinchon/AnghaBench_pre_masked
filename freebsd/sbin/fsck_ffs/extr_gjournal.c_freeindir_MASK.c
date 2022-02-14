
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ufs2_daddr_t ;
struct TYPE_7__ {int d_error; } ;
struct TYPE_6__ {scalar_t__ fs_bsize; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,void*,size_t) ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (int,char*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(ufs2_daddr_t VAR_3, int VAR_4)
{
 char VAR_5[VAR_0];
 ufs2_daddr_t *VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_1, FUNC_4(VAR_2, VAR_3), (void *)&VAR_5, (size_t)VAR_2->fs_bsize) == -1)
  FUNC_3(1, "bread: %s", VAR_1->d_error);
 VAR_6 = (ufs2_daddr_t *)&VAR_5;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if (VAR_6[VAR_7] == 0)
   break;
  if (VAR_4 == 0)
   FUNC_1(VAR_6[VAR_7], VAR_2->fs_bsize);
  else
   FUNC_5(VAR_6[VAR_7], VAR_4 - 1);
 }
 FUNC_1(VAR_3, VAR_2->fs_bsize);
}
