
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_22__ {int uq64; int sq64; } ;
struct TYPE_20__ {int uq32; int sq32; } ;
struct TYPE_18__ {int ulong; int slong; } ;
struct TYPE_16__ {int u64; int s64; } ;
struct TYPE_14__ {int u32; int s32; } ;
struct voistatdata {TYPE_7__ q64; TYPE_5__ q32; TYPE_3__ intlong; TYPE_1__ int64; TYPE_11__ int32; } ;
struct voistat {int stype; int data_off; } ;
struct voi {int dtype; scalar_t__ id; int flags; int voistatmaxid; int stats_off; } ;
struct statsblobv1 {scalar_t__ abi; struct voi* vois; } ;
typedef size_t int32_t ;
typedef enum vsd_dtype { ____Placeholder_vsd_dtype } vsd_dtype ;
struct TYPE_24__ {int u32; int s32; } ;
struct TYPE_23__ {int uq64; int sq64; } ;
struct TYPE_21__ {int uq32; int sq32; } ;
struct TYPE_19__ {int ulong; int slong; } ;
struct TYPE_17__ {int u64; int s64; } ;
struct TYPE_13__ {TYPE_8__ q64; TYPE_6__ q32; TYPE_4__ intlong; TYPE_2__ int64; TYPE_9__ int32; } ;
struct TYPE_15__ {TYPE_10__ prev; } ;


 void* FUNC_0 (struct statsblobv1*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 size_t FUNC_2 (struct statsblobv1*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_12__* FUNC_5 (int ,void*) ;
 int VAR_4 ;
 int FUNC_6 (struct voistat*) ;





 int FUNC_7 (int,struct voistatdata*,struct voistat*,void*) ;
 int FUNC_8 (int,struct voistatdata*,struct voistat*,void*) ;
 int FUNC_9 (int,struct voistatdata*,struct voistat*,void*) ;
 int FUNC_10 (int,struct voistatdata*,struct voistat*,void*) ;
 int FUNC_11 (int,struct voistatdata*,struct voistat*,void*) ;
 int VAR_5 ;

int
FUNC_12(struct statsblobv1 *VAR_6, int32_t VAR_7,
    enum vsd_dtype VAR_8, struct voistatdata *VAR_9, uint32_t VAR_10)
{
 struct voi *VAR_11;
 struct voistat *VAR_12;
 void *VAR_13, *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_15 = 0;

 if (VAR_6 == ((void*)0) || VAR_6->abi != VAR_2 || VAR_7 >= FUNC_2(VAR_6) ||
     VAR_8 == 0 || VAR_8 >= VAR_4 || VAR_9 == ((void*)0))
  return (VAR_0);
 VAR_11 = &VAR_6->vois[VAR_7];
 if (VAR_8 != VAR_11->dtype || VAR_11->id < 0 ||
     ((VAR_10 & VAR_1) && !(VAR_11->flags & VAR_3)))
  return (VAR_0);

 VAR_12 = FUNC_0(VAR_6, VAR_11->stats_off);
 if (VAR_11->flags & VAR_3)
  VAR_13 = FUNC_0(VAR_6, VAR_12->data_off);
 else
  VAR_13 = ((void*)0);

 if (VAR_10 & VAR_1) {
  switch (VAR_8) {
  case 142:
   VAR_9->int32.s32 +=
       FUNC_5(VAR_5, VAR_13)->prev.int32.s32;
   break;
  case 139:
   VAR_9->int32.u32 +=
       FUNC_5(VAR_5, VAR_13)->prev.int32.u32;
   break;
  case 141:
   VAR_9->int64.s64 +=
       FUNC_5(VAR_5, VAR_13)->prev.int64.s64;
   break;
  case 138:
   VAR_9->int64.u64 +=
       FUNC_5(VAR_5, VAR_13)->prev.int64.u64;
   break;
  case 140:
   VAR_9->intlong.slong +=
       FUNC_5(VAR_5, VAR_13)->prev.intlong.slong;
   break;
  case 137:
   VAR_9->intlong.ulong +=
       FUNC_5(VAR_5, VAR_13)->prev.intlong.ulong;
   break;
  case 136:
   VAR_15 = FUNC_3(&VAR_9->q32.sq32,
       FUNC_5(VAR_5, VAR_13)->prev.q32.sq32);
   break;
  case 134:
   VAR_15 = FUNC_3(&VAR_9->q32.uq32,
       FUNC_5(VAR_5, VAR_13)->prev.q32.uq32);
   break;
  case 135:
   VAR_15 = FUNC_3(&VAR_9->q64.sq64,
       FUNC_5(VAR_5, VAR_13)->prev.q64.sq64);
   break;
  case 133:
   VAR_15 = FUNC_3(&VAR_9->q64.uq64,
       FUNC_5(VAR_5, VAR_13)->prev.q64.uq64);
   break;
  default:
   FUNC_1(0, ("Unknown VOI data type %d", VAR_8));
   break;
  }
 }

 if (VAR_15)
  return (VAR_15);

 for (VAR_16 = VAR_11->voistatmaxid; VAR_16 > 0; VAR_16--) {
  VAR_12 = &((struct voistat *)FUNC_0(VAR_6, VAR_11->stats_off))[VAR_16];
  if (VAR_12->stype < 0)
   continue;

  VAR_14 = FUNC_0(VAR_6, VAR_12->data_off);

  switch (VAR_12->stype) {
  case 131:
   VAR_17 = FUNC_8(VAR_8, VAR_9,
       VAR_12, VAR_14);
   break;
  case 130:
   VAR_17 = FUNC_9(VAR_8, VAR_9,
       VAR_12, VAR_14);
   break;
  case 129:
   VAR_17 = FUNC_10(VAR_8, VAR_9,
       VAR_12, VAR_14);
   break;
  case 132:
   VAR_17 = FUNC_7(VAR_8, VAR_9,
       VAR_12, VAR_14);
   break;
  case 128:
   VAR_17 = FUNC_11(VAR_8, VAR_9,
       VAR_12, VAR_14);
   break;
  default:
   FUNC_1(0, ("Unknown VOI stat type %d", VAR_12->stype));
   break;
  }

  if (VAR_17) {
   VAR_15 = VAR_17;
   FUNC_6(VAR_12);
  }
 }

 if (VAR_13) {
  switch (VAR_8) {
  case 142:
   FUNC_5(VAR_5, VAR_13)->prev.int32.s32 =
       VAR_9->int32.s32;
   break;
  case 139:
   FUNC_5(VAR_5, VAR_13)->prev.int32.u32 =
       VAR_9->int32.u32;
   break;
  case 141:
   FUNC_5(VAR_5, VAR_13)->prev.int64.s64 =
       VAR_9->int64.s64;
   break;
  case 138:
   FUNC_5(VAR_5, VAR_13)->prev.int64.u64 =
       VAR_9->int64.u64;
   break;
  case 140:
   FUNC_5(VAR_5, VAR_13)->prev.intlong.slong =
       VAR_9->intlong.slong;
   break;
  case 137:
   FUNC_5(VAR_5, VAR_13)->prev.intlong.ulong =
       VAR_9->intlong.ulong;
   break;
  case 136:
   VAR_15 = FUNC_4(
       &FUNC_5(VAR_5, VAR_13)->prev.q32.sq32,
       VAR_9->q32.sq32);
   break;
  case 134:
   VAR_15 = FUNC_4(
       &FUNC_5(VAR_5, VAR_13)->prev.q32.uq32,
       VAR_9->q32.uq32);
   break;
  case 135:
   VAR_15 = FUNC_4(
       &FUNC_5(VAR_5, VAR_13)->prev.q64.sq64,
       VAR_9->q64.sq64);
   break;
  case 133:
   VAR_15 = FUNC_4(
       &FUNC_5(VAR_5, VAR_13)->prev.q64.uq64,
       VAR_9->q64.uq64);
   break;
  default:
   FUNC_1(0, ("Unknown VOI data type %d", VAR_8));
   break;
  }
 }

 return (VAR_15);
}
