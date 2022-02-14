
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct cs4231_softc {int dummy; } ;
struct cs4231_channel {scalar_t__ speed; scalar_t__ dir; struct cs4231_softc* parent; } ;
typedef int speed_table ;
typedef int kobj_t ;




 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct cs4231_softc*,scalar_t__,int ) ;
 int FUNC_5 (struct cs4231_softc*,int ) ;

__attribute__((used)) static u_int32_t
FUNC_6(kobj_t VAR_3, void *VAR_4, u_int32_t VAR_5)
{
 typedef struct {
  u_int32_t speed;
  u_int8_t bits;
 } speed_struct;

 const static speed_struct VAR_6[] = {
  {5510, (0 << 1) | 128},
  {5510, (0 << 1) | 128},
  {6620, (7 << 1) | 128},
  {8000, (0 << 1) | 129},
  {9600, (7 << 1) | 129},
  {11025, (1 << 1) | 128},
  {16000, (1 << 1) | 129},
  {18900, (2 << 1) | 128},
  {22050, (3 << 1) | 128},
  {27420, (2 << 1) | 129},
  {32000, (3 << 1) | 129},
  {33075, (6 << 1) | 128},
  {33075, (4 << 1) | 128},
  {44100, (5 << 1) | 128},
  {48000, (6 << 1) | 129},
 };

 struct cs4231_softc *VAR_7;
 struct cs4231_channel *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 u_int8_t VAR_12;

 VAR_8 = VAR_4;
 VAR_7 = VAR_8->parent;
 FUNC_0(VAR_7);
 if (VAR_8->speed == VAR_5) {
  FUNC_1(VAR_7);
  return (VAR_5);
 }
 VAR_10 = sizeof(VAR_6) / sizeof(speed_struct);

 for (VAR_9 = 1, VAR_11 =0; VAR_9 < VAR_10 - 1; VAR_9++)
  if (FUNC_3(VAR_5 - VAR_6[VAR_9].speed) <
      FUNC_3(VAR_5 - VAR_6[VAR_11].speed))
   VAR_11 = VAR_9;
 FUNC_2(("SPEED: %s : %dHz -> %dHz\n", VAR_8->dir == VAR_2 ?
     "playback" : "capture", VAR_5, VAR_6[VAR_11].speed));
 VAR_5 = VAR_6[VAR_11].speed;

 VAR_12 = FUNC_5(VAR_7, VAR_0);
 VAR_12 &= ~VAR_1;
 VAR_12 |= VAR_6[VAR_11].bits;
 FUNC_4(VAR_7, VAR_8->dir, VAR_12);
 VAR_8->speed = VAR_5;
 FUNC_1(VAR_7);

 return (VAR_5);
}
