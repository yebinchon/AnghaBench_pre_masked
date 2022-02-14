
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ow_temp_softc {int flags; scalar_t__ type; int temp; int reading_interval; int temp_lock; int bad_reads; int bad_crc; int dev; scalar_t__ parasite; } ;
typedef int scratch ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ow_temp_softc*,int *,int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__*) ;
 int FUNC_8 (int ,int*,int) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static void
FUNC_11(void *VAR_4)
{
 struct ow_temp_softc *VAR_5;
 uint8_t VAR_6[8 + 1];
 uint8_t VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_5 = VAR_4;
 FUNC_10("owtstart", FUNC_0(VAR_5->dev) * VAR_3 / 100);
 FUNC_4(&VAR_5->temp_lock);
 VAR_5->flags |= VAR_2;
 FUNC_5(&VAR_5->temp_lock);
 FUNC_7(VAR_5->dev, &VAR_5->parasite);
 if (VAR_5->parasite)
  FUNC_1(VAR_5->dev, "Running in parasitic mode unsupported\n");
 FUNC_4(&VAR_5->temp_lock);
 while ((VAR_5->flags & VAR_1) == 0) {
  FUNC_5(&VAR_5->temp_lock);
  FUNC_6(VAR_5->dev);
  FUNC_4(&VAR_5->temp_lock);
  FUNC_3(VAR_5, &VAR_5->temp_lock, 0, "owtcvt", VAR_3);
  if (VAR_5->flags & VAR_1)
   break;
  FUNC_5(&VAR_5->temp_lock);
  for (VAR_8 = 5; VAR_8 > 0; VAR_8--) {
   VAR_9 = FUNC_8(VAR_5->dev, VAR_6, sizeof(VAR_6));
   if (VAR_9 == 0) {
    VAR_7 = FUNC_9(VAR_5->dev, VAR_6, sizeof(VAR_6) - 1);
    if (VAR_7 == VAR_6[8]) {
     if (VAR_5->type == VAR_0) {
      if (VAR_6[7]) {




       VAR_10 = (int16_t)((VAR_6[0] & 0xfe) |
           (VAR_6[1] << 8)) << 3;
       VAR_10 += 16 - VAR_6[6] - 4;
      } else
       VAR_10 = (int16_t)(VAR_6[0] | (VAR_6[1] << 8)) << 3;
     } else
      VAR_10 = (int16_t)(VAR_6[0] | (VAR_6[1] << 8));
     VAR_5->temp = VAR_10 * 1000 / 16 + 273150;
     break;
    }
    VAR_5->bad_crc++;
   } else
    VAR_5->bad_reads++;
  }
  FUNC_4(&VAR_5->temp_lock);
  FUNC_3(VAR_5, &VAR_5->temp_lock, 0, "owtcvt", VAR_5->reading_interval);
 }
 VAR_5->flags &= ~VAR_2;
 FUNC_5(&VAR_5->temp_lock);
 FUNC_2(0);
}
