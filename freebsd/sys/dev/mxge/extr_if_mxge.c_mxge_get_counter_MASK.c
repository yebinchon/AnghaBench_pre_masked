
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mxge_softc {int num_slices; TYPE_3__* ss; } ;
struct ifnet {int dummy; } ;
typedef int ift_counter ;
struct TYPE_5__ {TYPE_1__* br; } ;
struct TYPE_6__ {TYPE_2__ tx; int omcasts; int obytes; int oerrors; int opackets; int ipackets; } ;
struct TYPE_4__ {int br_drops; } ;
 scalar_t__ FUNC_0 (struct ifnet*,int) ;
 struct mxge_softc* FUNC_1 (struct ifnet*) ;

__attribute__((used)) static uint64_t
FUNC_2(struct ifnet *VAR_0, ift_counter VAR_1)
{
 struct mxge_softc *VAR_2;
 uint64_t VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = 0;

 switch (VAR_1) {
 case 133:
  for (int VAR_4 = 0; VAR_4 < VAR_2->num_slices; VAR_4++)
   VAR_3 += VAR_2->ss[VAR_4].ipackets;
  return (VAR_3);
 case 129:
  for (int VAR_5 = 0; VAR_5 < VAR_2->num_slices; VAR_5++)
   VAR_3 += VAR_2->ss[VAR_5].opackets;
  return (VAR_3);
 case 131:
  for (int VAR_6 = 0; VAR_6 < VAR_2->num_slices; VAR_6++)
   VAR_3 += VAR_2->ss[VAR_6].oerrors;
  return (VAR_3);
 default:
  return (FUNC_0(VAR_0, VAR_1));
 }
}
