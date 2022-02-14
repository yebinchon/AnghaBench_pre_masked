
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ decode_buf; } ;
struct TYPE_5__ {TYPE_1__ mac_stats; } ;
struct sfxge_softc {TYPE_2__ port; } ;
struct ifnet {struct sfxge_softc* if_softc; } ;
typedef int ift_counter ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct ifnet*,int) ;
 int FUNC_3 (struct sfxge_softc*) ;
 scalar_t__ FUNC_4 (struct sfxge_softc*) ;

uint64_t
FUNC_5(struct ifnet *VAR_12, ift_counter VAR_13)
{
 struct sfxge_softc *VAR_14 = VAR_12->if_softc;
 uint64_t *VAR_15;
 uint64_t VAR_16;

 FUNC_0(&VAR_14->port);


 (void)FUNC_3(VAR_14);

 VAR_15 = (uint64_t *)VAR_14->port.mac_stats.decode_buf;

 switch (VAR_13) {
 case 135:
  VAR_16 = VAR_15[VAR_2];
  break;
 case 137:
  VAR_16 = VAR_15[VAR_0];
  break;
 case 129:
  VAR_16 = VAR_15[VAR_10];
  break;
 case 131:
  VAR_16 = VAR_15[VAR_4];
  break;
 case 139:
  VAR_16 = VAR_15[VAR_11] +
        VAR_15[VAR_8] +
        VAR_15[VAR_5] +
        VAR_15[VAR_6];
  break;
 case 138:
  VAR_16 = VAR_15[VAR_1];
  break;
 case 132:
  VAR_16 = VAR_15[VAR_9];
  break;
 case 130:
  VAR_16 = VAR_15[VAR_7] +
        VAR_15[VAR_3];
  break;
 case 128:
  FUNC_1(&VAR_14->port);
  return (FUNC_4(VAR_14));
 case 136:

 case 134:

 case 133:

 default:
  FUNC_1(&VAR_14->port);
  return (FUNC_2(VAR_12, VAR_13));
 }

 FUNC_1(&VAR_14->port);

 return (VAR_16);
}
