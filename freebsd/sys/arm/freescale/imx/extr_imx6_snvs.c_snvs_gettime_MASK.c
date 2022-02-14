
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int dummy; } ;
struct snvs_softc {int dev; } ;
typedef int sbintime_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snvs_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,struct timespec*) ;
 struct snvs_softc* FUNC_2 (int ) ;
 struct timespec FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7, struct timespec *VAR_8)
{
 struct snvs_softc *VAR_9;
 sbintime_t VAR_10, VAR_11;

 VAR_9 = FUNC_2(VAR_7);


 if (!(FUNC_0(VAR_9, VAR_4) & VAR_2)) {
  return (VAR_1);
 }
 do {
  VAR_10 = (uint64_t)FUNC_0(VAR_9, VAR_6) << (VAR_3 + 32);
  VAR_10 |= (uint64_t)FUNC_0(VAR_9, VAR_5) << (VAR_3);
  VAR_11 = (uint64_t)FUNC_0(VAR_9, VAR_6) << (VAR_3 + 32);
  VAR_11 |= (uint64_t)FUNC_0(VAR_9, VAR_5) << (VAR_3);
 } while (VAR_10 != VAR_11);

 *VAR_8 = FUNC_3(VAR_10);

 FUNC_1(VAR_9->dev, VAR_0, VAR_8);

 return (0);
}
