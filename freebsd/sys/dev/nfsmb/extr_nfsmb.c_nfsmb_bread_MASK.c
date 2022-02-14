
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nfsmb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfsmb_softc*) ;
 int FUNC_2 (struct nfsmb_softc*,scalar_t__) ;
 int FUNC_3 (struct nfsmb_softc*,int ,int) ;
 int FUNC_4 (struct nfsmb_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct nfsmb_softc*) ;
 int FUNC_7 (char*,int,int,char,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9, u_char VAR_10, char VAR_11, u_char *VAR_12, char *VAR_13)
{
 struct nfsmb_softc *VAR_14 = (struct nfsmb_softc *)FUNC_5(VAR_9);
 u_char VAR_15, VAR_16, VAR_17;
 int VAR_18;

 if (*VAR_12 < 1 || *VAR_12 > 32)
  return (VAR_4);

 FUNC_1(VAR_14);
 FUNC_3(VAR_14, VAR_2, VAR_11);
 FUNC_3(VAR_14, VAR_0, VAR_10);
 FUNC_3(VAR_14, VAR_6, VAR_8 | VAR_7);

 if ((VAR_18 = FUNC_6(VAR_14)) == VAR_5) {
  VAR_16 = FUNC_2(VAR_14, VAR_1);
  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   VAR_15 = FUNC_2(VAR_14, VAR_3 + VAR_17);
   if (VAR_17 < *VAR_12)
    VAR_13[VAR_17] = VAR_15;
  }
  *VAR_12 = VAR_16;
 }

 FUNC_0(FUNC_7("nfsmb: READBLK to 0x%x, count=0x%x, cmd=0x%x, error=0x%x", VAR_10, *VAR_12, VAR_11, VAR_18));
 FUNC_4(VAR_14);

 return (VAR_18);
}
