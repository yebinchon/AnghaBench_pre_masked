
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct psm_softc*) ;
 int FUNC_2 (struct psm_softc*,int) ;

__attribute__((used)) static void
FUNC_3(struct psm_softc *VAR_1)
{
 FUNC_0(2, (VAR_0, "psm: setting pass-through mode.\n"));
 FUNC_2(VAR_1, FUNC_1(VAR_1) | (1 << 5));
}
