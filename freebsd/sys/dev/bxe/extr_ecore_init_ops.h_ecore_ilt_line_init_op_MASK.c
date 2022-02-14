
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ecore_ilt {int start_line; TYPE_1__* lines; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;
struct TYPE_2__ {int page_mapping; } ;





 int FUNC_0 (struct bxe_softc*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct bxe_softc *VAR_0,
       struct ecore_ilt *VAR_1, int VAR_2, uint8_t VAR_3)
{
 ecore_dma_addr_t VAR_4;
 int VAR_5 = VAR_1->start_line + VAR_2;


 switch (VAR_3) {
 case 129:

 case 128:
  FUNC_0(VAR_0, VAR_5, VAR_1->lines[VAR_2].page_mapping);
  break;
 case 130:
  VAR_4 = 0;
  FUNC_0(VAR_0, VAR_5, VAR_4);
  break;
 }
}
