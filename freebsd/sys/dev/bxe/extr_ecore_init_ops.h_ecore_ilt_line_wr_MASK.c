
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_2, int VAR_3,
         ecore_dma_addr_t VAR_4)
{
 uint32_t VAR_5;

 if (FUNC_0(VAR_2))
  VAR_5 = VAR_0 + VAR_3*8;
 else
  VAR_5 = VAR_1 + VAR_3*8;

 FUNC_3(VAR_2, VAR_5, FUNC_1(VAR_4), FUNC_2(VAR_4));
}
