
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct suj_cg {int sc_dirty; struct cg* sc_cgp; } ;
struct TYPE_4__ {int cs_ndir; int cs_nifree; } ;
struct cg {int cg_irotor; TYPE_1__ cg_cs; } ;
typedef int ino_t ;
struct TYPE_5__ {int fs_ipg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct cg*) ;
 struct suj_cg* FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(ino_t VAR_5, int VAR_6)
{
 struct suj_cg *VAR_7;
 uint8_t *VAR_8;
 struct cg *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_4, VAR_5);
 VAR_5 = VAR_5 % VAR_4->fs_ipg;
 VAR_7 = FUNC_1(VAR_10);
 VAR_9 = VAR_7->sc_cgp;
 VAR_8 = FUNC_0(VAR_9);




 if (FUNC_4(VAR_8, VAR_5))
  return (0);
 VAR_3++;
 FUNC_2(VAR_8, VAR_5);
 if (VAR_5 < VAR_9->cg_irotor)
  VAR_9->cg_irotor = VAR_5;
 VAR_9->cg_cs.cs_nifree++;
 if ((VAR_6 & VAR_1) == VAR_0) {
  VAR_2++;
  VAR_9->cg_cs.cs_ndir--;
 }
 VAR_7->sc_dirty = 1;

 return (1);
}
