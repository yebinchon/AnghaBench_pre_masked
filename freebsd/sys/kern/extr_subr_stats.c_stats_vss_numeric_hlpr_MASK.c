
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef void* u64q_t ;
typedef void* u32q_t ;
struct vss_numeric_hlpr_info {int prec; } ;
struct voistatspec {int stype; int vs_dtype; int * iv; int vsdsz; } ;
struct TYPE_10__ {int uq64; int sq64; } ;
struct TYPE_9__ {int uq32; int sq32; } ;
struct TYPE_8__ {long slong; unsigned long ulong; } ;
struct TYPE_7__ {int u64; int s64; } ;
struct TYPE_6__ {int u32; int s32; } ;
struct voistatdata_numeric {TYPE_5__ q64; TYPE_4__ q32; TYPE_3__ intlong; TYPE_2__ int64; TYPE_1__ int32; } ;
typedef void* s64q_t ;
typedef void* s32q_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef enum vsd_dtype { ____Placeholder_vsd_dtype } vsd_dtype ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 struct voistatdata_numeric** VAR_4 ;
 struct voistatdata_numeric FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ,int ,int ) ;
 int * VAR_5 ;

int
FUNC_4(enum vsd_dtype VAR_6, struct voistatspec *VAR_7,
    struct vss_numeric_hlpr_info *VAR_8)
{
 struct voistatdata_numeric VAR_9;

 switch (VAR_7->stype) {
 case 128:
  VAR_9 = FUNC_2(0);
  break;
 case 129:
  VAR_9 = VAR_4[VAR_2][VAR_6];
  break;
 case 130:
  VAR_9 = VAR_4[VAR_3][VAR_6];
  break;
 default:
  return (VAR_0);
 }

 VAR_7->iv = FUNC_3(((void*)0), 0, VAR_5[VAR_6], 0);
 if (VAR_7->iv == ((void*)0))
  return (VAR_1);

 VAR_7->vs_dtype = VAR_6;
 VAR_7->vsdsz = VAR_5[VAR_6];
 switch (VAR_6) {
 case 140:
  *((int32_t *)VAR_7->iv) = VAR_9.int32.s32;
  break;
 case 137:
  *((uint32_t *)VAR_7->iv) = VAR_9.int32.u32;
  break;
 case 139:
  *((int64_t *)VAR_7->iv) = VAR_9.int64.s64;
  break;
 case 136:
  *((uint64_t *)VAR_7->iv) = VAR_9.int64.u64;
  break;
 case 138:
  *((long *)VAR_7->iv) = VAR_9.intlong.slong;
  break;
 case 135:
  *((unsigned long *)VAR_7->iv) = VAR_9.intlong.ulong;
  break;
 case 134:
  *((s32q_t *)VAR_7->iv) = FUNC_1(VAR_9.q32.sq32,
      FUNC_0(VAR_8->prec));
  break;
 case 132:
  *((u32q_t *)VAR_7->iv) = FUNC_1(VAR_9.q32.uq32,
      FUNC_0(VAR_8->prec));
  break;
 case 133:
  *((s64q_t *)VAR_7->iv) = FUNC_1(VAR_9.q64.sq64,
      FUNC_0(VAR_8->prec));
  break;
 case 131:
  *((u64q_t *)VAR_7->iv) = FUNC_1(VAR_9.q64.uq64,
      FUNC_0(VAR_8->prec));
  break;
 default:
  break;
 }

 return (0);
}
