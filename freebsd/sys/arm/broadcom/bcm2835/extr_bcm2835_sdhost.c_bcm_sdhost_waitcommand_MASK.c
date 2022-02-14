
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_sdhost_softc {int mtx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcm_sdhost_softc*,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline int
FUNC_3(struct bcm_sdhost_softc *VAR_3)
{
 int VAR_4 = 1000;

 FUNC_2(&VAR_3->mtx, VAR_2);

 while ((FUNC_1(VAR_3, VAR_1) & VAR_0) && --VAR_4 > 0) {
  FUNC_0(100);
 }

 return ((VAR_4 > 0) ? 0 : 1);
}
