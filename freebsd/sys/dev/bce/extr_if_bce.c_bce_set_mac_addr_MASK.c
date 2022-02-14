
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bce_softc {int* eaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*,int ,char*,int*,char*) ;
 int FUNC_3 (struct bce_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bce_softc *VAR_4)
{
 u32 VAR_5;
 u8 *VAR_6 = VAR_4->eaddr;



 FUNC_0(VAR_3);
 FUNC_2(VAR_4, VAR_2, "Setting Ethernet address = "
     "%6D\n", VAR_4->eaddr, ":");

 VAR_5 = (VAR_6[0] << 8) | VAR_6[1];

 FUNC_3(VAR_4, VAR_0, VAR_5);

 VAR_5 = (VAR_6[2] << 24) | (VAR_6[3] << 16) |
     (VAR_6[4] << 8) | VAR_6[5];

 FUNC_3(VAR_4, VAR_1, VAR_5);

 FUNC_1(VAR_3);
}
