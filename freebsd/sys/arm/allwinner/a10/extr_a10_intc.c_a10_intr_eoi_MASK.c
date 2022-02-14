
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct a10_aintc_softc {int mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct a10_aintc_softc*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __inline void
FUNC_4(struct a10_aintc_softc *VAR_1, u_int VAR_2)
{

 if (VAR_2 != VAR_0)
  return;
 FUNC_2(&VAR_1->mtx);
 FUNC_1(VAR_1, FUNC_0(0),
     (1 << VAR_0));
 FUNC_3(&VAR_1->mtx);
}
