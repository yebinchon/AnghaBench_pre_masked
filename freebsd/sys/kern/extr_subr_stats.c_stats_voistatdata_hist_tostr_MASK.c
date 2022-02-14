
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uintmax_t ;
typedef size_t uint16_t ;
struct voistatdata_numeric {int dummy; } ;
struct voistatdata_hist {int dummy; } ;
struct voistatdata {int dummy; } ;
struct sbuf {int dummy; } ;
typedef enum vsd_dtype { ____Placeholder_vsd_dtype } vsd_dtype ;
typedef enum sb_str_fmt { ____Placeholder_sb_str_fmt } sb_str_fmt ;
struct TYPE_2__ {int cnt; int val; int ub; int lb; } ;


 size_t FUNC_0 (int ,size_t) ;
 size_t VAR_0 ;


 struct voistatdata_numeric* FUNC_1 (struct voistatdata_hist const*,int,int ) ;
 struct voistatdata_numeric* FUNC_2 (struct voistatdata_hist const*,int,int ) ;
 struct voistatdata_numeric* FUNC_3 (struct voistatdata_hist const*,int,int ) ;
 size_t FUNC_4 (struct voistatdata_hist const*,int,int ) ;






 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct voistatdata_numeric** VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct sbuf*,char const*) ;
 int FUNC_6 (struct sbuf*,char const*,size_t) ;
 int FUNC_7 (struct sbuf*,char) ;
 int FUNC_8 (struct voistatdata const*,int,int,int,int,struct sbuf*,int) ;

__attribute__((used)) static inline void
FUNC_9(enum vsd_dtype VAR_10,
    const struct voistatdata_hist *VAR_11, enum vsd_dtype VAR_12,
    size_t VAR_13, enum sb_str_fmt VAR_14, struct sbuf *VAR_15, int VAR_16)
{
 const struct voistatdata_numeric *VAR_17, *VAR_18;
 const char *VAR_19;
 int VAR_20;
 uint16_t VAR_21, VAR_22;

 switch (VAR_12) {
 case 133:
  VAR_22 = FUNC_0(VAR_2, VAR_13);
  VAR_20 = 1;
  break;
 case 131:
  VAR_22 = FUNC_0(VAR_4, VAR_13);
  VAR_20 = 1;
  break;
 case 129:
  VAR_22 = FUNC_0(VAR_6, VAR_13);
  VAR_20 = 1;
  break;
 case 132:
  VAR_22 = FUNC_0(VAR_3, VAR_13);
  VAR_20 = 0;
  break;
 case 130:
  VAR_22 = FUNC_0(VAR_5, VAR_13);
  VAR_20 = 0;
  break;
 case 128:
  VAR_22 = FUNC_0(VAR_7, VAR_13);
  VAR_20 = 0;
  break;
 default:
  return;
 }

 switch (VAR_14) {
 case 135:
  VAR_19 = "nbkts=%hu, ";
  break;
 case 134:
 default:
  VAR_19 = "\"nbkts\":%hu,";
  break;
 }
 FUNC_6(VAR_15, VAR_19, VAR_22);

 switch (VAR_14) {
  case 135:
   VAR_19 = (VAR_20 ? "oob=%u" : "oob=%ju");
   break;
  case 134:
  default:
   VAR_19 = (VAR_20 ? "\"oob\":%u,\"bkts\":[" :
       "\"oob\":%ju,\"bkts\":[");
   break;
 }
 FUNC_6(VAR_15, VAR_19, VAR_20 ? FUNC_4(VAR_11,
     VAR_12, VAR_9) : (uintmax_t)FUNC_4(VAR_11,
     VAR_12, VAR_9));

 for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
  switch (VAR_12) {
  case 133:
  case 132:
   VAR_17 = FUNC_1(VAR_11, VAR_12,
       VAR_1[VAR_21].lb);
   if (VAR_21 < VAR_22 - 1)
    VAR_18 = FUNC_1(VAR_11,
        VAR_12, VAR_1[VAR_21 + 1].lb);
   else
    VAR_18 = &VAR_8[VAR_0][VAR_10];
   break;
  case 131:
  case 130:
   VAR_17 = FUNC_2(VAR_11, VAR_12,
       VAR_1[VAR_21].lb);
   VAR_18 = FUNC_2(VAR_11, VAR_12,
       VAR_1[VAR_21].ub);
   break;
  case 129:
  case 128:
   VAR_17 = VAR_18 = FUNC_3(VAR_11,
       VAR_12, VAR_1[VAR_21].val);
   break;
  default:
   break;
  }

  switch (VAR_14) {
  case 135:
   VAR_19 = "\n\t\t\t\t";
   break;
  case 134:
  default:
   VAR_19 = "{";
   break;
  }
  FUNC_5(VAR_15, VAR_19);

  if (VAR_16) {
   switch (VAR_14) {
   case 135:
    VAR_19 = "bkt[%hu].";
    break;
   case 134:
   default:
    VAR_19 = "\"bkt\":%hu,";
    break;
   }
   FUNC_6(VAR_15, VAR_19, VAR_21);
  }

  switch (VAR_14) {
  case 135:
   VAR_19 = "{lb=";
   break;
  case 134:
  default:
   VAR_19 = "\"lb\":";
   break;
  }
  FUNC_5(VAR_15, VAR_19);
  FUNC_8((const struct voistatdata *)VAR_17,
      VAR_10, VAR_10, sizeof(struct voistatdata_numeric),
      VAR_14, VAR_15, VAR_16);

  switch (VAR_14) {
  case 135:
   VAR_19 = ",ub=";
   break;
  case 134:
  default:
   VAR_19 = ",\"ub\":";
   break;
  }
  FUNC_5(VAR_15, VAR_19);
  FUNC_8((const struct voistatdata *)VAR_18,
      VAR_10, VAR_10, sizeof(struct voistatdata_numeric),
      VAR_14, VAR_15, VAR_16);

  switch (VAR_14) {
  case 135:
   VAR_19 = VAR_20 ? ",cnt=%u}" : ",cnt=%ju}";
   break;
  case 134:
  default:
   VAR_19 = VAR_20 ? ",\"cnt\":%u}" : ",\"cnt\":%ju}";
   break;
  }
  FUNC_6(VAR_15, VAR_19, VAR_20 ?
      FUNC_4(VAR_11, VAR_12, VAR_1[VAR_21].cnt) :
      (uintmax_t)FUNC_4(VAR_11, VAR_12,
      VAR_1[VAR_21].cnt));

  if (VAR_14 == 134 && VAR_21 < VAR_22 - 1)
   FUNC_7(VAR_15, ',');
 }
 if (VAR_14 == 134)
  FUNC_5(VAR_15, "]");
}
