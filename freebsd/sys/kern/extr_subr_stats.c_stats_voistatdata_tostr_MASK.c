
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u64q_t ;
typedef int u32q_t ;
struct TYPE_13__ {int uq64; int sq64; } ;
struct TYPE_12__ {int uq32; int sq32; } ;
struct TYPE_11__ {int ulong; int slong; } ;
struct TYPE_10__ {int u64; int s64; } ;
struct TYPE_9__ {int u32; int s32; } ;
struct voistatdata {TYPE_5__ q64; TYPE_4__ q32; TYPE_3__ intlong; TYPE_2__ int64; TYPE_1__ int32; } ;
struct sbuf {int dummy; } ;
typedef int s64q_t ;
typedef int s32q_t ;
typedef int qstr ;
typedef int intmax_t ;
typedef enum vsd_dtype { ____Placeholder_vsd_dtype } vsd_dtype ;
typedef enum sb_str_fmt { ____Placeholder_sb_str_fmt } sb_str_fmt ;
struct TYPE_14__ {int prev; } ;


 TYPE_6__* FUNC_0 (int ,struct voistatdata const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int,char*,int) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct sbuf*,char const*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*,char*,int ) ;
 int FUNC_6 (int,TYPE_6__*,int,size_t,int,struct sbuf*,int) ;
 int FUNC_7 (int,TYPE_6__*,int,size_t,int,struct sbuf*,int) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_8(const struct voistatdata *VAR_6, enum vsd_dtype VAR_7,
    enum vsd_dtype VAR_8, size_t VAR_9, enum sb_str_fmt VAR_10,
    struct sbuf *VAR_11, int VAR_12)
{
 const char *VAR_13;

 if (VAR_6 == ((void*)0) || VAR_11 == ((void*)0) || VAR_7 >= VAR_2 ||
     VAR_8 >= VAR_2 || VAR_10 >= VAR_1)
  return (VAR_0);

 switch (VAR_8) {
 case 128:
  switch (VAR_10) {
  case 148:
   VAR_13 = "prev=";
   break;
  case 147:
  default:
   VAR_13 = "\"prev\":";
   break;
  }
  FUNC_3(VAR_11, VAR_13);



  FUNC_8(
      (const struct voistatdata *)&FUNC_0(VAR_5, VAR_6)->prev,
      VAR_7, VAR_7, VAR_9, VAR_10, VAR_11, VAR_12);
  break;
 case 140:
  FUNC_5(VAR_11, "%d", VAR_6->int32.s32);
  break;
 case 137:
  FUNC_5(VAR_11, "%u", VAR_6->int32.u32);
  break;
 case 139:
  FUNC_5(VAR_11, "%jd", (intmax_t)VAR_6->int64.s64);
  break;
 case 136:
  FUNC_5(VAR_11, "%ju", (uintmax_t)VAR_6->int64.u64);
  break;
 case 138:
  FUNC_5(VAR_11, "%ld", VAR_6->intlong.slong);
  break;
 case 135:
  FUNC_5(VAR_11, "%lu", VAR_6->intlong.ulong);
  break;
 case 134:
  {
  char VAR_14[FUNC_1(VAR_6->q32.sq32, 10)];
  FUNC_2((s32q_t)VAR_6->q32.sq32, -1, 10, VAR_14, sizeof(VAR_14));
  FUNC_3(VAR_11, VAR_14);
  }
  break;
 case 132:
  {
  char VAR_15[FUNC_1(VAR_6->q32.uq32, 10)];
  FUNC_2((u32q_t)VAR_6->q32.uq32, -1, 10, VAR_15, sizeof(VAR_15));
  FUNC_3(VAR_11, VAR_15);
  }
  break;
 case 133:
  {
  char VAR_16[FUNC_1(VAR_6->q64.sq64, 10)];
  FUNC_2((s64q_t)VAR_6->q64.sq64, -1, 10, VAR_16, sizeof(VAR_16));
  FUNC_3(VAR_11, VAR_16);
  }
  break;
 case 131:
  {
  char VAR_17[FUNC_1(VAR_6->q64.uq64, 10)];
  FUNC_2((u64q_t)VAR_6->q64.uq64, -1, 10, VAR_17, sizeof(VAR_17));
  FUNC_3(VAR_11, VAR_17);
  }
  break;
 case 146:
 case 144:
 case 142:
 case 145:
 case 143:
 case 141:
  FUNC_6(VAR_7, FUNC_0(VAR_3, VAR_6),
      VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
  break;
 case 130:
 case 129:
  FUNC_7(VAR_7,
      FUNC_0(VAR_4, VAR_6), VAR_8, VAR_9, VAR_10, VAR_11,
      VAR_12);
  break;
 default:
  break;
 }

 return (FUNC_4(VAR_11));
}
