
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;
struct mge_softc {int ifp; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mge_softc*,int ,char) ;
 int FUNC_3 (struct mge_softc*,char,int ) ;

__attribute__((used)) static void
FUNC_4(struct mge_softc *VAR_3)
{
 char *VAR_4;
 uint32_t VAR_5, VAR_6;

 FUNC_1(VAR_3);

 VAR_4 = (char *)FUNC_0(VAR_3->ifp);

 VAR_5 = (VAR_4[4] << 8) | (VAR_4[5]);
 VAR_6 = (VAR_4[0] << 24)| (VAR_4[1] << 16) |
     (VAR_4[2] << 8) | (VAR_4[3] << 0);

 FUNC_2(VAR_3, VAR_1, VAR_5);
 FUNC_2(VAR_3, VAR_0, VAR_6);

 FUNC_3(VAR_3, VAR_4[5], VAR_2);
}
