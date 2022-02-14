
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int * mac_addr; } ;
struct TYPE_12__ {int promisc; int flow_control; int if_cap_flags; int nifs; int if_id; TYPE_1__ macaddr; scalar_t__ enable_hwlro; } ;
typedef TYPE_2__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;

int
FUNC_8(POCE_SOFTC VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;


 VAR_8 = VAR_5;


 VAR_9 = VAR_4;

 if (FUNC_1(VAR_6)) {

  VAR_9 &= ~VAR_2;
  VAR_8 &= ~VAR_2;
 }

 if (FUNC_0(VAR_6) || FUNC_1(VAR_6))
  VAR_8 |= VAR_1;

        if (VAR_6->enable_hwlro) {
                VAR_8 |= VAR_0;
                VAR_9 |= VAR_0;
        }


 if (FUNC_3(VAR_6))
  VAR_9 |= VAR_3;
 else {
  VAR_9 &= ~VAR_3;
  VAR_8 &= ~VAR_3;
 }

 VAR_7 = FUNC_5(VAR_6,
      VAR_8,
      VAR_9,
      0, &VAR_6->macaddr.mac_addr[0], &VAR_6->if_id);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_6->nifs);

 VAR_6->if_cap_flags = VAR_9;


 VAR_7 = FUNC_7(VAR_6, VAR_6->flow_control);
 if (VAR_7)
  goto error;

 VAR_7 = FUNC_6(VAR_6, VAR_6->promisc);
 if (VAR_7)
  goto error;

 return VAR_7;

error:
 FUNC_4(VAR_6);
 return VAR_7;

}
