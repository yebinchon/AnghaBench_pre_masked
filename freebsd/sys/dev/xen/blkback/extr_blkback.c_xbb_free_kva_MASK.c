
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct xbb_softc {int kva_free; int * kva; int lock; } ;


 int VAR_0 ;
 intptr_t VAR_1 ;
 int FUNC_0 (int ,intptr_t,intptr_t) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct xbb_softc *VAR_2, uint8_t *VAR_3, int VAR_4)
{
 intptr_t VAR_5;

 FUNC_1(&VAR_2->lock, VAR_0);

 VAR_5 = (intptr_t)(VAR_3 - VAR_2->kva) >> VAR_1;
 FUNC_0(VAR_2->kva_free, VAR_5, VAR_5 + VAR_4 - 1);

}
