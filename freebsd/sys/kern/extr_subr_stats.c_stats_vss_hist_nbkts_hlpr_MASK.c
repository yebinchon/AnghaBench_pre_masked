
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int uq64; int sq64; } ;
struct TYPE_13__ {int uq32; int sq32; } ;
struct TYPE_12__ {int ulong; int slong; } ;
struct TYPE_11__ {int u64; int s64; } ;
struct TYPE_10__ {int u32; int s32; } ;
struct voistatdata_numeric {TYPE_7__ q64; TYPE_6__ q32; TYPE_5__ intlong; TYPE_4__ int64; TYPE_3__ int32; } ;
struct TYPE_9__ {int nbkts; TYPE_1__* bkts; } ;
struct vss_hist_hlpr_info {scalar_t__ scheme; int voi_dtype; int flags; struct voistatdata_numeric ub; TYPE_2__ usr; struct voistatdata_numeric lb; } ;
struct TYPE_8__ {struct voistatdata_numeric lb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct vss_hist_hlpr_info*,int ,struct voistatdata_numeric*,struct voistatdata_numeric*) ;

__attribute__((used)) static uint32_t
FUNC_2(struct vss_hist_hlpr_info *VAR_3)
{
 struct voistatdata_numeric VAR_4, VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 if (VAR_3->scheme == VAR_0) {

  VAR_3->lb = VAR_3->usr.bkts[0].lb;
  VAR_3->ub = VAR_3->usr.bkts[VAR_3->usr.nbkts - 1].lb;
 }

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_5 = VAR_3->lb;

 do {
  VAR_4 = VAR_5;
  if (FUNC_1(VAR_3, VAR_6++, &VAR_4, &VAR_5))
   return (0);

  if (VAR_3->scheme == VAR_0)
   VAR_7 = (VAR_6 == VAR_3->usr.nbkts);
  else {
   switch (VAR_3->voi_dtype) {
   case 137:
    VAR_7 = (VAR_5.int32.s32 > VAR_3->ub.int32.s32);
    break;
   case 134:
    VAR_7 = (VAR_5.int32.u32 > VAR_3->ub.int32.u32);
    break;
   case 136:
    VAR_7 = (VAR_5.int64.s64 > VAR_3->ub.int64.s64);
    break;
   case 133:
    VAR_7 = (VAR_5.int64.u64 > VAR_3->ub.int64.u64);
    break;
   case 135:
    VAR_7 = (VAR_5.intlong.slong >
        VAR_3->ub.intlong.slong);
    break;
   case 132:
    VAR_7 = (VAR_5.intlong.ulong >
        VAR_3->ub.intlong.ulong);
    break;
   case 131:
    VAR_7 = FUNC_0(VAR_5.q32.sq32,
        VAR_3->ub.q32.sq32);
    break;
   case 129:
    VAR_7 = FUNC_0(VAR_5.q32.uq32,
        VAR_3->ub.q32.uq32);
    break;
   case 130:
    VAR_7 = FUNC_0(VAR_5.q64.sq64,
        VAR_3->ub.q64.sq64);
    break;
   case 128:
    VAR_7 = FUNC_0(VAR_5.q64.uq64,
        VAR_3->ub.q64.uq64);
    break;
   default:
    return (0);
   }
  }
 } while (!VAR_7);

 if (VAR_3->flags & VAR_1)
  VAR_6++;
 if (VAR_3->flags & VAR_2)
  VAR_6++;

 return (VAR_6);
}
