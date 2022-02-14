
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_softc {int wol; } ;
typedef int if_t ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnxt_softc*) ;
 scalar_t__ FUNC_1 (struct bnxt_softc*) ;
 int FUNC_2 (struct bnxt_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct bnxt_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_3)
{
 struct bnxt_softc *VAR_4 = FUNC_5(VAR_3);
 if_t VAR_5 = FUNC_4(VAR_3);

 if (!VAR_4)
  return -VAR_0;

 if (!FUNC_2(VAR_4))
  return -VAR_1;

 if (FUNC_3(VAR_5) & VAR_2) {
  if (!VAR_4->wol) {
   if (FUNC_0(VAR_4))
    return -VAR_0;
   VAR_4->wol = 1;
  }
 } else {
  if (VAR_4->wol) {
   if (FUNC_1(VAR_4))
    return -VAR_0;
   VAR_4->wol = 0;
  }
 }

 return 0;
}
