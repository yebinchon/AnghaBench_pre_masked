
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_msg {int dummy; } ;
struct TYPE_14__ {size_t nattr; int** attr; } ;
struct TYPE_13__ {int vpci; int vci; } ;
struct TYPE_12__ {int len; int traffic; } ;
struct TYPE_11__ {int len; int ie; } ;
struct TYPE_10__ {int reason; int cond; int user; int ie; } ;
struct TYPE_9__ {int pu; int na; int cond; } ;
struct TYPE_16__ {int mtype; int* timer; int param; TYPE_6__ attr; int number; int tns; TYPE_5__ vpci; TYPE_4__ traffic; TYPE_3__ ie; TYPE_2__ rej; TYPE_1__ cond; } ;
struct TYPE_15__ {int present; } ;
struct uni_ie_cause {int loc; int cause; TYPE_8__ u; TYPE_7__ h; } ;


 int FUNC_0 (struct uni_msg*,int ,int ) ;
 int FUNC_1 (struct uni_msg*,int) ;
 scalar_t__ FUNC_2 (struct uni_ie_cause) ;
 int FUNC_3 (struct uni_msg*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ,struct uni_msg*,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_6(struct uni_msg *VAR_17, struct uni_ie_cause *VAR_18, struct unicx *VAR_19)
{
 u_int VAR_20;

 FUNC_4(VAR_16, VAR_14, 30);

 if (FUNC_2(*VAR_18)) {
  FUNC_1(VAR_17, 0x00 | VAR_18->loc);
 } else {
  FUNC_1(VAR_17, 0x80 | VAR_18->loc);
 }
 FUNC_1(VAR_17, 0x80 | VAR_18->cause);

 if (VAR_18->h.present & VAR_1)
  FUNC_1(VAR_17, 0x80 | (VAR_18->u.cond.pu << 3) |
      (VAR_18->u.cond.na << 2) | VAR_18->u.cond.cond);

 else if (VAR_18->h.present & VAR_7) {
  FUNC_1(VAR_17, 0x80 | (VAR_18->u.rej.reason << 2) | VAR_18->u.rej.cond);
  if (VAR_18->h.present & VAR_8)
   FUNC_1(VAR_17, VAR_18->u.rej.user);
  else if (VAR_18->h.present & VAR_6)
   FUNC_1(VAR_17, VAR_18->u.rej.ie);

 } else if(VAR_18->h.present & VAR_2)
  FUNC_0(VAR_17, VAR_18->u.ie.ie, VAR_18->u.ie.len);

 else if (VAR_18->h.present & VAR_11)
  FUNC_0(VAR_17, VAR_18->u.traffic.traffic, VAR_18->u.traffic.len);

 else if (VAR_18->h.present & VAR_12) {
  FUNC_1(VAR_17, (VAR_18->u.vpci.vpci >> 8));
  FUNC_1(VAR_17, (VAR_18->u.vpci.vpci >> 0));
  FUNC_1(VAR_17, (VAR_18->u.vpci.vci >> 8));
  FUNC_1(VAR_17, (VAR_18->u.vpci.vci >> 0));

 } else if (VAR_18->h.present & VAR_3)
  FUNC_1(VAR_17, VAR_18->u.mtype);

 else if (VAR_18->h.present & VAR_9) {
  FUNC_1(VAR_17, VAR_18->u.timer[0]);
  FUNC_1(VAR_17, VAR_18->u.timer[1]);
  FUNC_1(VAR_17, VAR_18->u.timer[2]);

 } else if (VAR_18->h.present & VAR_10)
  FUNC_5(VAR_15, VAR_17,
      (union uni_ieall *)&VAR_18->u.tns, VAR_19);

 else if (VAR_18->h.present & VAR_4)
  FUNC_5(VAR_13, VAR_17,
      (union uni_ieall *)&VAR_18->u.number, VAR_19);

 else if (VAR_18->h.present & VAR_0) {
  for (VAR_20 = 0; VAR_20 < VAR_18->u.attr.nattr; VAR_20++) {
   FUNC_1(VAR_17, VAR_18->u.attr.attr[VAR_20][0]);
   if (!VAR_18->u.attr.attr[VAR_20][0]) {
    FUNC_1(VAR_17, VAR_18->u.attr.attr[VAR_20][1]);
    if (!VAR_18->u.attr.attr[VAR_20][1])
     FUNC_1(VAR_17, VAR_18->u.attr.attr[VAR_20][2]);
   }
  }
 } else if (VAR_18->h.present & VAR_5)
  FUNC_1(VAR_17, VAR_18->u.param);

 FUNC_3(VAR_17);

 return (0);
}
