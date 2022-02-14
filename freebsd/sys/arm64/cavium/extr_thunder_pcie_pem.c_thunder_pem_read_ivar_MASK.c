
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_pem_softc {uintptr_t id; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 uintptr_t FUNC_0 (int) ;
 struct thunder_pem_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct thunder_pem_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, device_t VAR_5, int VAR_6,
    uintptr_t *VAR_7)
{
 struct thunder_pem_softc *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_1(VAR_4);

 if (VAR_6 == VAR_1) {
  VAR_9 = FUNC_2(VAR_8, VAR_3);
  *VAR_7 = FUNC_0(VAR_9);
  return (0);
 }
 if (VAR_6 == VAR_2) {
  *VAR_7 = VAR_8->id;
  return (0);
 }

 return (VAR_0);
}
