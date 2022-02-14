
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipu_softc {int dummy; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ipu_softc*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ipu_softc*,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct ipu_softc *VAR_15, int VAR_16)
{
 int VAR_17;
 uint32_t VAR_18;

 if (VAR_16)
  VAR_17 = 2;
 else
  VAR_17 = 5;

 FUNC_4(VAR_15, VAR_8, VAR_17, 3);
 FUNC_4(VAR_15, VAR_2, VAR_17 + 1, 2);
 FUNC_4(VAR_15, VAR_5, VAR_17 + 2, 1);
 FUNC_4(VAR_15, VAR_6, 0, 0);
 FUNC_4(VAR_15, VAR_7, 0, 0);
 FUNC_4(VAR_15, VAR_0, 0, 0);
 FUNC_4(VAR_15, VAR_1, 0, 0);
 FUNC_4(VAR_15, VAR_4, 0, 0);
 FUNC_4(VAR_15, VAR_3, 0, 0);

 VAR_18 = FUNC_3(0x02) |
            FUNC_1(VAR_14) |
     FUNC_2(VAR_14);

 FUNC_0(VAR_15, VAR_13, VAR_18);
 FUNC_0(VAR_15, VAR_12, 0x00000000);
 FUNC_0(VAR_15, VAR_9, VAR_11 | VAR_10);
}
