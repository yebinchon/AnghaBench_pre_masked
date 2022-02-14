
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t u_int ;
typedef int u_char ;
struct i2c_softc {int byte_time_sbt; int iicbus; } ;
typedef int device_t ;
struct TYPE_3__ {size_t divisor; scalar_t__ regcode; } ;


 int FUNC_0 (struct i2c_softc*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 struct i2c_softc* FUNC_2 (int ) ;
 size_t FUNC_3 (size_t,size_t) ;
 int FUNC_4 (struct i2c_softc*) ;
 int FUNC_5 (struct i2c_softc*,int ,int) ;
 size_t FUNC_6 () ;
 size_t FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, u_char VAR_6, u_char VAR_7, u_char *VAR_8)
{
 struct i2c_softc *VAR_9;
 u_int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_2(VAR_5);

 FUNC_0(VAR_9, 1, "reset\n");





 VAR_13 = FUNC_6();
 VAR_10 = FUNC_1(VAR_9->iicbus, VAR_6);
 VAR_11 = FUNC_3(VAR_13, VAR_10);
 for (VAR_12 = 0; VAR_12 < FUNC_7(VAR_4); VAR_12++) {
  if (VAR_4[VAR_12].divisor >= VAR_11)
   break;
 }
 VAR_10 = VAR_13 / VAR_4[VAR_12].divisor;
 VAR_9->byte_time_sbt = VAR_3 * (9000000 / VAR_10);




 FUNC_5(VAR_9, VAR_2, 0x0);
 FUNC_5(VAR_9, VAR_0, 0x0);
 FUNC_5(VAR_9, VAR_1, (uint8_t)VAR_4[VAR_12].regcode);





 return (FUNC_4(VAR_9));
}
