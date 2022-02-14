
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct iicbb_softc {int udelay; int iicbus; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct iicbb_softc *VAR_0, u_char VAR_1)
{
 u_int VAR_2, VAR_3;
 VAR_2 = FUNC_0(VAR_0->iicbus, VAR_1);
 VAR_3 = 1000000 / VAR_2;
 VAR_0->udelay = FUNC_1(VAR_3, 1);
}
