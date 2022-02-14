
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef int u64q_t ;
typedef int u32q_t ;
struct TYPE_16__ {TYPE_4__* bkts; } ;
struct TYPE_14__ {scalar_t__ linstepdiv; int stepbase; } ;
struct TYPE_13__ {int stepexp; int stepbase; } ;
struct TYPE_12__ {scalar_t__ stepinc; } ;
struct vss_hist_hlpr_info {int scheme; int voi_dtype; TYPE_5__ usr; TYPE_3__ linexp; TYPE_2__ exp; TYPE_1__ lin; } ;
struct TYPE_11__ {int uq64; int sq64; } ;
struct TYPE_20__ {int uq32; int sq32; } ;
struct TYPE_19__ {long slong; unsigned long ulong; } ;
struct TYPE_18__ {scalar_t__ u64; int s64; } ;
struct TYPE_17__ {size_t u32; int s32; } ;
struct voistatdata_numeric {TYPE_10__ q64; TYPE_9__ q32; TYPE_8__ intlong; TYPE_7__ int64; TYPE_6__ int32; } ;
typedef int s64q_t ;
typedef int s32q_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_15__ {struct voistatdata_numeric ub; struct voistatdata_numeric lb; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_3(struct vss_hist_hlpr_info *VAR_2, uint32_t VAR_3,
    struct voistatdata_numeric *VAR_4, struct voistatdata_numeric *VAR_5)
{
 uint64_t VAR_6 = 0;
 int VAR_7 = 0;

 switch (VAR_2->scheme) {
 case 139:
  VAR_6 = VAR_2->lin.stepinc;
  break;
 case 140:
  VAR_6 = FUNC_2(VAR_2->exp.stepbase,
      VAR_2->exp.stepexp + VAR_3);
  break;
 case 138:
  {
  uint64_t VAR_8 = 1;

  switch (VAR_2->voi_dtype) {
  case 137:
   while ((int32_t)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= VAR_4->int32.s32)
    VAR_8++;
   break;
  case 134:
   while ((uint32_t)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= VAR_4->int32.u32)
    VAR_8++;
   break;
  case 136:
   while ((int64_t)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= VAR_4->int64.s64)
    VAR_8++;
   break;
  case 133:
   while ((uint64_t)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= VAR_4->int64.u64)
    VAR_8++;
   break;
  case 135:
   while ((long)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= VAR_4->intlong.slong)
    VAR_8++;
   break;
  case 132:
   while ((unsigned long)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= VAR_4->intlong.ulong)
    VAR_8++;
   break;
  case 131:
   while ((s32q_t)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= FUNC_0(VAR_4->q32.sq32))
   break;
  case 129:
   while ((u32q_t)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= FUNC_0(VAR_4->q32.uq32))
   break;
  case 130:
   while ((s64q_t)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= FUNC_0(VAR_4->q64.sq64))
    VAR_8++;
   break;
  case 128:
   while ((u64q_t)FUNC_2(VAR_2->linexp.stepbase,
       VAR_8) <= FUNC_0(VAR_4->q64.uq64))
    VAR_8++;
   break;
  default:
   break;
  }

  VAR_6 = FUNC_2(VAR_2->linexp.stepbase, VAR_8) /
      VAR_2->linexp.linstepdiv;
  if (VAR_6 == 0)
   VAR_6 = 1;
  break;
  }
 default:
  break;
 }

 if (VAR_2->scheme == VAR_0) {
  *VAR_4 = VAR_2->usr.bkts[VAR_3].lb;
  *VAR_5 = VAR_2->usr.bkts[VAR_3].ub;
 } else if (VAR_6 != 0) {
  switch (VAR_2->voi_dtype) {
  case 137:
   VAR_5->int32.s32 += (int32_t)VAR_6;
   break;
  case 134:
   VAR_5->int32.u32 += (uint32_t)VAR_6;
   break;
  case 136:
   VAR_5->int64.s64 += (int64_t)VAR_6;
   break;
  case 133:
   VAR_5->int64.u64 += (uint64_t)VAR_6;
   break;
  case 135:
   VAR_5->intlong.slong += (long)VAR_6;
   break;
  case 132:
   VAR_5->intlong.ulong += (unsigned long)VAR_6;
   break;
  case 131:
   VAR_7 = FUNC_1(&VAR_5->q32.sq32, VAR_6);
   break;
  case 129:
   VAR_7 = FUNC_1(&VAR_5->q32.uq32, VAR_6);
   break;
  case 130:
   VAR_7 = FUNC_1(&VAR_5->q64.sq64, VAR_6);
   break;
  case 128:
   VAR_7 = FUNC_1(&VAR_5->q64.uq64, VAR_6);
   break;
  default:
   break;
  }
 } else {
  return (VAR_1);
 }

 return (VAR_7);
}
