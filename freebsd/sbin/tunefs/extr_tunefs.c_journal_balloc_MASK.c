
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ufs2_daddr_t ;
struct TYPE_9__ {int cs_nbfree; } ;
struct cg {TYPE_1__ cg_cs; } ;
struct TYPE_11__ {scalar_t__ d_ccg; struct cg d_cg; } ;
struct TYPE_10__ {int fs_bsize; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 TYPE_2__ VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static ufs2_daddr_t
FUNC_7(void)
{
 ufs2_daddr_t VAR_3;
 struct cg *VAR_4;
 int VAR_5;
 static int VAR_6 = 1;

 VAR_4 = &VAR_1.d_cg;
 for (;;) {
  VAR_3 = FUNC_1(&VAR_1);
  if (VAR_3 > 0)
   break;




  if (FUNC_3(&VAR_1) < 0) {
   FUNC_5("Failed to write updated cg");
   return (-1);
  }
  while ((VAR_5 = FUNC_2(&VAR_1)) == 1) {




   if (VAR_4->cg_cs.cs_nbfree > 256 * 1024)
    break;
   if (VAR_6 == 0 && VAR_4->cg_cs.cs_nbfree)
    break;
  }
  if (VAR_5)
   continue;




  if (VAR_6) {
   VAR_6 = 0;
   VAR_1.d_ccg = 0;
   FUNC_6("Journal file fragmented.");
   continue;
  }
  FUNC_6("Failed to find sufficient free blocks for the journal");
  return -1;
 }
 if (FUNC_0(&VAR_1, FUNC_4(&VAR_2, VAR_3), VAR_0,
     VAR_2.fs_bsize) <= 0) {
  FUNC_5("Failed to initialize new block");
  return -1;
 }
 return (VAR_3);
}
