
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ufs2_daddr_t ;
struct TYPE_7__ {long cs_nffree; int cs_nbfree; } ;
struct cg {TYPE_2__ cg_cs; } ;
struct TYPE_6__ {struct cg* b_cg; } ;
struct bufarea {TYPE_1__ b_un; } ;
struct TYPE_8__ {long fs_frag; } ;


 int FUNC_0 (struct cg*) ;
 int FUNC_1 (struct bufarea*) ;
 struct bufarea* FUNC_2 (int) ;
 int FUNC_3 (int,struct bufarea*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int VAR_0 ;
 long VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

ufs2_daddr_t
FUNC_9(long VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct bufarea *VAR_9;
 struct cg *VAR_10;

 if (VAR_3 <= 0 || VAR_3 > VAR_2.fs_frag)
  return (0);
 for (VAR_4 = 0; VAR_4 < VAR_0 - VAR_2.fs_frag; VAR_4 += VAR_2.fs_frag) {
  for (VAR_5 = 0; VAR_5 <= VAR_2.fs_frag - VAR_3; VAR_5++) {
   if (FUNC_8(VAR_4 + VAR_5))
    continue;
   for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++)
    if (FUNC_8(VAR_4 + VAR_5 + VAR_6))
     break;
   if (VAR_6 < VAR_3) {
    VAR_5 += VAR_6;
    continue;
   }
   VAR_7 = FUNC_5(&VAR_2, VAR_4 + VAR_5);
   VAR_9 = FUNC_2(VAR_7);
   VAR_10 = VAR_9->b_un.b_cg;
   if (!FUNC_3(VAR_7, VAR_9))
    return (0);
   VAR_8 = FUNC_6(&VAR_2, VAR_4 + VAR_5);
   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    FUNC_7(VAR_4 + VAR_5 + VAR_6);
    FUNC_4(FUNC_0(VAR_10), VAR_8 + VAR_6);
   }
   VAR_1 += VAR_3;
   if (VAR_3 == VAR_2.fs_frag)
    VAR_10->cg_cs.cs_nbfree--;
   else
    VAR_10->cg_cs.cs_nffree -= VAR_3;
   FUNC_1(VAR_9);
   return (VAR_4 + VAR_5);
  }
 }
 return (0);
}
