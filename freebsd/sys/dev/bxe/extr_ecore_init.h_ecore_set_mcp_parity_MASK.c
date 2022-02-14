
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct TYPE_3__ {int addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (struct bxe_softc*,int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline void FUNC_3(struct bxe_softc *VAR_2, uint8_t VAR_3)
{
 int VAR_4;
 uint32_t VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_5 = FUNC_1(VAR_2, VAR_1[VAR_4].addr);

  if (VAR_3)
   VAR_5 |= VAR_0;
  else
   VAR_5 &= ~VAR_0;

  FUNC_2(VAR_2, VAR_1[VAR_4].addr, VAR_5);
 }
}
