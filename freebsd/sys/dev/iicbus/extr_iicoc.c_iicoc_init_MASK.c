
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicoc_softc {int clockfreq; int i2cfreq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iicoc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5)
{
 struct iicoc_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_1(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_2,
     VAR_7 & ~(VAR_0 | VAR_1));
 VAR_7 = (VAR_6->clockfreq/(5 * VAR_6->i2cfreq)) - 1;
 FUNC_2(VAR_5, VAR_4, VAR_7 & 0xff);
 FUNC_2(VAR_5, VAR_3, VAR_7 >> 8);
 VAR_7 = FUNC_1(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_2, VAR_7 | VAR_0);

 VAR_7 = FUNC_1(VAR_5, VAR_2);

 return ((VAR_7 & VAR_0) == 0);
}
