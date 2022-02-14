
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ufs2_daddr_t ;
typedef scalar_t__ ufs1_daddr_t ;
struct suj_cg {int sc_dirty; struct cg* sc_cgp; } ;
struct cg {int dummy; } ;
struct TYPE_6__ {int fs_frag; } ;


 int * FUNC_0 (struct cg*) ;
 struct suj_cg* FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (char*,int,int ,int) ;
 int FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(ufs2_daddr_t VAR_4, int VAR_5, int VAR_6)
{
 ufs1_daddr_t VAR_7, VAR_8;
 struct suj_cg *VAR_9;
 struct cg *VAR_10;
 int VAR_11, VAR_12;
 uint8_t *VAR_13;

 if (VAR_0)
  FUNC_7("Freeing %d frags at blk %jd mask 0x%x\n",
      VAR_6, VAR_4, VAR_5);
 VAR_12 = FUNC_2(VAR_3, VAR_4);
 VAR_9 = FUNC_1(VAR_12);
 VAR_10 = VAR_9->sc_cgp;
 VAR_8 = FUNC_3(VAR_3, VAR_4);
 VAR_13 = FUNC_0(VAR_10);






 if (VAR_6 == VAR_3->fs_frag && VAR_5 == 0) {
  VAR_7 = FUNC_5(VAR_3, VAR_8);
  FUNC_4(VAR_3, VAR_13, VAR_7);
  VAR_1++;
 } else {



  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
   if ((VAR_5 & (1 << VAR_11)) == 0 && FUNC_6(VAR_13, VAR_8 +VAR_11)) {
    VAR_2++;
    FUNC_8(VAR_13, VAR_8 + VAR_11);
   }
 }
 VAR_9->sc_dirty = 1;
}
