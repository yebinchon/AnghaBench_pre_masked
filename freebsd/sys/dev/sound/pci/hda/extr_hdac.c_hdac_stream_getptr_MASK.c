
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdac_softc {int mem; } ;
typedef int device_t ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 struct hdac_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct hdac_softc*,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4)
{
 struct hdac_softc *VAR_5 = FUNC_2(VAR_1);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_6 >= 0,
     ("Reset for not allocated stream (%d/%d)\n", VAR_3, VAR_4));

 VAR_7 = VAR_6 << 5;
 return (FUNC_0(&VAR_5->mem, VAR_7 + VAR_0));
}
