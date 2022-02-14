
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ manufacturer; scalar_t__ product; scalar_t__* cis1_info; } ;
struct pccard_softc {TYPE_1__ card; } ;
struct pccard_cis_quirk {scalar_t__ manufacturer; scalar_t__ product; int * cis1_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1(struct pccard_softc *VAR_2, struct pccard_cis_quirk *VAR_3)
{
 if ((VAR_2->card.manufacturer == VAR_3->manufacturer) &&
  (VAR_2->card.product == VAR_3->product) &&
  (((VAR_2->card.manufacturer != VAR_1) &&
    (VAR_2->card.product != VAR_0)) ||
   ((VAR_2->card.manufacturer == VAR_1) &&
    (VAR_2->card.product == VAR_0) &&
    VAR_2->card.cis1_info[0] &&
    (FUNC_0(VAR_2->card.cis1_info[0], VAR_3->cis1_info[0]) == 0) &&
    VAR_2->card.cis1_info[1] &&
    (FUNC_0(VAR_2->card.cis1_info[1], VAR_3->cis1_info[1]) == 0))))
  return (1);
 return (0);
}
