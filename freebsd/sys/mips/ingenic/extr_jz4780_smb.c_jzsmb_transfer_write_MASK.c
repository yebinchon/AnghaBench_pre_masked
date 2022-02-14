
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct timespec {int dummy; } ;
struct jzsmb_softc {int dummy; } ;
struct iic_msg {int len; size_t* buf; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (struct jzsmb_softc*) ;
 size_t FUNC_2 (struct jzsmb_softc*,int ) ;
 int FUNC_3 (struct jzsmb_softc*,int ,size_t) ;
 struct jzsmb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (struct timespec*) ;
 int VAR_7 ;
 int FUNC_7 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_8 (struct timespec*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_8, struct iic_msg *VAR_9, int VAR_10)
{
 struct jzsmb_softc *VAR_11;
 struct timespec VAR_12, VAR_13;
 uint16_t VAR_14, VAR_15;
 int VAR_16;

 VAR_11 = FUNC_4(VAR_8);
 VAR_16 = VAR_1 * VAR_9->len;

 FUNC_1(VAR_11);

 VAR_14 = FUNC_2(VAR_11, VAR_2);
 VAR_14 |= VAR_3;
 FUNC_3(VAR_11, VAR_2, VAR_14);

 FUNC_6(&VAR_12);
 for (VAR_15 = VAR_9->len; VAR_15 > 0; VAR_15--) {
  for (;;) {
   FUNC_6(&VAR_13);
   FUNC_7(&VAR_13, &VAR_12, &VAR_13);
   if ((FUNC_2(VAR_11, VAR_5) & VAR_6) != 0) {
    FUNC_3(VAR_11, VAR_4,
        VAR_9->buf[VAR_9->len - VAR_15]);
    break;
   } else
    FUNC_0((1000 * VAR_7) / VAR_1);

   if (FUNC_8(&VAR_13) >= VAR_16) {
    FUNC_5(VAR_8,
        "write timeout (status=0x%02x)\n",
        FUNC_2(VAR_11, VAR_5));
    return (VAR_0);
   }
  }
 }

 if (!VAR_10) {
  VAR_14 = FUNC_2(VAR_11, VAR_2);
  VAR_14 &= ~VAR_3;
  FUNC_3(VAR_11, VAR_2, VAR_14);
 }

 return (0);
}
