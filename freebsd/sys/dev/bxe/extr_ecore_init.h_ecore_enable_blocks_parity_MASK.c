
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct TYPE_3__ {int en_mask; int mask_addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct bxe_softc*,int ,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct bxe_softc *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  uint32_t VAR_4 = FUNC_2(VAR_2, VAR_3);

  if (VAR_4)
   FUNC_1(VAR_2, VAR_1[VAR_3].mask_addr,
    VAR_1[VAR_3].en_mask & VAR_4);
 }


 FUNC_3(VAR_2, VAR_0);
}
