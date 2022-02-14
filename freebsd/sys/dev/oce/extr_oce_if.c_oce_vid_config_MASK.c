
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct normal_vlan {size_t vtag; } ;
struct TYPE_6__ {int vlans_added; scalar_t__ if_id; scalar_t__* vlan_tag; TYPE_1__* ifp; } ;
struct TYPE_5__ {int if_capenable; } ;
typedef TYPE_2__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,struct normal_vlan*,size_t,int,int) ;

__attribute__((used)) static int
FUNC_1(POCE_SOFTC VAR_3)
{
 struct normal_vlan VAR_4[VAR_1];
 uint16_t VAR_5 = 0, VAR_6;
 int VAR_7 = 0;

 if ((VAR_3->vlans_added <= VAR_1) &&
   (VAR_3->ifp->if_capenable & VAR_0)) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   if (VAR_3->vlan_tag[VAR_6]) {
    VAR_4[VAR_5].vtag = VAR_6;
    VAR_5++;
   }
  }
  if (VAR_5)
   VAR_7 = FUNC_0(VAR_3, (uint8_t) VAR_3->if_id,
      VAR_4, VAR_5, 1, 0);
 } else
  VAR_7 = FUNC_0(VAR_3, (uint8_t) VAR_3->if_id,
       ((void*)0), 0, 1, 1);
 return VAR_7;
}
