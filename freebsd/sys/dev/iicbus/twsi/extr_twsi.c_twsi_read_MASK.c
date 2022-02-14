
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct twsi_softc {int mutex; int reg_data; int reg_status; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (struct twsi_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int) ;
 struct twsi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct twsi_softc*) ;
 int FUNC_7 (struct twsi_softc*,int ) ;
 int FUNC_8 (struct twsi_softc*,int ) ;
 scalar_t__ FUNC_9 (struct twsi_softc*,int,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7, char *VAR_8, int VAR_9, int *VAR_10, int VAR_11, int VAR_12)
{
 struct twsi_softc *VAR_13;
 uint32_t VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_3(VAR_7);

 FUNC_4(&VAR_13->mutex);
 *VAR_10 = 0;
 while (*VAR_10 < VAR_9) {




  VAR_15 = ((*VAR_10 == VAR_9 - 1) && VAR_11) ? 1 : 0;
  if (VAR_15)
   FUNC_7(VAR_13, VAR_3);
  else
   FUNC_8(VAR_13, VAR_3);

  FUNC_6(VAR_13);
  FUNC_0(1000);

  if (FUNC_9(VAR_13, VAR_12, VAR_4)) {
   FUNC_2(VAR_7, "timeout reading data (delay=%d)\n", VAR_12);
   VAR_16 = VAR_1;
   goto out;
  }

  VAR_14 = FUNC_1(VAR_13, VAR_13->reg_status);
  if (VAR_14 != (VAR_15 ?
      VAR_6 : VAR_5)) {
   FUNC_2(VAR_7, "wrong status (%02x) while reading\n", VAR_14);
   VAR_16 = VAR_0;
   goto out;
  }

  *VAR_8++ = FUNC_1(VAR_13, VAR_13->reg_data);
  (*VAR_10)++;
 }
 VAR_16 = VAR_2;
out:
 FUNC_5(&VAR_13->mutex);
 return (VAR_16);
}
