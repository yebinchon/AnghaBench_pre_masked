
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_softc {int jme_flags; int jme_stats; } ;
struct jme_hw_stats {int dummy; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct jme_softc*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct jme_softc *VAR_2)
{

 FUNC_2(VAR_2);

 if ((VAR_2->jme_flags & VAR_0) == 0)
  return;


 FUNC_1(VAR_2, VAR_1, 0xFFFFFFFF);

 FUNC_1(VAR_2, VAR_1, 0);
 FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_2->jme_stats, sizeof(struct jme_hw_stats));
}
