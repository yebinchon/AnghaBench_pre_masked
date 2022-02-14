
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int byte_time_sbt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct i2c_softc*,int ) ;
 int FUNC_2 (char*,int,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct i2c_softc *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 FUNC_2("imxi2c", VAR_8->byte_time_sbt, VAR_8->byte_time_sbt / 20, 0);

 VAR_10 = 10000;
 while (VAR_10 --) {
  VAR_11 = FUNC_1(VAR_8, VAR_3);
  if (VAR_11 & VAR_1) {
                        if (VAR_11 & VAR_0)
    return (VAR_4);
   else if (VAR_9 && (VAR_11 & VAR_2))
    return (VAR_5);
   else
    return (VAR_7);
  }
  FUNC_0(1);
 }
 return (VAR_6);
}
