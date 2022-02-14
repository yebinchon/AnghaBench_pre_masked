
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct buf_pr {int dummy; } ;
struct TYPE_3__ {scalar_t__* ports; } ;
typedef TYPE_1__ ipfw_insn_u16 ;
typedef int ipfw_insn ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct buf_pr*,char*,...) ;
 char* FUNC_2 (int ,int) ;
 int FUNC_3 (struct buf_pr*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct buf_pr *VAR_1, ipfw_insn_u16 *VAR_2, int VAR_3, int VAR_4)
{
 uint16_t *VAR_5 = VAR_2->ports;
 int VAR_6;
 char const *VAR_7;

 if (VAR_4 != 0) {
  VAR_7 = FUNC_2(VAR_0, VAR_4);
  if (VAR_7 == ((void*)0))
   VAR_7 = "???";
  FUNC_1(VAR_1, " %s", VAR_7);
 }
 VAR_7 = " ";
 for (VAR_6 = FUNC_0((ipfw_insn *)VAR_2) - 1; VAR_6 > 0; VAR_6--, VAR_5 += 2) {
  FUNC_1(VAR_1, "%s", VAR_7);
  FUNC_3(VAR_1, VAR_3, VAR_5[0]);
  if (VAR_5[0] != VAR_5[1]) {
   FUNC_1(VAR_1, "-");
   FUNC_3(VAR_1, VAR_3, VAR_5[1]);
  }
  VAR_7 = ",";
 }
}
