
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mfi_softc*,int ) ;
 int FUNC_1 (struct mfi_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mfi_softc *VAR_2)
{
 int32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if ((VAR_3 & VAR_1) == 0)
  return 1;

 FUNC_1(VAR_2, VAR_0, VAR_3);
 return 0;
}
