
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct twsi_softc {int mutex; int reg_status; int reg_data; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct twsi_softc*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct twsi_softc*,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 struct twsi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct twsi_softc*) ;
 scalar_t__ FUNC_8 (struct twsi_softc*,int,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5, const char *VAR_6, int VAR_7, int *VAR_8, int VAR_9)
{
 struct twsi_softc *VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(VAR_5);

 FUNC_5(&VAR_10->mutex);
 *VAR_8 = 0;
 while (*VAR_8 < VAR_7) {
  FUNC_2(VAR_10, VAR_10->reg_data, *VAR_6++);

  FUNC_7(VAR_10);
  FUNC_0(1000);
  if (FUNC_8(VAR_10, VAR_9, VAR_3)) {
   FUNC_3(VAR_5, "timeout writing data (timeout=%d)\n", VAR_9);
   VAR_12 = VAR_1;
   goto out;
  }

  VAR_11 = FUNC_1(VAR_10, VAR_10->reg_status);
  if (VAR_11 != VAR_4) {
   FUNC_3(VAR_5, "wrong status (%02x) while writing\n", VAR_11);
   VAR_12 = VAR_0;
   goto out;
  }
  (*VAR_8)++;
 }
 VAR_12 = VAR_2;
out:
 FUNC_6(&VAR_10->mutex);
 return (VAR_12);
}
