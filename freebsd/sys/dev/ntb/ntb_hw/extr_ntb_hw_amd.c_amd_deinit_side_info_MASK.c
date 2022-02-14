
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct amd_ntb_softc *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(4, VAR_0);
 if (VAR_3 & VAR_1) {
  VAR_3 &= ~VAR_1;
  FUNC_1(4, VAR_0, VAR_3);
  FUNC_0(4, VAR_0);
 }
}
