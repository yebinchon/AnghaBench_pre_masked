
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct buf_pr {int dummy; } ;
struct _s_x {int x; int s; } ;
struct TYPE_3__ {int limit_mask; int conn_limit; } ;
typedef TYPE_1__ ipfw_insn_limit ;


 int FUNC_0 (struct buf_pr*,char*,int ) ;
 int FUNC_1 (struct buf_pr*,char*,char const*,int ) ;
 struct _s_x* VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct buf_pr *VAR_1, const ipfw_insn_limit *VAR_2)
{
 struct _s_x *VAR_3 = VAR_0;
 char const *VAR_4 = " ";
 uint8_t VAR_5;

 for (VAR_5 = VAR_2->limit_mask; VAR_3->x != 0; VAR_3++) {
  if ((VAR_5 & VAR_3->x) == VAR_3->x) {
   VAR_5 &= ~VAR_3->x;
   FUNC_1(VAR_1, "%s%s", VAR_4, VAR_3->s);
   VAR_4 = ",";
  }
 }
 FUNC_0(VAR_1, " ", VAR_2->conn_limit);
}
