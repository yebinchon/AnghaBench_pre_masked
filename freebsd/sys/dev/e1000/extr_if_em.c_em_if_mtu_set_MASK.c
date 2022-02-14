
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int type; int max_frame_size; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct adapter {TYPE_2__ hw; } ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_7__ {int isc_max_frame_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 struct adapter* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(if_ctx_t VAR_6, uint32_t VAR_7)
{
 int VAR_8;
 struct adapter *VAR_9 = FUNC_1(VAR_6);
 if_softc_ctx_t VAR_10 = FUNC_2(VAR_6);

  FUNC_0("ioctl rcv'd: SIOCSIFMTU (Set Interface MTU)");

 switch (VAR_9->hw.mac.type) {
 case 139:
 case 138:
 case 133:
 case 135:
 case 132:
 case 130:
 case 129:
 case 131:
 case 137:
 case 136:
 case 141:

  VAR_8 = 9234;
  break;
 case 128:
  VAR_8 = 4096;
  break;
 case 140:
 case 134:

  VAR_8 = VAR_3;
  break;
 default:
  if (VAR_9->hw.mac.type >= VAR_5)
   VAR_8 = 9234;
  else
   VAR_8 = VAR_4;
 }
 if (VAR_7 > VAR_8 - VAR_2 - VAR_1) {
  return (VAR_0);
 }

 VAR_10->isc_max_frame_size = VAR_9->hw.mac.max_frame_size =
     VAR_7 + VAR_2 + VAR_1;
 return (0);
}
