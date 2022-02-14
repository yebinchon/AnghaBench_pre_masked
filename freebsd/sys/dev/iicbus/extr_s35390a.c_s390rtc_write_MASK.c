
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct s390rtc_softc {int sc_addr; } ;
struct iic_msg {int slave; size_t len; int* buf; int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct s390rtc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct iic_msg*,int,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, uint8_t VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
 struct s390rtc_softc *VAR_6 = FUNC_1(VAR_2);
 struct iic_msg VAR_7[] = {
  {
   .slave = VAR_6->sc_addr | VAR_3,
   .flags = VAR_0,
   .len = VAR_5,
   .buf = VAR_4,
  },
 };
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8)
  VAR_4[VAR_8] = FUNC_0(VAR_4[VAR_8]);

 return (FUNC_2(VAR_2, VAR_7, 1, VAR_1));
}
