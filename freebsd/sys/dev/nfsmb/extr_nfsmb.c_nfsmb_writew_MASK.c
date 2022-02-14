
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nfsmb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfsmb_softc*) ;
 int FUNC_2 (struct nfsmb_softc*,scalar_t__,int) ;
 int FUNC_3 (struct nfsmb_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct nfsmb_softc*) ;
 int FUNC_6 (char*,int,char,short,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6, u_char VAR_7, char VAR_8, short VAR_9)
{
 struct nfsmb_softc *VAR_10 = (struct nfsmb_softc *)FUNC_4(VAR_6);
 int VAR_11;

 FUNC_1(VAR_10);
 FUNC_2(VAR_10, VAR_1, VAR_8);
 FUNC_2(VAR_10, VAR_2, VAR_9);
 FUNC_2(VAR_10, VAR_2 + 1, VAR_9 >> 8);
 FUNC_2(VAR_10, VAR_0, VAR_7);
 FUNC_2(VAR_10, VAR_3, VAR_5 | VAR_4);

 VAR_11 = FUNC_5(VAR_10);

 FUNC_0(FUNC_6("nfsmb: WRITEW to 0x%x, cmd=0x%x, word=0x%x, error=0x%x\n", VAR_7, VAR_8, VAR_9, VAR_11));
 FUNC_3(VAR_10);

 return (VAR_11);
}
