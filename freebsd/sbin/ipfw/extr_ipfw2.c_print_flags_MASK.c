
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct buf_pr {int dummy; } ;
struct _s_x {int x; int s; } ;
struct TYPE_3__ {int arg1; } ;
typedef TYPE_1__ ipfw_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buf_pr*,char*,...) ;
 struct _s_x* VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct buf_pr *VAR_3, char const *VAR_4, ipfw_insn *VAR_5,
    struct _s_x *VAR_6)
{
 char const *VAR_7 = "";
 int VAR_8;
 uint8_t VAR_9 = VAR_5->arg1 & 0xff;
 uint8_t VAR_10 = (VAR_5->arg1 >> 8) & 0xff;

 if (VAR_6 == VAR_2 && VAR_9 == VAR_1 && VAR_10 == VAR_0) {
  FUNC_0(VAR_3, " setup");
  return;
 }

 FUNC_0(VAR_3, " %s ", VAR_4);
 for (VAR_8=0; VAR_6[VAR_8].x != 0; VAR_8++) {
  if (VAR_9 & VAR_6[VAR_8].x) {
   VAR_9 &= ~VAR_6[VAR_8].x;
   FUNC_0(VAR_3, "%s%s", VAR_7, VAR_6[VAR_8].s);
   VAR_7 = ",";
  }
  if (VAR_10 & VAR_6[VAR_8].x) {
   VAR_10 &= ~VAR_6[VAR_8].x;
   FUNC_0(VAR_3, "%s!%s", VAR_7, VAR_6[VAR_8].s);
   VAR_7 = ",";
  }
 }
}
