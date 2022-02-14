
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ntb_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(struct ntb_softc *VAR_13)
{
 uint32_t VAR_14;


 FUNC_1(1, VAR_10, 0xe0);
 FUNC_1(1, VAR_9, 0x40);
 FUNC_1(1, VAR_9, 0x60);
 FUNC_1(1, VAR_10, 0x60);


 FUNC_2("ModPhy", VAR_12 / 10);


 VAR_14 = FUNC_0(4, VAR_2);
 VAR_14 &= VAR_11;
 FUNC_1(4, VAR_2, VAR_14);


 VAR_14 = FUNC_0(4, VAR_5);
 VAR_14 |= VAR_6;
 FUNC_1(4, VAR_5, VAR_14);


 VAR_14 = FUNC_0(4, VAR_1);
 VAR_14 |= VAR_0;
 FUNC_1(4, VAR_1, VAR_14);

 VAR_14 = FUNC_0(4, VAR_4);
 VAR_14 &= VAR_3;
 FUNC_1(4, VAR_4, VAR_14);


 VAR_14 = FUNC_0(4, VAR_8);
 VAR_14 &= ~VAR_7;
 FUNC_1(4, VAR_8, VAR_14);
}
