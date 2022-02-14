
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct vmbus_ic_softc {int ic_dev; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct vmbus_ic_softc*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,struct timespec*) ;
 int FUNC_4 (struct timespec*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_5(struct vmbus_ic_softc *VAR_11, uint64_t VAR_12, uint64_t VAR_13,
    uint8_t VAR_14)
{
 struct timespec VAR_15;
 uint64_t VAR_16, VAR_17, VAR_18 = 0;

 if (FUNC_0(VAR_11))
  VAR_18 = FUNC_2() - VAR_13;

 VAR_16 = (VAR_12 - VAR_3 + VAR_18) * VAR_1;
 FUNC_4(&VAR_15);
 VAR_17 = (VAR_15.tv_sec * VAR_2) + VAR_15.tv_nsec;

 if ((VAR_14 & VAR_5) && !VAR_8) {
  struct timespec VAR_19;

  if (VAR_6) {
   FUNC_1(VAR_11->ic_dev, "apply sync request, "
       "hv: %ju, vm: %ju\n",
       (uintmax_t)VAR_16, (uintmax_t)VAR_17);
  }
  VAR_19.tv_sec = VAR_16 / VAR_2;
  VAR_19.tv_nsec = VAR_16 % VAR_2;
  FUNC_3(VAR_7, VAR_0, &VAR_19);

  return;
 }

 if ((VAR_14 & VAR_4) &&
     VAR_9 >= 0) {
  int64_t VAR_20;

  if (VAR_10) {
   FUNC_1(VAR_11->ic_dev, "sample request, "
       "hv: %ju, vm: %ju\n",
       (uintmax_t)VAR_16, (uintmax_t)VAR_17);
  }

  if (VAR_16 > VAR_17)
   VAR_20 = VAR_16 - VAR_17;
  else
   VAR_20 = VAR_17 - VAR_16;

  VAR_20 /= 1000000;

  if (VAR_20 > VAR_9) {
   struct timespec VAR_21;

   if (VAR_6) {
    FUNC_1(VAR_11->ic_dev,
        "apply sample request, hv: %ju, vm: %ju\n",
        (uintmax_t)VAR_16, (uintmax_t)VAR_17);
   }
   VAR_21.tv_sec = VAR_16 / VAR_2;
   VAR_21.tv_nsec = VAR_16 % VAR_2;
   FUNC_3(VAR_7, VAR_0, &VAR_21);
  }

  return;
 }
}
