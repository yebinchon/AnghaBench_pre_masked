
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {int mwcnt; int mwoff; int spadcnt; int spadoff; int dbcnt; int dboff; int function; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct ntb_child* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int) ;

int
FUNC_5(device_t VAR_0, device_t VAR_1)
{
 struct ntb_child *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2->mwcnt > 0) {
  FUNC_4(" mw %d", VAR_2->mwoff);
  if (VAR_2->mwcnt > 1)
   FUNC_4("-%d", VAR_2->mwoff + VAR_2->mwcnt - 1);
 }
 if (VAR_2->spadcnt > 0) {
  FUNC_4(" spad %d", VAR_2->spadoff);
  if (VAR_2->spadcnt > 1)
   FUNC_4("-%d", VAR_2->spadoff + VAR_2->spadcnt - 1);
 }
 if (VAR_2->dbcnt > 0) {
  FUNC_4(" db %d", VAR_2->dboff);
  if (VAR_2->dbcnt > 1)
   FUNC_4("-%d", VAR_2->dboff + VAR_2->dbcnt - 1);
 }
 VAR_3 += FUNC_4(" at function %d", VAR_2->function);
 VAR_3 += FUNC_0(VAR_0, VAR_1);
 VAR_3 += FUNC_1(VAR_0, VAR_1);

 return (VAR_3);
}
