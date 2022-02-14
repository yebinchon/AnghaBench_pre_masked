
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct uhid_softc {int sc_iface_index; int sc_udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int *,void*,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct uhid_softc *VAR_4, uint8_t VAR_5,
    uint8_t VAR_6, void *VAR_7, void *VAR_8,
    uint16_t VAR_9)
{
 int VAR_10;
 uint8_t VAR_11 = 0;

 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_2(VAR_9, VAR_2, VAR_3);
  if (VAR_7 == ((void*)0)) {
   VAR_10 = VAR_0;
   goto done;
  }
  VAR_11 = 1;
  VAR_10 = FUNC_0(VAR_8, VAR_7, VAR_9);
  if (VAR_10) {
   goto done;
  }
 }
 VAR_10 = FUNC_3(VAR_4->sc_udev, ((void*)0), VAR_7,
     VAR_9, VAR_4->sc_iface_index, VAR_5, VAR_6);
 if (VAR_10) {
  VAR_10 = VAR_1;
  goto done;
 }
done:
 if (VAR_11) {
  FUNC_1(VAR_7, VAR_2);
 }
 return (VAR_10);
}
