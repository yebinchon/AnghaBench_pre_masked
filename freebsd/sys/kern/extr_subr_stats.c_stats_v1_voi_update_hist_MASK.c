
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


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_14__ {int uq64; int sq64; } ;
struct TYPE_24__ {int uq32; int sq32; } ;
struct TYPE_22__ {int ulong; int slong; } ;
struct TYPE_20__ {int u64; int s64; } ;
struct TYPE_18__ {int u32; int s32; } ;
struct voistatdata_numeric {TYPE_11__ q64; TYPE_9__ q32; TYPE_7__ intlong; TYPE_5__ int64; TYPE_3__ int32; } ;
struct voistatdata_hist {int dummy; } ;
struct TYPE_13__ {int uq64; int sq64; } ;
struct TYPE_23__ {int uq32; int sq32; } ;
struct TYPE_21__ {int ulong; int slong; } ;
struct TYPE_19__ {int u64; int s64; } ;
struct TYPE_17__ {int u32; int s32; } ;
struct voistatdata {TYPE_10__ q64; TYPE_8__ q32; TYPE_6__ intlong; TYPE_4__ int64; TYPE_2__ int32; } ;
struct voistat {int dtype; int flags; int dsz; } ;
typedef enum vsd_dtype { ____Placeholder_vsd_dtype } vsd_dtype ;
struct TYPE_16__ {int cnt; struct voistatdata_numeric val; struct voistatdata_numeric ub; struct voistatdata_numeric lb; } ;
struct TYPE_15__ {int oob; TYPE_1__* bkts; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_12__* FUNC_4 (int ,struct voistatdata_hist*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline int
FUNC_5(enum vsd_dtype VAR_8, struct voistatdata *VAR_9,
    struct voistat *VAR_10, struct voistatdata_hist *VAR_11)
{
 struct voistatdata_numeric *VAR_12, *VAR_13;
 uint64_t *VAR_14, *VAR_15;
 uint32_t *VAR_16, *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_18 = 0;

 switch (VAR_10->dtype) {
 case 143:
  VAR_19 = FUNC_0(VAR_2, VAR_10->dsz);
  VAR_21 = 1;
  VAR_22 = VAR_23 = 0;
  VAR_16 = &FUNC_4(VAR_2, VAR_11)->oob;
  break;
 case 141:
  VAR_19 = FUNC_0(VAR_4, VAR_10->dsz);
  VAR_21 = VAR_22 = 1;
  VAR_23 = 0;
  VAR_16 = &FUNC_4(VAR_4, VAR_11)->oob;
  break;
 case 139:
  VAR_19 = FUNC_0(VAR_6, VAR_10->dsz);
  VAR_21 = VAR_23 = 1;
  VAR_22 = 0;
  VAR_16 = &FUNC_4(VAR_6, VAR_11)->oob;
  break;
 case 142:
  VAR_19 = FUNC_0(VAR_3, VAR_10->dsz);
  VAR_21 = VAR_22 = VAR_23 = 0;
  VAR_14 = &FUNC_4(VAR_3, VAR_11)->oob;
  break;
 case 140:
  VAR_19 = FUNC_0(VAR_5, VAR_10->dsz);
  VAR_21 = VAR_23 = 0;
  VAR_22 = 1;
  VAR_14 = &FUNC_4(VAR_5, VAR_11)->oob;
  break;
 case 138:
  VAR_19 = FUNC_0(VAR_7, VAR_10->dsz);
  VAR_21 = VAR_22 = 0;
  VAR_23 = 1;
  VAR_14 = &FUNC_4(VAR_7, VAR_11)->oob;
  break;
 default:
  return (VAR_0);
 }
 VAR_19--;


 for (VAR_20 = 0; VAR_19 >= 0 && !VAR_20; VAR_19--) {
  switch (VAR_10->dtype) {
  case 143:
   VAR_12 = &FUNC_4(VAR_2, VAR_11)->bkts[VAR_19].lb;
   VAR_17 = &FUNC_4(VAR_2, VAR_11)->bkts[VAR_19].cnt;
   break;
  case 141:
   VAR_12 = &FUNC_4(VAR_4, VAR_11)->bkts[VAR_19].lb;
   VAR_13 = &FUNC_4(VAR_4, VAR_11)->bkts[VAR_19].ub;
   VAR_17 = &FUNC_4(VAR_4, VAR_11)->bkts[VAR_19].cnt;
   break;
  case 139:
   VAR_12 = &FUNC_4(VAR_6, VAR_11)->bkts[VAR_19].val;
   VAR_17 = &FUNC_4(VAR_6, VAR_11)->bkts[VAR_19].cnt;
   break;
  case 142:
   VAR_12 = &FUNC_4(VAR_3, VAR_11)->bkts[VAR_19].lb;
   VAR_15 = &FUNC_4(VAR_3, VAR_11)->bkts[VAR_19].cnt;
   break;
  case 140:
   VAR_12 = &FUNC_4(VAR_5, VAR_11)->bkts[VAR_19].lb;
   VAR_13 = &FUNC_4(VAR_5, VAR_11)->bkts[VAR_19].ub;
   VAR_15 = &FUNC_4(VAR_5, VAR_11)->bkts[VAR_19].cnt;
   break;
  case 138:
   VAR_12 = &FUNC_4(VAR_7, VAR_11)->bkts[VAR_19].val;
   VAR_15 = &FUNC_4(VAR_7, VAR_11)->bkts[VAR_19].cnt;
   break;
  default:
   return (VAR_0);
  }

  switch (VAR_8) {
  case 137:
   if (VAR_9->int32.s32 >= VAR_12->int32.s32) {
    if ((VAR_23 && VAR_9->int32.s32 ==
        VAR_12->int32.s32) ||
        (!VAR_23 && (!VAR_22 ||
        VAR_9->int32.s32 < VAR_13->int32.s32)))
     VAR_20 = 1;
   }
   break;
  case 134:
   if (VAR_9->int32.u32 >= VAR_12->int32.u32) {
    if ((VAR_23 && VAR_9->int32.u32 ==
        VAR_12->int32.u32) ||
        (!VAR_23 && (!VAR_22 ||
        VAR_9->int32.u32 < VAR_13->int32.u32)))
     VAR_20 = 1;
   }
   break;
  case 136:
   if (VAR_9->int64.s64 >= VAR_12->int64.s64)
    if ((VAR_23 && VAR_9->int64.s64 ==
        VAR_12->int64.s64) ||
        (!VAR_23 && (!VAR_22 ||
        VAR_9->int64.s64 < VAR_13->int64.s64)))
     VAR_20 = 1;
   break;
  case 133:
   if (VAR_9->int64.u64 >= VAR_12->int64.u64)
    if ((VAR_23 && VAR_9->int64.u64 ==
        VAR_12->int64.u64) ||
        (!VAR_23 && (!VAR_22 ||
        VAR_9->int64.u64 < VAR_13->int64.u64)))
     VAR_20 = 1;
   break;
  case 135:
   if (VAR_9->intlong.slong >= VAR_12->intlong.slong)
    if ((VAR_23 && VAR_9->intlong.slong ==
        VAR_12->intlong.slong) ||
        (!VAR_23 && (!VAR_22 ||
        VAR_9->intlong.slong <
        VAR_13->intlong.slong)))
     VAR_20 = 1;
   break;
  case 132:
   if (VAR_9->intlong.ulong >= VAR_12->intlong.ulong)
    if ((VAR_23 && VAR_9->intlong.ulong ==
        VAR_12->intlong.ulong) ||
        (!VAR_23 && (!VAR_22 ||
        VAR_9->intlong.ulong <
        VAR_13->intlong.ulong)))
     VAR_20 = 1;
   break;
  case 131:
   if (FUNC_2(VAR_9->q32.sq32, VAR_12->q32.sq32))
    if ((VAR_23 && FUNC_1(VAR_9->q32.sq32,
        VAR_12->q32.sq32)) ||
        (!VAR_23 && (!VAR_22 ||
        FUNC_3(VAR_9->q32.sq32,
        VAR_13->q32.sq32))))
     VAR_20 = 1;
   break;
  case 129:
   if (FUNC_2(VAR_9->q32.uq32, VAR_12->q32.uq32))
    if ((VAR_23 && FUNC_1(VAR_9->q32.uq32,
        VAR_12->q32.uq32)) ||
        (!VAR_23 && (!VAR_22 ||
        FUNC_3(VAR_9->q32.uq32,
        VAR_13->q32.uq32))))
     VAR_20 = 1;
   break;
  case 130:
   if (FUNC_2(VAR_9->q64.sq64, VAR_12->q64.sq64))
    if ((VAR_23 && FUNC_1(VAR_9->q64.sq64,
        VAR_12->q64.sq64)) ||
        (!VAR_23 && (!VAR_22 ||
        FUNC_3(VAR_9->q64.sq64,
        VAR_13->q64.sq64))))
     VAR_20 = 1;
   break;
  case 128:
   if (FUNC_2(VAR_9->q64.uq64, VAR_12->q64.uq64))
    if ((VAR_23 && FUNC_1(VAR_9->q64.uq64,
        VAR_12->q64.uq64)) ||
        (!VAR_23 && (!VAR_22 ||
        FUNC_3(VAR_9->q64.uq64,
        VAR_13->q64.uq64))))
     VAR_20 = 1;
   break;
  default:
   break;
  }
 }

 if (VAR_20) {
  if (VAR_21)
   *VAR_17 += 1;
  else
   *VAR_15 += 1;
 } else {
  if (VAR_21)
   *VAR_16 += 1;
  else
   *VAR_14 += 1;
 }

 VAR_10->flags |= VAR_1;
 return (VAR_18);
}
