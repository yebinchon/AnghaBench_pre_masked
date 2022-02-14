
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nfsmb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfsmb_softc*) ;
 int FUNC_2 (struct nfsmb_softc*,int ,int) ;
 int FUNC_3 (struct nfsmb_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct nfsmb_softc*) ;
 int FUNC_6 (char*,int,char,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, u_char VAR_6, char VAR_7)
{
 struct nfsmb_softc *VAR_8 = (struct nfsmb_softc *)FUNC_4(VAR_5);
 int VAR_9;

 FUNC_1(VAR_8);
 FUNC_2(VAR_8, VAR_1, VAR_7);
 FUNC_2(VAR_8, VAR_0, VAR_6);
 FUNC_2(VAR_8, VAR_2, VAR_4 | VAR_3);

 VAR_9 = FUNC_5(VAR_8);

 FUNC_0(FUNC_6("nfsmb: SENDB to 0x%x, byte=0x%x, error=0x%x\n", VAR_6, VAR_7, VAR_9));
 FUNC_3(VAR_8);

 return (VAR_9);
}
