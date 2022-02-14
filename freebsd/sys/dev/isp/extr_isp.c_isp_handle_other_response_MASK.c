
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ispstatusreq_t ;
struct TYPE_16__ {int isp_nchan; } ;
typedef TYPE_1__ ispsoftc_t ;
typedef int isphdr_t ;
struct TYPE_17__ {int ridacq_vp_port_lo; int* ridacq_map; int ridacq_vp_index; int ridacq_vp_status; int ridacq_format; int ridacq_vp_port_hi; } ;
typedef TYPE_2__ isp_ridacq_t ;
struct TYPE_18__ {int isp_topo; int isp_portid; void* isp_loopstate; int role; } ;
typedef TYPE_3__ fcparam ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,int ,int,...) ;
 int FUNC_3 (TYPE_1__*,int) ;
 void* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (TYPE_1__*,int *,int*) ;
 int FUNC_8 (void*,int *,int ) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static int
FUNC_10(ispsoftc_t *VAR_11, int VAR_12, isphdr_t *VAR_13, uint32_t *VAR_14)
{
 isp_ridacq_t VAR_15;
 int VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 void *VAR_20;

 switch (VAR_12) {
 case 134:
  FUNC_6(VAR_11, VAR_3, "Marker Response");
  return (1);
 case 130:
  FUNC_5(VAR_11, (isp_ridacq_t *)VAR_13, &VAR_15);
  VAR_19 = (uint32_t)VAR_15.ridacq_vp_port_hi << 16 |
      VAR_15.ridacq_vp_port_lo;
  if (VAR_15.ridacq_format == 0) {
   for (VAR_16 = 0; VAR_16 < VAR_11->isp_nchan; VAR_16++) {
    fcparam *VAR_21 = FUNC_0(VAR_11, VAR_16);
    if (VAR_21->role == VAR_4)
     continue;
    VAR_17 = (VAR_16 == 0) ? 127 : (VAR_16 - 1);
    if (VAR_15.ridacq_map[VAR_17 / 16] & (1 << (VAR_17 % 16)) ||
        VAR_16 == 0) {
     VAR_21->isp_loopstate = VAR_6;
     FUNC_2(VAR_11, VAR_0,
         VAR_16, VAR_1);
    } else {
     VAR_21->isp_loopstate = VAR_7;
     FUNC_2(VAR_11, VAR_2,
         VAR_16);
    }
   }
  } else {
   fcparam *VAR_22 = FUNC_0(VAR_11, VAR_15.ridacq_vp_index);
   if (VAR_15.ridacq_vp_status == VAR_10 ||
       VAR_15.ridacq_vp_status == VAR_9) {
    VAR_22->isp_topo = (VAR_15.ridacq_map[0] >> 9) & 0x7;
    VAR_22->isp_portid = VAR_19;
    VAR_22->isp_loopstate = VAR_5;
    FUNC_2(VAR_11, VAR_0,
        VAR_15.ridacq_vp_index, VAR_1);
   } else {
    VAR_22->isp_loopstate = VAR_7;
    FUNC_2(VAR_11, VAR_2,
        VAR_15.ridacq_vp_index);
   }
  }
  return (1);
 case 136:
 case 128:
 case 129:
 case 135:
  FUNC_1(VAR_11, (uint32_t *)(VAR_13 + 1), VAR_18);
  VAR_20 = FUNC_4(VAR_11, VAR_18);
  if (VAR_20 != ((void*)0)) {
   FUNC_3(VAR_11, VAR_18);
   FUNC_8(VAR_20, VAR_13, VAR_8);
   FUNC_9(VAR_20);
  }
  return (1);
 case 143:
 case 141:
 case 133:
 case 132:
 case 140:
 case 142:
 case 139:
 case 138:
 case 137:
 case 145:
 case 144:




 case 131:
 default:
  return (0);
 }
}
