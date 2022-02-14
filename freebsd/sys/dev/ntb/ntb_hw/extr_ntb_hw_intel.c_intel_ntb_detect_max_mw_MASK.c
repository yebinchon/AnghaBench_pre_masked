
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ type; int mw_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct ntb_softc *VAR_5)
{

 if (VAR_5->type == VAR_1) {
  VAR_5->mw_count = VAR_0;
  return;
 }

 if (FUNC_0(VAR_5, VAR_2))
  VAR_5->mw_count = VAR_3;
 else
  VAR_5->mw_count = VAR_4;
}
